#include <stdio.h>

int main (){
    
    int n ;
    printf("Entrer le nombre du taille :");
    scanf("%d",&n);
    int T[n];
    for (int i = 0; i<n;i++){
        printf("T[%d]",i);
        scanf("%d",&T[i]);
    }
    for(int i = 0; i<n;i++){
        printf("[%d]:%d",i,T[i]);
        
    }

   
    return 0 ;
}