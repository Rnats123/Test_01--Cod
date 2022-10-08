#include <stdio.h>

int main(){

int Valormin, Valormax, estoque;

    printf("digite o estoque mínimo:");
    scanf("%d", &Valormin);
    
    printf("digite o estoque máximo:");
    scanf("%d", &Valormax);
    
    estoque = (Valormin+Valormax)/2;
    
    printf("o estoque médio é:%d", estoque);



 return 0;
}
