#include <stdio.h>

// Definição da macro para calcular a média
#define MEDIA(a, b, c, d) ((a + b + c + d) / 4)

int main() {
    int num1, num2, num3, num4;
    
    // Leitura dos quatro números inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);
    
    // Cálculo da média utilizando a macro
    int media = MEDIA(num1, num2, num3, num4);
    
    // Exibição do resultado da média na tela
    printf("A media dos numeros eh %d\n", media);
    
    return 0;
}

