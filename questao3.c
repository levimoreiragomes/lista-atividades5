#include <stdio.h>

// Defini��o da macro para calcular a m�dia
#define MEDIA(a, b, c, d) ((a + b + c + d) / 4)

int main() {
    int num1, num2, num3, num4;
    
    // Leitura dos quatro n�meros inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);
    
    // C�lculo da m�dia utilizando a macro
    int media = MEDIA(num1, num2, num3, num4);
    
    // Exibi��o do resultado da m�dia na tela
    printf("A media dos numeros eh %d\n", media);
    
    return 0;
}

