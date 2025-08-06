#include <stdio.h>

int main() {

    int numero, i;

    printf("## Movimentando as Peças do xadrez ##\nDigite o numero da peça que você quer mover:\n1 - Torre\n2 - Bispo\n3 - Rainha\nDigite:\n");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1: // Movimento da torre
        printf("Torre\n");
        for (i = 0; i < 5; i++)
        {
            printf("Direita\n"); //Imprime a direção do movimento
        }
        break;


    case 2: // Movimento do Bispo
        printf("Bispo\n");
        i = 0;
        while (i <= 10)
        {
            printf("Cima\nDireita\n"); //Imprime a direção do movimento
            i++;
        }
        break;
        
    case 3: //Movimento da Rainha
        printf("Rainha\n");
        i = 0;
        do
        {
            printf("Esquerda\n"); //Imprime a direção do movimento
            i++;
        } while (i < 8);
        
        
        break;
    
    default:
        printf("Entrada invalida");
        break;
    }

    return 0;
}
