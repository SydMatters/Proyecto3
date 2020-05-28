#include <stdio.h>
#include "PACIENTES_H.h"
#define CLS system("cls");
#define PAUSE system("pause");

void salir()
{
    CLS;
    printf("----------------------------------------------------------------");
    printf("\n---------------------VUELVA PRONTO-----------------------------");
    printf("\n---------------------------------------------------------------");
}

char menu1()
{
    char resp;
    printf("--------------Consultoria Odontologico----------------");
    printf("\na) Registro de paciente.");
    printf("\nb) Citas agendadas en la semana.");
    printf("\nc) Promedios de pacientes.");
    printf("\nz) Salir.");
    printf("\n\n A continuacion digite la opcion deseada:");
    scanf("%c",&resp);

    return resp;
}
int main()
{
    struct pacientes todos[50];

    char oP;
    do
    {   oP = menu1();
        switch(oP)
        {
            case 'a':
                CLS;
                PAUSE;
                CLS;
                break;
            case 'b':
                CLS;
                PAUSE;
                CLS;
                break;
            case 'c':
                CLS;
                PAUSE;
                CLS;
                break;
            case 'z':
                CLS;
                salir();
                break;
            default:
                printf("\n\nOPCION NO VALIDA!!!!\n");
                PAUSE;
                CLS;
                break;
        }
    }while(oP != 'z');


    return 0;
}



