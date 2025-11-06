#include "Leitor.c"

int main() {


    printf("Digite a sua idade paizão: ");
    int idade = ler_int();

    printf("Digite sua altura : ");
    float altura = ler_decimal();

    printf("Digita o nome ai pia");
    char* nome = ler_texto();

    printf("\n-- Dados cadastrados -- \n");
    printf("Idade: %d\n", idade);
    printf("nome: %s\n", nome);
    printf("altura: %f\n", altura);
    return 0;
}