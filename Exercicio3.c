#include <stdio.h>
#include <string.h>
#include "Teste aula 05 11 2025/Leitor.c"
int main() {


    printf("Digita a marca ai pia");
    char* marca = ler_texto();
    
    printf("Digite a quantidade ai fi:: ");
    int quantidade = ler_int();

    printf("Digite o produto");
    char* produto = ler_texto();

    printf("Digita o nome ai pia");
    float preco = ler_float();


    printf("\n-- Valores informados --\n");
    printf("Marca: %s\n", marca);
    printf("Quantidade: %d\n", quantidade);
    printf("Produto: %s", produto);
    printf("Preço: %.2f\n", preco);

    // Exibindo tudo numa linha só
    printf("%d unidades de %s %s por %.2f cada.\n", quantidade, produto, marca, preco);
    
    return 0;
}