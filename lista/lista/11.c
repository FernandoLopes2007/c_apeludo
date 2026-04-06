#include <stdio.h>

int main(){
    int n1, n2, quociente;

    printf("Digite dois numeros inteiros");
    scanf("%d%d", &n1, &n2);

    if(n2 != 0){
         quociente = n1 / n2;
    printf("Quociente: %d\n", quociente);
    }
    else{
        printf("DIVISAO POR ZERO");
    }
    return 0;
}
