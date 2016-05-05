#include <stdlib.h>
#include <stdio.h>


int main() {

    int numeros[5];
    int i;
    //preenchendo um array
    for (i=0; i<5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }
 
    int menor, maior;

    menor = numeros[i];
    maior = numeros[i];

    for (i=0; i < 5; i++)
    {
        if (maior < numeros[i])
        {
            maior=numeros[i];
        } else {
            menor=numeros[i];
        }
    }

    printf("Maior: %d. Menor: %d\n", maior, menor);

    printf("\n\n");
    return 0;
}



//obs.: acontece um problema quando o primeiro numero dado eh zero.
