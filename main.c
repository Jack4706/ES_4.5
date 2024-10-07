#include <stdio.h>

int main() {

    int nProdotti;
    int i = 0;
    float prezzoProdotto;
    float prezzoFinale = 0;

    printf("inserisci il numero di prodotti:\n");
    scanf("%d", &nProdotti);

    while(i < nProdotti) {
        printf("inserisci il prezzo del prodotto:\n");
        scanf("%f", &prezzoProdotto);

        prezzoFinale += prezzoProdotto;
        i++;
    }

     printf("il prezzo finale e' %.2f",prezzoFinale);

    return 0;
}
