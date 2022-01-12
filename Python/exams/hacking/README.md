# HACKING

The PoliTo company wants to create an application capable of tracking the sales of its products in order to
identify any counterfeits. The application must analyze the contents of two files. A first file of
text `products.txt` is created by the parent company and contains, for each product manufactured, the identifier of the unique one
official dealer who is authorized to sell the product. There are two for each line in the file
information (strings separated by a space):

    product_id reseller_id

Each product and each seller are identified by a unique alphanumeric code.

A second text file `purchases.txt` contains information on sales that have been recorded by
buyers. The file contains on each line the code of the product purchased and the retailer who managed the delivery.

Since a product can only be sold by the official dealer authorized by the parent company,
any purchase of that product by a buyer through an _not official_ retailer must be reported
as a suspicion to then allow the parent company to carry out the necessary checks.

The parent company therefore asks you to write a Python program which, after reading the two input files, prints the
list of possible suspicious sales. Specifically, for each product sold by one or more non-resellers
authorized, the program must print the product code on output (in the format indicated in the example below)
in question, the official reseller and the list of all resellers with which customers have registered the
sale.

*** Note ***: there is no sorting of the two input files

## Example products.txt:

    P234HF22222 r1011  
    P234HF22223 r1112  
    P234HF22225 r1114  
    P111TG11115 r1015  
    P111TG11116 r1216  
    P331LS00110 r1017  
    P331LS00120 r1318  
    P331LS00130 r1019  

## Example purchases.txt

    P234HF22223 r1112
    P111TG11115 r1015
    P111TG11115 r1216
    P234HF22222 r1011
    P331LS00110 r1014
    P331LS00120 r1318
    P331LS00130 r1019
    P234HF22225 r1114
    P234HF22223 r1114

## Program output

    Suspicious transactions list
    Product code: P234HF22223
    Official dealer: r1112
    Dealer list: r1112 r1114
    
    Product code: P111TG11115
    Official dealer: r1216
    Dealer list: r1015 r1216
    
    Product code: P331LS00110
    Official dealer: r1017
    Dealer list: r1014 
