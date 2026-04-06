#include <stdio.h>

int main(){
    int nota1, nota2, nota3;
    float media;
    printf("Digite 3 numeros:\n");
    scanf("%d%d%d", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3) / 3;
    printf("Media: %.2f", media);

    return 0;
}
