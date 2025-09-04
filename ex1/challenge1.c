#include <stdio.h>
int main () {
    char Nom[50];
    char prenom[50];
    int  Age;
    char Sexe[10];
    char Email[100];

    printf("Entrez vos nom : \n");
    scanf("%49s", &Nom);
    printf("Entrez vos prenom :\n");
    scanf("%49s", &Age);
    printf("Entrez vos age :\n");
    scanf("%d", &Age);
    printf("Entrez vos sexe :\n");
    scanf("%9s", &Sexe);

    return 0;


}