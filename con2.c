#include <stdio.h>

int main (){
  char v ;
  printf("Entrer le voyelle\n");
  scanf("%c",&v);

  switch (v) {
   case  'a':  case 'A':
   case 'e':   case 'E':
   case 'i':   case 'I':
   case 'o':   case 'O':
   case 'u':   case 'U':
   case 'y':   case 'Y':
   printf("oui est voyelle\n");
  break ;
  default : printf("non voyelle");
}
  return  0 ;
}