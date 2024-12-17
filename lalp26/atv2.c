#include <stdio.h>
#include <stdlib.h>
// Struct que armazena um vetor e seu tamanho
typedef struct
{
    int *elementos; // Ponteiro para o vetor resultante
    int tamanho;    // Tamanho do vetor resultante
} VetorResultado;
// Função filtrar: retorna um VetorResultado filtrado
VetorResultado filtrar(int *vetor, int tamanho, int (*criterio)(int), int decide)
{
    VetorResultado resultado;
    resultado.elementos = (int *)malloc(tamanho * sizeof(int)); // Aloca o máximo necessário
    if (resultado.elementos == NULL)
    {
        printf("Erro de alocação de memória.\n");
        exit(1); // Sai do programa indicando que ocorreu um erro.
    }
    resultado.tamanho = 0; // Inicializa o tamanho do vetor resultante
    for (int i = 0; i < tamanho; i++)
    {
        if (criterio(vetor[i]))
        {
            resultado.elementos[resultado.tamanho] = vetor[i];
            resultado.tamanho++;
        }
    }
    if (decide = 0)
    {
        for (int i = 0; i < resultado.tamanho; i++)
        {
            printf("\nVetor só com par: %d", resultado.elementos[i]);
        }
    }
    else if (decide = 1)
    {
        for (int i = 0; i < resultado.tamanho; i++)
        {
            printf("\nVetor só com impar: %d", resultado.elementos[i]);
        }
    }
    else
    {
        for (int i = 0; i < resultado.tamanho; i++)
        {
            printf("\nVetor só com primo: %d", resultado.elementos[i]);
        }
    }
    free(resultado.elementos);
}
int par(int numero)
{
    if (numero % 2 == 0)
    {
        return 1;
    }
    return 0;
}
int impar(int numero)
{
    if (numero % 2 != 0)
    {
        return 1;
    }
    return 0;

}
int primo(int numero)
{
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Tamanho do vetor:");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        printf("Numeros do vetor:");
        scanf("%d", &vetor[i]);
    }
    filtrar(vetor, n, par, 0);
    filtrar(vetor, n, impar, 1);
    filtrar(vetor, n, primo, 2);
    return 0;
}