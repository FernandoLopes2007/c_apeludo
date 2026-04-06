#include <stdio.h>

int main(){
    int velMax, velMoto, multa, velAcima;
    printf("Digite a velocidade maxima da avenida:\n");
    scanf("%d", &velMax);
    printf("Digite a velocidade que o motorista estava:\n");
    scanf("%d", &velMoto);

     velAcima = velMoto - velMax;

    if(velAcima < 11){
        printf("Multa de 50 reais por ultrapassar %dkm/h da velocidade maxima de %dkm/h.\n", velAcima, velMax);
    }
    else if(velAcima > 11 && velAcima < 31){
        printf("Multa de 100 reais por ultrapassar %dkm/h da velocidade maxima de %dkm/h.\n", velAcima, velMax);
    }
    else{
        printf("Multa de 200 reais por ultrapassar %dkm/h da velocidade maxima de %dkm/h.\n", velAcima, velMax);
    }
    return 0;
}
