#include <stdio.h>
#include <time.h>



int main(void)
{
    clock_t Ticks[2];
    Ticks[0] = clock();
    //O c�digo a ter seu tempo de execu��o medido ficaria neste ponto.
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms.", Tempo);
    getchar();
    return 0;
}
