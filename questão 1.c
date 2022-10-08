#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{

    int N[30];
    int i;
    int j;

    srand(time(NULL));

    for(i=0; i<=30; i++){
      N[i] = rand()%1000;
      }

    int IM[1],PA[1];

    for(i=0; i<30; i++){

        if(N[i]%2==0){
            PA[i]=N[i];
            printf("número par:%d \n", PA[i]);
            
        }
        else{
            IM[i]=N[i];
            printf("número impar:%d \n", IM[i]);
        }
        
        
    }
    
    



    return 0;
}
