#include <stdio.h>

int suma_de_divisores(int numero) {
    int i,sumadedivisores=0;
    for(i=1;i<numero;i++)
    if(numero%i==0) {
        sumadedivisores= sumadedivisores + i; }
return (sumadedivisores);
}

int main() {
long int numero_1=0,numero_2=0,divisores_1=0,divisores_2=0;

do {
printf("\n\nIngrese su primer numero entero positivo:");
scanf("%ld",&numero_1);
if (numero_1<0) {
printf("\n\nError. El numero debe ser positivo.\n");
}
} while(numero_1<0);
do {
printf("\n\nIngrese su segundo numero entero positivo:");
scanf("%ld",&numero_2);
if (numero_2<0) {
printf("\n\nError. El numero debe ser positivo.\n");
}

} while(numero_2<0);

divisores_1=suma_de_divisores(numero_1);
divisores_2=suma_de_divisores(numero_2);

if (divisores_1==numero_2 && divisores_2==numero_1) {
printf("\nEstos dos numeros son amigos.");
} else {
printf("\nEstos dos numeros son enemigos."); }
return 0;

}





