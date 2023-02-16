//Exemplo de Insert sort do livro do Cormen pg12

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lenght;

int InserionSort (int vetor[]){
    
    int chave;
    int i;

    printf("Running...");
    for( int j=1 ; j<lenght ; j++){
        chave = vetor[j];
        i=j-1;
        while (i>-1 && vetor[i]>chave)
        {
            vetor[i+1] = vetor[i];
            i=i-1;
        }
        vetor[i+1]=chave;
        printf("x, ");        
    }

    for(int i=0;i<10;i++){
        printf("\nVetor depois(dentro) [%d]: %d " , i, vetor[i]);
    }

    return 0;
}



int main()
{
    int f;
    int vetor [10];
    

    vetor[0]=71;
    vetor[1]=5;
    vetor[2]=53;
    vetor[3]=1;
    vetor[4]=69;
    vetor[5]=4;
    vetor[6]=55;
    vetor[7]=2;
    vetor[8]=99;
    vetor[9]=45;
    printf("Início do programa\n");
    
    for(int i=0;i<10;i++){
        printf("\nVetor antes [%d]: %d " , i, vetor[i]);
    }


    /* 
    EXEMPLO DE SCANF
    for(int i=0;i<10;i++){
        printf("Vetor na posição %d:",i);
        scanf("%d", &vetor[i]);
    }
    */

 

    printf("\nTamanho %d ", (int)sizeof(vetor)/(int)sizeof(vetor[0]));
    lenght=(int)sizeof(vetor)/(int)sizeof(vetor[0]);

    f=InserionSort(&vetor[0]);


    for(int i=0;i<10;i++){
        printf("\nVetor depois [%d]: %d " , i, vetor[i]);
    }
    printf("\nFim do programa");
    

}
