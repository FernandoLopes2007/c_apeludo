#include <stdio.h>
#define pi 3.14159

int main(){
    float base, altura, area_total, area_base, area_altura, volume;

    printf("Digite a base de um cilindro, e em seguida sua altura:\n");
    scanf("%f%f", &base, &altura);

    area_base = ((base*base)*pi)*2;
    area_altura = 2*pi*base*altura;
    area_total = area_base + area_altura;

    printf("A area total e %f", area_total);

}