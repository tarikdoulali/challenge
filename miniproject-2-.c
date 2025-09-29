#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
typedef struct contact {
   int ID;
   char nom[100];
   char numero[11] ;
   char adresse_email[50];

}contact ;


typedef contact contacts[1000];



int main (){
   contacts e={{1,"tarik  ","0632940760","tarikdoulali95@gmail.com"},
              {2,"aziz   ","0708079023","aziz.hdad003@gmail.com  "},
              {3,"abdelah","0604789190","lemtiriabdelah@gmail.com"},
              {4,"hamza  ","0649499386","hamzakh08@gmail.com     "},
              {5,"yassir ","0772058881","yassirzbida@gmail.com   "}
             };
    int nbr ;
    char nom1[50];
    int n=5;
    int x=-1;


    char choix ;
do{
    printf("-------choix---------\n");
    printf("1-Ajouter un contact\n");
    printf("2-Modifier un contact\n");
    printf("3-Supprimer un contact\n");
    printf("4-Afficher tous les contacts\n");
    printf("5-Recherche un contact\n");
    printf("6-Quiter le programme\n");
    printf("\nTon choix et :\n");
    scanf("%d",&choix);


   switch (choix){
        case 1:
          printf("Entrer le nombre de contact qui vous souhaite d'ajouter  : ");
          scanf("%d",&nbr);
          nbr = nbr+n;
            printf("--------Ajouter un contact-------\n");
            for(int i=n;i<nbr;i++){
            e[i].ID=i+1;
            printf("Ajouter le nom :\n");
            scanf("%s",e[i].nom);
            printf("Ajouter un Numero de telephone :\n");
            scanf("%s", e[i].numero);
            printf("Ajouter le adresee_email\n");
            scanf("%s",e[i].adresse_email);
            n++;
            }
            printf("traitment avec succes\n");
            break;
        case 2:
              printf("--------Modifier un contact-------\n");
              printf("Entrer le nom de contact :  ");
              scanf("%s",&nom1);
              for(int i=0;i<n;i++){
              if(strcmpi(e[i].nom,nom1)==0){
                x=i;
                printf("Entrer le nouveaux nom : ");scanf("%s",e[i].nom);
                printf("Entrer le nouveaux numero :");scanf("%s",e[i].numero);
                printf("Entrer le nouveaux adresse_email : ");scanf("%s",e[i].adresse_email);
                break;
                }
              }
              if(x==(-1)){
                printf("n'existe pas ce contact");
              }

            break;
        case 3:
            printf("--------Supprimer un contact-------\n");
            printf ("Entre le contact de : ");
            scanf ("%s",nom1);
                for(int i=0;i<n;i++){
                    if(strcmp(e[i].nom,nom1)==0){
                       x=i;
                       break;
                    }
                }
                 if(x==(-1))
                 printf ("! le contact  n'existe pas !\n");
                else {
                    for(int i=x;i<n-1;i++){
                        e[i]=e[i+1];
                    }
                    }
                 printf("Supprimé avec succès ! \n");
                    n--;
                    for(int i=0;i<n;i++){
                        e[i].ID=i+1;
                    }

            break;
        case 4:

           printf("+----------+-----------------------+-------------------------+-----------------------------------------+\n");
           printf("|    ID    |           nom         |          numero         |      adresse_email                      |\n");
           printf("+----------+-----------------------+-------------------------+-----------------------------------------+\n");
           for(int i=0;i<n;i++)
           {
           printf("|   %d      |        %s        |  %s             | %s                |\n ",e[i].ID,e[i].nom,e[i].numero,e[i].adresse_email);
       printf("+----------+-----------------------+-------------------------+-----------------------------------------+\n");
           }
            break;

        case 5:
            printf("--------Rechercher un contact--------\n");
            printf ("Entre le nom de contact : ");
            scanf ("%s",nom1);
            for(int i=0;i<n;i++){
               if(strcmp(e[i].nom,nom1)==0){
               x=i;
                 break;
                }
            } if(x==(-1))
               printf ("!le contact  n'existe pas !");
             else {
             printf("le nom : %s",e[x].nom);
             printf("le numero : %s",e[x].numero);
             printf(" le adress_email : %s", e[x].adresse_email);
             }

        case 6:
            printf("\nle programme Quiter \n");

            break;

     }
}while(choix!=6);

return 0;
}
