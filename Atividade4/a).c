#include <stdio.h>

int main() {
  int n;

printf ("digite um número real positivo: ");
scanf ("%d",&n);
if (n < 0){
 printf("número inválido\n");
}
else{
 double logaritimo = log10(n);
printf("número válido\n O logaritimo do número é %.2f\n" , n , logaritimo); 

}
  return 0;
}