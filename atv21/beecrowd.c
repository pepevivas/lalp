#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, temp, contador = 0;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
     for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (vetor[j] > vetor[j + 1]) {
                    int temp = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = temp;
                    contador++;
                }
            }
        }
    if(contador % 2 == 1){
        printf("Marcelo");
    }
    else
    {
        printf("Carlos");
    }
    return 0;
}