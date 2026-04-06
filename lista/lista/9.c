#include <stdio.h>

int main(){
    float n1, n2 ,n3, soma;

    printf("Digite 3 numeros:\n");
    scanf("%f%f%f", &n1, &n2, &n3);
    soma = n2+n3;

    if(n1 > soma){
        print("%f é maior que a soma dos dois numeros %f", n1, soma);
    }
    else{
        printf("%f é menor que a soma dos dois numeros %f", n1, soma);
    }

    return 0;
}
