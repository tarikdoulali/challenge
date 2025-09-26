#include <stdio.h>

int main() {
    int n, i;
    int somme = 0;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &n);

    int tab[n];
    for (i = 0; i < n; i++) {
        printf("Element %d : ",i+1);
        scanf("%d", &tab[i]);
        somme += tab[i]; 
    }

    printf("La somme des elements est : %d\n", somme);

    return 0;
}