#include <stdio.h>

int main (){
    int n ;
    char an [1],jours [365],heures[24] ,minutes[60] ,seconde[60] ;
   printf ("donner moi le n")
    scanf("%d",&n);
    switch (n){
        case 'jours':
             printf("le jours",12*jours);
        case 'jours':
             printf("le heures ",24*heures);
        case 'minutes' :
        printf("les minutes",60*minutes);
        case 'seconde' :
        printf("les seconde",60* seconde);
    }
  return  0 ;
}