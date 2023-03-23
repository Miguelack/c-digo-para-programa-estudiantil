#include <stdio.h>

int esprimoono(int num) {
    int k;
    for (k = 2; k <= num / 2; k++) {
        if (num % k == 0) {
            return 0;
        }
    }
    return 1;
}
void main () {
int numero_de_repeticiones=0,countpares=0,countcero=0,countimpares=0,countprimos=0,i=0,j=0,num=0,digitodelnumero;
printf ("\nCuantos numeros desea analizar?\n\n");
scanf ("%d",&numero_de_repeticiones);

for (i=1; i<=numero_de_repeticiones;i++){
        printf("\n\nEscriba un numero entero:\n");
        scanf("%d",&num);
if (num==0) {
countcero++;
} else if (num % 2== 0){
    countpares++;
   } else {
    countimpares++; }

if (esprimoono(num)==1) {
    countprimos++; }

while (num!=0) {
digitodelnumero= num % 10;
if (digitodelnumero== 0) {
    countcero++; }
num = num / 10;
}
}

printf("\n\n%d numeros son cero\n\n",countcero);
printf("\n\n%d numeros son pares\n\n",countpares);
printf("\n\n%d numeros son impares\n\n",countimpares);
printf("\n\n%d numeros son primos\n\n",countprimos);


}
