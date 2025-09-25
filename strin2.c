#include<stdio.h>
#include <string.h>

int main (){
   char car[100];
   int longueur = 0;

   printf ("Enter la longueur :");
   gets(car);

   while (car[longueur] != '\0' ) {
        longueur+=1;
    }

    printf("La longueur de chaine est : %d\n", longueur);
    
    return 0 ;
}