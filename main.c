#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,recebido,troco;
    printf("Digite o valor total: ");
    scanf("%f",&total);
    printf("Digite o valor recebido: ");
    scanf("%f",&recebido);
    troco=recebido-total;
    printf("Troco: %.2f",troco);
    return 0;
}
