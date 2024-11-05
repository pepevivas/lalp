#include <stdio.h>
int produto_numeros(int n){
    if (n == 1)
    {
        return;
    }
    return n * produto_numeros(n - 1);
}
int main()
{
    int n = 4;
    printf("%d", produto_numeros(4));
    return 0;
}