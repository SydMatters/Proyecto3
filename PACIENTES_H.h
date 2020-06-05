#define CLS system("cls");
#include <stdio.h>
#include<string.h>
#define PAUSE system("pause");
typedef struct Pacientes {
    char nombreCompleto[60];
    int id;
    short edad;
    char documento[15];
    char telefono[10];
    short horaEntrada;
    char descripcion[300];
} pacientes;

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
void menu2Consulta()
{
    char opCon;
    printf("--------------Tipo de consulta ----------------");
    printf("\nConsultar por:");
    printf("\n\na) Id del paciente.");
    printf("\nb) Nombre del paciente.");
    printf("\nc) Documento de identidad del paciente.");
    printf("\nd) Edad.");
    printf("\ne) Telefono.");
    printf("\nz) Salir.");
    printf("\n\nA continuacion digite la consulta deseada:  ");
    scanf("%c",opCon);
}
void registro(pacientes t[],int tam,int *poc)
{
  char cadt[60],d,cadt2[300];
  short e;
  printf("Ingrese el nombre del paciente: ");getchar();
  fgets(cadt,60,stdin);
  strcpy(t[*poc].nombreCompleto,cadt);
  t[*poc].id=*poc+1;

  printf("Ingrese la edad del paciente:");
  scanf("%hi",&e);
  t[*poc].edad=e;
  printf("Ingrese el documento de identidad del paciente:");
  scanf("%s",t[*poc].documento);
  printf("Ingrese el telefono del paciente:");
  scanf("%s",t[*poc].telefono);
  printf("Ingrese la hora de entrada:\nRecuerde que los pacientes se atienden a horas puntuales.");
  scanf("%hi",&e);
  t[*poc].horaEntrada=e;
  PAUSE;
  CLS;
  printf("A continuacion, por favor digite una breve descripcion del paciente.Luego de un ENTER si desea continuar presione de nuevo, sino, presione z\n");
  do
  {
      gets(cadt2);
      scanf("%c",d);
  }while(d!='z');
  *poc++;

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
