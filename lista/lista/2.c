#include <stdio.h>

int main(){
    int anos, qtd_diaria;
    float preco, total_cigarro, total_gasto;

    printf("A quantos anos voce fuma?\n");
    scanf("%d", &anos);
    anos = anos * 365;

    printf("Quantos cigarros voce fuma diariamente?\n");
    scanf("%d", &qtd_diaria);

    printf("Qual e o valor de uma caixa de 20 cigarros?\n");
    scanf("%f", &preco);

    total_cigarro = (anos * qtd_diaria)/ 20 ;
    total_gasto = total_cigarro * preco;
    printf("Total gasto: %.2f", total_gasto);

    return 0 ;
}
