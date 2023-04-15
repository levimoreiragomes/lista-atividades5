#include <stdio.h>

// Defini��o das macros para as opera��es matem�ticas
#define SOMAR(a, b) (a + b)
#define SUBTRAIR(a, b) (a - b)
#define DIVIDIR(a, b) (a / b)
#define MULTIPLICAR(a, b) (a * b)

int main() {
    int num1, num2;
    
    // Leitura dos dois n�meros inteiros
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    // Execu��o das opera��es matem�ticas utilizando as macros
    printf("Soma: %d\n", SOMAR(num1, num2));
    printf("Subtracao: %d\n", SUBTRAIR(num1, num2));
    printf("Divisao: %d\n", DIVIDIR(num1, num2));
    printf("Multiplicacao: %d\n", MULTIPLICAR(num1, num2));
    
    return 0;
}

