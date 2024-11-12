#include <stdio.h>
#include <stdlib.h>

void inverte_string(char string[], int esq, int dir){
    if(esq > dir){
        return;
    }
    char aux = string[dir];
    string[dir] = string[esq];
    string[esq] = aux;
    return inverte_string(string, esq + 1, dir - 1);
}
int main() {
    char str[] = "recursao";
    int comprimento = sizeof(str) / sizeof(str[0]) - 1;

    printf("String original: %s\n", str);

    inverte_string(str, 0, comprimento - 1);

    printf("String invertida: %s\n", str);

    return 0;
}
