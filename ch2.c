#include <stdio.h>

int main (){
  float c ,k ;
  printf ("Donner moi la température en Celsius ") ;
  scanf ("%f",&c) ;
  k=c+273.15 ;
  printf("la température en Kelvin %f", k) ;
  return  0 ;
}