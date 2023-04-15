#include <stdio.h>

// Definição das macros para exibir mensagens
#define MAIOR_IDADE(nome) printf("%s e maior de idade\n", nome)
#define MENOR_IDADE(nome) printf("%s e menor de idade\n", nome)

int main() {
    char nome[50];
    int idade;
    
    // Leitura do nome e da idade da pessoa
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    
    // Verificação da idade utilizando as macros
    if (idade >= 18) {
        MAIOR_IDADE(nome);
    } else {
        MENOR_IDADE(nome);
    }
    
    return 0;
}

