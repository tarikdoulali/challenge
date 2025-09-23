#include <stdio.h>

int main (){
    int n ;
    printf("Entrer le nombre ");
    scanf("%d",&n);
    if (n>0){
        printf("le nombre et positif%d",n);
    }else if (n<0){
        printf("le nombre et negative%d",n);
    }else 
        printf("le nombre et nul%d",n);
    
  return  0 ;
}