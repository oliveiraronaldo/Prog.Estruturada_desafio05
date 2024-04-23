#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int lista[15];    
    int i = 0;

    while (i < 15){
        int numero_repetido = 0;
        int n = 1 + rand() % (26 - 1);

        for(int j = 0; j < i; j++){
            if(lista[j] == n){
                numero_repetido = 1;
            }
        }

        if(numero_repetido == 0){
            lista[i] = n;
            i++;
        }
    }

    for(int i = 0; i < 15; i++){
        printf("%d ", lista[i]);
    }
    return 0;
}