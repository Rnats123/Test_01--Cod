#include <stdio.h>

int main()
{
    char sexo;
    float peso, altura, gordura;
    
    printf("digite seu sexo M ou F:");
    scanf("%c", &sexo);
    
    printf("digite seu peso:");
    scanf("%f", &peso);
    
    printf("digite sua altura em com . (ponto):");
    scanf("%f", &altura);
    
    
    gordura = peso/(altura*altura);
    
    printf("%.2f\n", gordura);
    
    if (sexo == 'M'){
        
        if (gordura < 11){
            printf("Sua taxa de gordura é de Atleta");
        }
        else if (gordura >=11 && gordura <=13){
            printf("Sua taxa de gordura é Bom");
        }
        else if (gordura >=14 && gordura <=20){
            printf("Sua taxa de gordura é normal");
        }
        else if (gordura >=21 && gordura<=23){
            printf("Sua taxa de gordura é elevada");
        }
        else{
            printf(" Sua taxa de gordura é alta");
        }
    
    }
    
    if (sexo == 'F'){
        
        if (gordura < 16){
            printf("Sua taxa de gordura é de Atleta");
        }
        else if (gordura >=16 && gordura <=19){
            printf("Sua taxa de gordura é Bom");
        }
        else if (gordura >=20 && gordura <=28){
            printf("Sua taxa de gordura é normal");
        }
        else if (gordura >=29 && gordura<=31){
            printf("Sua taxa de gordura é elevado");
        }
        else{
            printf(" Sua taxa de gordura é alta");
        }
        
        
        
    }
 
 return 0;
}
