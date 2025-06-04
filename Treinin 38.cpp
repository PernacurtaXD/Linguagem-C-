#include <stdio.h>

int main() {
    int valor, resto;
    int ced100, ced50, ced20, ced10, ced5, ced2, ced1;
    
    printf("fasf");
    scanf("%i",&valor);
    
    ced100 = valor / 100;
    resto = resto % 100;
    
    ced50 = resto / 50;
    resto = resto % 50;
    
    ced20 = resto / 20;
    resto = resto % 20;
    
    ced10 = resto / 10;
    resto = resto % 10;
    
    ced5 = resto / 5;
    resto = resto % 5;
    
    ced2 = resto / 2;
    resto = resto % 2;
    
    ced1 = resto / 1;
    
    
    printf("%i nota(s) de R$ 100,00\n", ced100);
    printf("%i nota(s) de R$ 50,00\n", ced50);
    printf("%i nota(s) de R$ 20,00\n", ced20);
    printf("%i nota(s) de R$ 10,00\n", ced10);
    printf("%i nota(s) de R$ 5,00\n", ced5);
    printf("%i nota(s) de R$ 2,00\n", ced2);
    printf("%i nota(s) de R$ 1,00\n", ced1);
    
    return 0;
}
