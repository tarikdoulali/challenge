
#include <stdio.h>
 
typedef struct  {
    char nom [50];
    char person [50];
    int age ;
}personne ;


int main(){

personne p ;

printf("Enter nom : ");
scanf("%s",&p.nom);
printf("Enter person : ");
scanf("%s",&p.person);
printf("Enter age : ");
scanf("%d",&p.age);

printf("le nom : %s\n",p.nom);
printf("la person :%s\n",p.person);
printf("l'age :%d ",p.age);

return 0;
}