#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, p1, subtracao1;
    float x2, y2, p2, subtracao2;
    float distancia, soma;
    
    scanf("%f", & x1);
    scanf("%f", & x2);
    scanf("%f", & y1);
    scanf("%f", & y2);
    
    subtracao1 = x2 - x1;
    p1 = pow(subtracao1, 2);
    
    subtracao2 = y2 - y2;
    p2 = pow(subtracao2, 2);
    
    soma = p1 + p2;
    
    distancia = sqrt(soma);
    
    printf("%.4f\n", distancia);
  
 
    return 0;
}
