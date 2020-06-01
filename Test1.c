#include <stdio.h>
#include "PACIENTES_H.h"
#define CLS system("cls");
#define PAUSE system("pause");


int main()
{
    struct pacientes todos[50];
    char oP;
    do
    {   oP = menu1();//PACIENTES_H.h/ linea 24-36
        switch(oP)
        {
            case 'a':
                CLS;
                registro();//PACIENTES_H.h/ linea 38
                PAUSE;
                CLS;
                break;
            case 'b':
                CLS;
                citas();
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
                salir();//PACIENTES_H.h/ linea 14-22
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
