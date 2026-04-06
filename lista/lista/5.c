#include <stdio.h>

int main(){
    float latao, cobre, zinco;

    printf("Digite a quantidade de latao:\n");
    scanf("%f", &latao);

    cobre = 70.0 / 100 * latao;
    zinco = 30.0 / 100 * latao;

    printf("Quantidade de cobre e zinco necessarios para fazer %.2f de latao:\nCobre: %.2f\nZinco : %f\n", latao, cobre, zinco);
    return 0;
}
