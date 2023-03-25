#include <stdio.h>
#include <stdlib.h>

int calculadora_de_edad(char fecha_de_nacimiento_usuario[], char fecha_actual_referencia[]) {
    int dia_user, mes_user, ano_user;
    int dia_ref, mes_ref, ano_ref;
    int edad;

    sscanf(fecha_de_nacimiento_usuario, "%d/%d/%d", &dia_user, &mes_user, &ano_user);

    sscanf(fecha_actual_referencia, "%d/%d/%d", &dia_ref, &mes_ref, &ano_ref);

    edad = ano_ref - ano_user;
    if (mes_ref < mes_user || (mes_ref == mes_user && dia_ref < dia_user)) {
        edad--;
    }

    return edad;
}


int main() {
int cant_pacientes=0, i=0, pacientes_masculinos=0,pacientes_femeninos=0, pacientes_otro=0,sexopaciente=0;
int pac_mayores=0, pac_menores=0, edad=0,ultimo_digito=0,es_par=0;
long int n_cedula;
float preciocliente=0;
char fecha_de_nacimiento_usuario[11],fecha_actual_referencia[11];

printf ("Ingrese la fecha de hoy en formato DD/MM/YYYY:\n");
scanf("%s",fecha_actual_referencia);
printf("Cuantos pacientes desea registrar?\n");
scanf("%d",&cant_pacientes);

for (i=1; i<= cant_pacientes;i++) {
printf("\nIngrese el numero de cedula del paciente numero %d:\n",i);
scanf("%ld",&n_cedula);
n_cedula= abs(n_cedula);
printf("\nIngrese su genero:\n\n[1]Masculino\n[2]Femenino\n[3]Otro\n\n");
scanf("%d",&sexopaciente);
switch(sexopaciente)
{
 case 1: {
 pacientes_masculinos++;
 break;}
 case 2: {
 pacientes_femeninos++;
 break;}
 case 3: {
 pacientes_otro++;
 break;}
 default: {
    printf("Ingrese una opcion valida");
    return 0;
 break;}

}
 printf("\n\nIngrese la fecha de nacimiento del paciente en formato DD/MM/YYYY:\n");
 scanf("%s",fecha_de_nacimiento_usuario);
 edad= calculadora_de_edad(fecha_de_nacimiento_usuario,fecha_actual_referencia);
 if (edad>=18) {
    pac_mayores++;
 } else {
    pac_menores++;}

printf("\n\nIngrese el monto de la factura a pagar del cliente:\n");
scanf("%f",&preciocliente);

ultimo_digito= n_cedula % 10;
es_par= ultimo_digito%2;

 if (es_par==0 && sexopaciente==2) {
preciocliente= preciocliente * 0.85;
} else if (edad>=60 && sexopaciente==1) {
preciocliente= preciocliente * 0.7;
} else {
preciocliente= preciocliente; }

printf("\nEl monto total a cancelar de este paciente es:%f\n\n",preciocliente);

}
printf("\n\nHoy se han registrado %d paciente(s):\n",cant_pacientes);
printf("%d paciente(s) femenino(s)\n",pacientes_femeninos);
printf("%d paciente(s) masculino(s)\n", pacientes_masculinos);
printf("%d paciente(s) tipo otro(s)\n",pacientes_otro);
printf("\nDe los cuales:\n");
printf("%d ha(n) sido menor(es) de edad\n",pac_menores);
printf("%d ha(n) sido mayor(es) de edad\n\n",pac_mayores);

return 0;

}





