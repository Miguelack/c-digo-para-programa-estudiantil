#include <stdio.h>
#include <stdlib.h>

int Comparar_Factura(int factura, int factura_ans) {

if (factura>factura_ans) {
factura_ans=factura;
}
return (factura_ans);
}
int parimpar(long int cedula) {
int digito=0;

digito= cedula % 10;
if (digito%2==0) {
return 1 ;

} else {
return 0;
}
}

float calcular_porcentaje(int x, int y) {
    float porcentaje_xy = ((float)y / x) * 100;
    return porcentaje_xy;
}


int main() {

int cant_productos=0,i=0,j=0,color_producto=0,contador_morado=0,contador_amarillo=0,contador_descuento5=0,contador_descuento3=0;
int contador_descuento_general=0,contador_clientes=0;
long int n_cedula=0;
float factura=0,factura_ans=0,porcentaje_descuento=0,factura_comparar=0;

printf("\n\nCuantos clientes analizara el dia de hoy?\n");
scanf("%d",&contador_clientes);

for(j=1;j<=contador_clientes;j++) {
printf("\n\nIngrese el numero de cedula de este cliente:\n");
scanf("%ld",&n_cedula);
n_cedula= abs(n_cedula);

printf("\nCuantos productos se le estan facturando a este cliente?\n");
scanf("%d",&cant_productos);

if(cant_productos>=3) {
for (i=1;i<=cant_productos;i++) {
do {
printf("\nCual es el color de etiqueta del producto n%d:\n\n[1]Morado\n[2]Amarillo\n[3]Otro\n\n",i);
scanf("%d",&color_producto);
if (color_producto<1 || color_producto>3) {
printf("Opcion incorrecta.\n");
}
} while(color_producto<1 || color_producto>3);

switch(color_producto) {

case 1: {
contador_morado++;
break;}
case 2: {
contador_amarillo++;
break;}
default: {
break;}
}
}
do {
printf("\nIngrese el precio a pagar de la factura de este cliente:\n");
scanf("%f",&factura);
if (factura<0) {
printf("\nError, debe ingresar un numero mayor a 0.\n");
}
} while (factura<0);
factura_comparar=factura;

factura_ans=Comparar_Factura(factura_comparar,factura_ans);

if(contador_morado+contador_amarillo>=3) {

if(factura>=1000 && factura<=5000) {

contador_descuento_general=contador_descuento_general+1;

factura= (factura * 0.50);


if(parimpar(n_cedula)==1) {
factura= (factura * 0.95);
contador_descuento5++;

} else {
factura= (factura * 0.97);
contador_descuento3++; }
}
}
} else {

do {
printf("\nIngrese el precio a pagar de la factura de este cliente:\n");
scanf("%f",&factura);
if (factura<0) {
printf("\nError, debe ingresar un numero mayor a 0.\n");
}
} while (factura<0);

factura_comparar=factura;

factura_ans=Comparar_Factura(factura_comparar,factura_ans);

}
printf("La factura a pagar de este cliente es:\n");
printf("%f",factura);

}
porcentaje_descuento= calcular_porcentaje(contador_clientes,contador_descuento_general);

printf("\n\nEl porcentaje de clientes que han obtenido un descuento es de %.2f% por ciento\n",porcentaje_descuento);
printf("El monto ganador de la GIF card por la factura mas alta fue de un total de: %f\n",factura_ans);
printf("Un total de %d clientes obtuvieron el descuento del 5 por ciento\n",contador_descuento5);
printf("Un total de %d clientes obtuvieron el descuento del 3 por ciento\n\n",contador_descuento3);


return 0;
}







