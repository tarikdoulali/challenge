#include <stdio.h>

int main (){
  float ms,kmh ;
  printf ("Donner moi la température en Celsius ") ;
  scanf ("%f",&kmh) ;
  ms=kmh*0.27778 ;
  printf("la température en Kelvin %f", ms) ;
  return  0 ;
}