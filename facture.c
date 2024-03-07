#include <stdio.h>

struct Article {
    char nom[50];
    float prix;
    int quantite;
};

int main() {
    char nomClient[50];
    struct Article articles[3];
    float tauxTVA;
    char modePaiement[50];
    float totalHT = 0;
    float montantTVA;
    float totalTTC;

    printf("Entrez le nom du client: ");
    scanf("%s", nomClient);

    for(int i = 0; i < 3; i++) {
        printf("Entrez le nom de l'article %d: ", i+1);
        scanf("%s", articles[i].nom);
        printf("Entrez le prix de l'article %d: ", i+1);
        scanf("%f", &articles[i].prix);
        printf("Entrez la quantite de l'article %d: ", i+1);
        scanf("%d", &articles[i].quantite);

        totalHT += articles[i].prix * articles[i].quantite;
    }

    printf("Entrez le taux de la TVA: ");
    scanf("%f", &tauxTVA);

    printf("Entrez le mode de paiement: ");
    scanf("%s", modePaiement);

    montantTVA = totalHT * tauxTVA / 100;
    totalTTC = totalHT + montantTVA;

    printf("\nFacture:\n");
    printf("Nom du client: %s\n", nomClient);
    for(int i = 0; i < 3; i++) {
        printf("Article %d: %s, Prix: %.2f, Quantite: %d\n", i+1, articles[i].nom, articles[i].prix, articles[i].quantite);
    }
    printf("Total HT: %.2f\n", totalHT);
    printf("Taux de la TVA: %.2f\n", tauxTVA);
    printf("Montant de la TVA: %.2f\n", montantTVA);
    printf("Total TTC: %.2f\n", totalTTC);
    printf("Mode de paiement: %s\n", modePaiement);

    return 0;
}