#define CLS system("cls");
#include <stdio.h>
struct pacientes {
    char nombreCompleto[60];
    int id;
    char documento[15];
    char telefono[10];
    short horaEntrada;
    char descripcion[300];
};

char dias[][4]={"LUN","MAR","MIE","JUE","VIE"};
short horas[]={7,8,9,10,11,2,3,4,5,6};

void salir()
{
    CLS;
    printf("*********************************************************");
    printf("\n*                                                       *");
    printf("\n*                     VUELVA PRONTO                     *");
    printf("\n*                                                       *\n");
    printf("*********************************************************");
}

char menu1()
{
    char resp;
    printf("--------------Consultoria Odontologico----------------");
    printf("\na) Registro de paciente.");
    printf("\nb) Citas agendadas en la semana.");
    printf("\nc) Promedios de pacientes.");
    printf("\nz) Salir.");
    printf("\n\n A continuacion digite la opcion deseada:  ");
    scanf("%c",&resp);

    return resp;
}

void registro()
{
  /*struct pacientes;
  printf("ingrese el nombre del paciente:\n");
  scanf("%s",pacientes.nombreCompleto);
  printf("%s",pacientes.nombreCompleto);
  */	
}

void citas()
{
	printf("        *****************************************\n");
	printf("        *       *       *       *       *       *\n");
	printf("        ");
	for(int i=0;i<=4;i++)
    {
    	printf("*  lun  ");
	}
	printf("*\n        *       *       *       *       *       *\n");

    for(int j=0;j<=9;j++)
    {
	printf("        *****************************************");
	if(j<5)
		printf("   %i\n",j+7);
		else
		printf("   %i\n",j-3);
	printf("        *       *       *       *       *       *\n");
	printf("        *       *       *       *       *       *\n");
    }
    printf("        *****************************************\n");
}
