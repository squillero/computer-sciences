// Copyright © 2019-2020 Giovanni Squillero <giovanni.squillero@polito.it>
// https://github.com/squillero/computer-sciences
// Free under certain conditions — see the license for details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUCTS_WAREHOUSE 100
#define MAX_PRODUCTS_REQUESTS 200
#define PRODUCT_NAME_LENGTH 15
#define BUFFER_SIZE 4096

typedef struct _PRODUCT
{
    char name[PRODUCT_NAME_LENGTH + 1];
    int quantity;
} PRODUCT;

// proto
int find_position(PRODUCT *plist, int plist_len, char *key);

int main(int argc, char *argv[])
{
    FILE *warehouse_file;
    PRODUCT warehouse[MAX_PRODUCTS_WAREHOUSE];
    int num_product;

    if (argc != 3)
    {
        fprintf(stderr, "Yeuch. Wrong number of arguments.\n");
        exit(EXIT_FAILURE);
    }
    if (!(warehouse_file = fopen(argv[1], "r")))
    {
        fprintf(stderr, "Yeuch. Can't open \"%s\".\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    char line[BUFFER_SIZE];
    num_product = 0;
    while (fgets(line, BUFFER_SIZE, warehouse_file) != NULL)
    {
        // valid alt: while(fgets(line, BUFFER_SIZE, warehouse_file)) {
        sscanf(line, "%s %d", warehouse[num_product].name, &warehouse[num_product].quantity);
        ++num_product;
    }
    // valid alt:
    //while(fscanf(warehouse_file, "%s %d",
    //             warehouse[num_product].name,
    //             &warehouse[num_product].quantity) != EOF {
    //    ++num_product;
    //}                                                           )
    fclose(warehouse_file);

    FILE *reqs = fopen(argv[2], "r");
    if (reqs == NULL)
    {
        // valid alt: if(reqs) {
        fprintf(stderr, "Yeuch. Can't open \"%s\".\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    char missing_products[MAX_PRODUCTS_REQUESTS][PRODUCT_NAME_LENGTH + 1] = {0};
    int num_missing_items = 0;
    char product[PRODUCT_NAME_LENGTH + 1];
    while (fscanf(reqs, "%s", product) != EOF)
    {
        int pos = find_position(warehouse, num_product, product);
        if (pos == -1)
        {
            strcpy(missing_products[num_missing_items++], product);
        }
        else
        {
            --warehouse[pos].quantity;
        }
    }

    if (!(warehouse_file = fopen(argv[1], "w")))
    {
        fprintf(stderr, "Yeuch. Can't open \"%s\".\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    for (int p = 0; p < num_product; ++p)
    {
        if (warehouse[p].quantity < 0)
        {
            printf("The excess quantity of %s required is: %d\n",
                   warehouse[p].name, -warehouse[p].quantity);
            fprintf(warehouse_file, "%s 0\n", warehouse[p].name);
        }
        else
        {
            fprintf(warehouse_file, "%s %d\n",
                    warehouse[p].name, warehouse[p].quantity);
        }
    }
    fclose(warehouse_file);

    printf("Missing products:");
    for (int p = 0; p < num_missing_items; ++p)
    {
        printf(" %s", missing_products[p]);
        // todo: remuve dups
    }
    printf("\n");

    return 0;
}

// return the index of the product key, or -1
int find_position(PRODUCT *plist, int plist_len, char *key)
{
    for (int p = 0; p < plist_len; ++p)
    {
        if (strcmp(plist[p].name, key) == 0)
        {
            return p;
        }
    }
    return -1;
}
