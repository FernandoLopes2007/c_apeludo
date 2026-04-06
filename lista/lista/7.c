#include <stdio.h>

int main(){
    int x, y, resto, quociente;
    printf("digite dois numeros:\n");
    scanf("%d%d", &x, &y);
    quociente = x / y;
    resto = x % y;
    printf("Quociente: %d\nResto: %d", quociente, resto);
    return 0;
}
