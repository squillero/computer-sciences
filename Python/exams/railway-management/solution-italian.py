# https://github.com/squillero/computer-sciences
# Free under certain conditions — see the license for details.


def Calcola_durata_viaggio(oraArr, oraPar):
    ora_e_min_Arr = [int(el) for el in oraArr.strip().split(':')]
    ora_e_min_part = [int(el) for el in oraPar.strip().split(':')]
    min_tot_Arr = ora_e_min_Arr[0] * 60 + ora_e_min_Arr[1]
    min_tot_part = ora_e_min_part[0] * 60 + ora_e_min_part[1]
    return min_tot_Arr - min_tot_part


def verifica_se_oraA_maggiore_di_oraB(ora1, ora2):
    ora_e_min_1 = [int(el) for el in ora1.strip().split(':')]
    ora_e_min_2 = [int(el) for el in ora2.strip().split(':')]
    min_tot_1 = ora_e_min_1[0] * 60 + ora_e_min_1[1]
    min_tot_2 = ora_e_min_2[0] * 60 + ora_e_min_2[1]
    return min_tot_1 > min_tot_2


def leggiDati(nome_file):
    Ins_fermate = set()
    Diz_corse_di_una_fermata = {}
    Diz_destinazioni = {}

    try:
        Infile = open(nome_file, 'r')
        for riga in Infile:
            lista_valori = riga.strip().split()
            codice_corsa = lista_valori[0]

            nome_e_ora_ultima_fermata = lista_valori[-1].split(':', maxsplit=1)
            Diz_destinazioni[codice_corsa] = nome_e_ora_ultima_fermata[0]

            for el in lista_valori[1:]:
                lista_campi = el.split(':', maxsplit=1)
                fermata = lista_campi[0]
                ora = lista_campi[1]

                Ins_fermate.add(fermata)

                if fermata in Diz_corse_di_una_fermata:
                    Diz_corse_di_una_fermata[fermata].append((codice_corsa, ora))
                else:
                    Diz_corse_di_una_fermata[fermata] = [(codice_corsa, ora)]

        Infile.close()
        return Ins_fermate, Diz_corse_di_una_fermata, Diz_destinazioni

    except OSError:
        print("Errore in apertura del file")
        exit()


def stampa_stazioni(I):
    print("Elenco ordinato delle stazioni servite")
    for el in sorted(I):
        print(el, end=', ')
    print('\n')


def stampa_orario(D, fermata, ora, D_destinazioni):
    print(f"Orario per la stazione {fermata} dalle {ora} in poi:")

    for corsa in D[fermata]:
        if verifica_se_oraA_maggiore_di_oraB(corsa[1], ora):
            print(f"{corsa[0]} {corsa[1]}; diretto a {D_destinazioni[corsa[0]]}")
    print()


def cerca_stampa_itinerario(D, fermata_A, ora_partenza, fermata_B):
    flag = 0

    for elA in D[fermata_A]:
        codice = elA[0]
        ora_A = elA[1]

        if verifica_se_oraA_maggiore_di_oraB(ora_A, ora_partenza):
            for elB in D[fermata_B]:
                if codice == elB[0] and verifica_se_oraA_maggiore_di_oraB(elB[1], ora_A):
                    durata = Calcola_durata_viaggio(elB[1], ora_A)

                    if flag == 0 or durata < durata_min:
                        durata_min = durata
                        corsa_migliore = codice
                        ora_partenza_migliore = ora_A
                        ora_arrivo_migliore = elB[1]
                        flag = 1

    if flag == 0:
        print("Non ci sono treni diretti tra le stazioni inserite dopo l’orario specificato.")
    else:
        print(f"Viaggio più breve da {fermata_A} a {fermata_B} dalle {ora_partenza} in poi")
        print(f"Treno: {corsa_migliore}")
        print(f"Partenza: {fermata_A} {ora_partenza_migliore}")
        print(f"Arrivo: {fermata_B} {ora_arrivo_migliore}")
        print(f"Durata Viaggio: {durata_min//60}h {durata_min%60}min")
    print()


def main():
    ins_stazioni, diz_corse_ogni_sta, Diz_destinazioni = leggiDati('corse.txt')

    try:
        opFile = open('operazioni.txt', 'r')
        for riga in opFile:
            campi = riga.strip().split()

            if campi[0] == 'Stazioni':
                stampa_stazioni(ins_stazioni)

            elif campi[0] == 'Orario':
                fermata = campi[1]
                ora = campi[2]
                stampa_orario(diz_corse_ogni_sta, fermata, ora, Diz_destinazioni)

            elif campi[0] == 'Viaggio':
                fermata_partenza = campi[1]
                ora_partenza = campi[2]
                fermata_arrivo = campi[3]
                cerca_stampa_itinerario(
                    diz_corse_ogni_sta, fermata_partenza, ora_partenza, fermata_arrivo
                )

        opFile.close()

    except OSError:
        print("Errore nell'apertura del file operazioni.txt")


if __name__ == '__main__':
    main()
