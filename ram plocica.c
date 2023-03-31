#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ram {
    int cijena;
    char proizvodac[20];
    int dostupnost;
} proizvodi[100];

int broj_proizvoda = 0;

void filter() {
    FILE*filePointer;
	filePointer=fopen("proizvod.txt","r");
int i;
	while(fscanf(filePointer, "%s\t%d\t%d\n", proizvodi[i].proizvodac, &proizvodi[i].cijena,&proizvodi[i].dostupnost)==3){
        printf("%s\t%d\t%d\n", proizvodi[i].proizvodac, proizvodi[i].cijena, proizvodi[i].dostupnost);
    char odabir[20];
    printf("Unesi ime proizvodaca: ");
    scanf("%s", odabir);
    printf("Proizvodi proizvodaca %s:\n", odabir);
    for (int i = 0; i < broj_proizvoda; i++) {
        if (strcmp(proizvodi[i].proizvodac, odabir) == 0) {
            printf("%s\t%d\t%d\n", proizvodi[i].proizvodac, proizvodi[i].cijena, proizvodi[i].dostupnost);
        }
    }
	}
}


void sortByPrice() {
    for (int i = 0; i < broj_proizvoda - 1; i++) {
        for (int j = 0; j < broj_proizvoda - i - 1; j++) {
            if (proizvodi[j].cijena > proizvodi[j + 1].cijena) {
                struct ram temp = proizvodi[j];
                proizvodi[j] = proizvodi[j + 1];
                proizvodi[j + 1] = temp;
            }
        }
    }

    printf("Proizvodi sortirani po cijeni:\n");
    for (int i = 0; i < broj_proizvoda; i++) {
        printf("%s\t%d\t%d\n", proizvodi[i].proizvodac, proizvodi[i].cijena, proizvodi[i].dostupnost);
    }
}

int main() {
    FILE *fp;
    fp = fopen("proizvod.txt", "r");


    while (fscanf(fp, "%d %s %d", &proizvodi[broj_proizvoda].cijena, proizvodi[broj_proizvoda].proizvodac, &proizvodi[broj_proizvoda].dostupnost) == 3) {
        broj_proizvoda++;
    }
    fclose(fp);

    int odg;
    do {
        printf("Odaberi opciju:\n");
        printf("1. Sortiraj po cijeni\n");
        printf("2. Filtriraj po proizvodacu\n");
        printf("3. Izlaz\n");
        printf("Odabir: ");
        scanf("%d", &odg);

        switch (odg) {
        case 1:
            sortByPrice();
            break;
        case 2:
            filter();
            break;
        case 3:
            printf("Izlazak iz programa.\n");
            break;
        default:
            printf("Molim unesite broj od 1 do 3.\n");
            break;
        }
    } while (odg != 3);

    return 0;
}

