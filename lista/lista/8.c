#include <stdio.h>
int main(){
    int media, nota1, nota2, nota3;
    printf("Digite as 3 notas da prova:\n");
    scanf("%d%d%d", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 +nota3)/3;
    printf("Media final: %d\n", media);

    if(media >=7){
        printf("Aprovado");
    }
    else if(media <=3  || media <7){
        printf("Recuperacao");
    }
    else{
        printf("Reprovado");
    }

    return 0;
}
