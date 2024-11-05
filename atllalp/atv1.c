#include <stdio.h>
void inverte(int v[], int esq, int dir)
{
    int t;
    // Caso base: quando os índices se cruzam ou se igualam, a inversão termina
    if (esq > dir)
    {
        return;
    }
    // Troca os elementos nas posições esq e dir
    t = v[esq];
    v[esq] = v[dir];
    v[dir] = t;
    // Chamada recursiva para inverter os próximos elementos
    return inverte(v, esq + 1, dir - 1);
}
void imprimir(int v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", v[i]);
    }
}
int main()
{
    int v[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(v) / sizeof(v[0]);
    inverte(v, 0, tamanho - 1);
    imprimir(v, tamanho);
}