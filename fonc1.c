#include <stdio.h>
#include <stdlib.h>

int main(){
   int taille;
   int T[taille];
   int somme=0;
   printf ("entre la taille : ");
   scanf ("%d",&taille); 
   for(int i=0;i<taille;i++){
    printf ("T[%d] : ",i);
    scanf ("%d",&T[i]);
}

  for (int i=0;i<taille;i++){
    somme = somme + T[i];
}
  printf ("La somme de element de ce tableua est : %d ",somme);

    return 0;
}