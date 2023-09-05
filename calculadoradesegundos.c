#include <stdio.h>

int main()
{
    int horas, minutos, segundos, total;

    horas = 8;
    minutos = 30;
    segundos = 0;

    total = horas * 60 + minutos;
    segundos = total * 60;
    
    printf("Passaram-se %d segundos. \n", segundos);

    return 0;
}