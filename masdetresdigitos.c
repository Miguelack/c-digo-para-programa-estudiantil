#include <stdio.h>
#include <stdlib.h>

int contador(int numero,int numeroacontar) {
int contador = 0;
    while (numero != 0) {
    if (numero % 10 == numeroacontar) {
    contador++;
        }
    numero /= 10;
    }
return contador;
}

int invertir_nint(int numero) {
int invertido = 0;

while (numero != 0) {
    invertido = invertido * 10 + numero % 10;
    numero /= 10;
    }

return invertido;
}
int main() {
int numerosanalizar=0, i=0,counttres=0,countcinco=0;
long int numero=0,numero_invertido=0;

printf("Cuantos numeros desea analizar? ");
scanf("%d", &numerosanalizar);

for (i = 1; i <= numerosanalizar; i++) {
    printf("Ingrese un numero entero cualquiera: ");
    scanf("%ld", &numero);

if (numero > 99) {
    numero_invertido=invertir_nint(numero);
    printf("El numero invertido es: %ld\n", numero_invertido);
} else if (numero<-99) {
    numero = abs(numero);
    numero_invertido=invertir_nint(numero);
    printf("El numero invertido es: -%ld\n", numero_invertido); }

numero=abs(numero);
counttres=counttres + contador(numero,3);
countcinco=countcinco + contador(numero,5);


    }
    printf("De los %d que ha colocado:",numerosanalizar);
    printf("\nSe ha escrito el numero tres %d veces\n",counttres);
    printf("Se ha escrito el numero cinco %d veces\n",countcinco);

    return 0;
}
