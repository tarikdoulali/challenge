#include <stdio.h>
#include <string.h>
int main (){
    
char titre[100][10] ; 
char auteur[100][10]  ;
float prix[100] ;
int quantite[100] ;
int i ,choix,n=0;
char titreT[25] ;
int x=-1;


do {
        printf("Entrer le nombre du votre choix\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre par titre\n");
        printf("4. Mettre à jour la quantité d'un livre\n");
        printf("5. Supprimer un livre\n");
        printf("6. Afficher le nombre total de livres\n");
        printf("Choix :  ");
        scanf("%d", &choix);
       

    switch (choix) {
     case 1:
        
           printf("Entrer le titre : ");
           scanf("%s", titre[n]);
           printf("Entrer le auteur : ");
           scanf("%s", auteur[n]);
           printf("Entrer le prix : ");
           scanf("%f",&prix[n]);
           printf("Entrer la quantite : ");
           scanf("%d",&quantite[n]);
           n++;
           break;
    case 2:
           
           printf ("+-----+--------+---------+------+----------+\n"); 
           printf ("| ID  | Titre  | Auteur  | Prix | Quantite | \n");
           printf ("+-----+--------+---------+------+----------+\n");
           for(int i=0;i<n;i++)
           {
           printf ("| %d  | %s  | %s  | %.02f |%d  |\n ",i+1,titre[i],auteur[i], prix[i],quantite[i] );
           printf ("+-----+--------+---------+------+--------+\n");
           }
            break;
    
    case 3:
            printf("donner moi le titre  : ");
            scanf("%s",&titreT);
            for (int i=0;i<n;i++){
             if(strcmp(titre[i],titreT)!=0){
               printf("le livre n'est pas disponible ");
               
             }
             else if (strcmp(titre[i],titreT)==0){
                printf("le livre et disponible");
              x = i ;
              break;
             }
            }
               if ( x!=(-1)){
                printf ("Titre : %s \n",titre[x]);
                printf("auteur : %s \n",auteur[x]);
                printf ("Prix : %.2f \n",prix[x]);
                printf ("Quantite : %d \n",quantite[x]);
            

               }
            
             break ;
    case 4:
             printf("donner moi le titre  : ");
            scanf("%s",&titreT);

             for (int i=0;i<n;i++){
             if(strcmp(titre[i],titreT)!=0){
               printf("le livre n'est pas disponible ");
               
             }
             else if (strcmp(titre[i],titreT)==0){
                printf("le livre et disponible");
              x = i ;
              break;
             }
            }
               if ( x!=(-1)){
                printf("Entrer la nouvelle quantité");
                scanf("%d",quantite[x]);
               }
      case 5: 
                printf ("Entre le titre de livre : ");
                scanf ("%s",titreT);
                for(int i=0;i<n;i++){
                    if(strcmp(titre[i],titreT)==0){
                       x=i;
                       break;
                    }
                } 
                 if(x==(-1))
                 printf ("! le livre  n'existe pas !\n");
                else {
                    for(int i=x;i<n;i++){
                        strcpy(titre[i],titre[i+1]);
                        strcpy(auteur[i],auteur[i+1]);
                        prix[i] = prix[i+1];
                        quantite[i] = quantite[i+1];
                    }
                 printf("Supprimé avec succès ! \n");
                    n--;
                }
                    break;
        case 6: printf("le Nombre Total de Livres en Stock : %d ",n);
        break;
        case 7: printf (" le programme est termine !");
        break;
        default : printf ("Entre un nombre entre 1 et 7 ");
        break;
       }

    } while (choix !=0);

    return 0 ;
}

