#include <stdio.h>
void reorganizar(char palavra[], int n, int tamanho)
{
    int  contador=0;
    for(int i =0 ;i <= tamanho; i++)
    {
        if(palavra[i]==' ' || palavra[i] == '\0')
        {
            if(contador > n)
            {
                for(int j=i-contador;j<i;j++)
                {
                    printf("%c", &palavra[j]);
                }
            }
            contador=0;
        }
        else
        {
            contador++;
        }
    }
}
int main()
{
    char palavra[50];
    getchar();
    gets(palavra);
    tamanho=strlen(palavra);
    reorganizar(palavra, 5, tamanho);
}
