#include <stdio.h>
int eh_palindromo(char v[], int esq, int dir)
{
    int t;
    // Caso base: quando os índices se cruzam ou se igualam, a inversão termina
    if (esq >= dir)
    {
        return 1;
    }
    if(v[esq] != v[dir - 1])
    {
        return 0;
    }
    t = v[esq];
    v[esq] = v[dir];
    v[dir] = t;
    return eh_palindromo(v, esq + 1, dir - 1);
}
void imprimir(char v[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%c ", v[i]);
    }
}
int main()
{
    char v[] = "arara";
    int tamanho = sizeof(v) / sizeof(v[0]);
    printf("%d", eh_palindromo(v, 0, tamanho-1));
}