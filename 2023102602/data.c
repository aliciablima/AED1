#include <stdio.h>
#include "data.h"

void preencherData(Data *data) {
    printf("Digite o dia: ");
    scanf("%d", &data->dia);
    printf("Digite o mes: ");
    scanf("%d", &data->mes);
    printf("Digite o ano: ");
    scanf("%d", &data->ano);
}

void imprimirData(const Data *data) {
    printf("%d/%d/%d", data->dia, data->mes, data->ano);
}