#include <stdio.h>

int main(){
    float valor_consumidor, imposto, lucro;

    printf("Qual e o valor do carro?\n");
    scanf("%f", &valor_consumidor);
    
    lucro = 12.0 / 100  * valor_consumidor;
    imposto = 45.0 / 100 * valor_consumidor;
    
    printf("Valor do carro: %.2f\nValor em imposto: %.2f\nLucro do distribuidor: %.2f.", valor_consumidor, imposto, lucro);
    return 0;
}
