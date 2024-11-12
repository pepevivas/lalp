#include <stdio.h>
#include <stdlib.h>

struct carro{
    char marca[50];
    char modelo[50];
    float preco;
};
int main(){
    struct carro cadastro[100];
    for(int i = 0; i < 100; i++){
        int j;
        printf("Digite 1 para cadastrar e 0 para parar\n");
        scanf("%d", &j);
        if(j == 1){
        printf("Marca do carro\n");
        gets(cadastro[i].marca);
        getchar();
        printf("Modelo do carro\n");
        gets(cadastro[i].modelo);
        getchar();
        printf("Preco do carro\n");
        scanf("%f", &cadastro[i].preco);
        }
        else{
            break;
        }
    }
    float prec_max, prec_min;
    printf("Preco maximo\n");
    scanf("%f", &prec_max);
    printf("Preco minimo\n");
    scanf("%f", &prec_min);
    for(int i = 0; i < 100; i++){
        if(cadastro[i].preco <= prec_max && cadastro[i].preco >= prec_min){
            printf("%c", cadastro[i].marca);
            printf("%c", cadastro[i].modelo);
            printf("%d", cadastro[i].preco);
        }
    }
    return 0;
}