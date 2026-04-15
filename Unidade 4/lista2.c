#include <stdio.h>

// Variaveis globais
int variavel_teste = 100;
int contador_chamadas = 0;

// Exercicio 1
void testa_escopo_global()
{
    int variavel_teste = 10;
    printf("Valor dentro da funcao (local): %d\n", variavel_teste);
}

// Exercicio 2
void tenta_alterar_valor(int v)
{
    v = 50;
}

// Exercicio 3
void altera_por_referencia(int *v)
{
    *v = 50;
}

// Exercicio 4
void trocar(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Exercicio 6
int triplo(int n)
{
    return n * 3;
}

// Exercicio 7
void incrementa_ref(int *numero)
{
    (*numero)++;
}

// Exercicio 8
void testar_diferenca_valor(int x) { x = x + 10; }
void testar_diferenca_ref(int *x) { *x = *x + 10; }

// Exercicio 9
void chamar_funcao()
{
    contador_chamadas++;
}

// Exercicio 10
/* Ex 10 - Explicacao:
   Quando varias funcoes alteram a mesma variavel passando por ponteiro (referencia),
   nao existe isolamento de escopo. O endereco de memoria é o mesmo, entao qualquer
   alteracao feita dentro de uma funcao vai se refletir imediatamente nas outras e no
   programa principal por modificar o valor original (que foi dado o caminho por meio do ponteiro).
*/
//-----------------------------------------------------Main------------------------------------------------------//


int main()
{
    // Exercicio 1
    printf("--- Ex 1: Escopo Global vs Local ---\n");
    printf("Global fora da funcao: %d\n", variavel_teste);
    testa_escopo_global();


    int valor_teste;
    printf("\n--- Ex 2 e 3: Valor vs Referencia ---\nDigite um numero pra testar alteracao: ");
    scanf("%d", &valor_teste);

    // Exercicio 2
    printf("\n--- Ex 2: Alteracao por valor ---\n");
    printf("Antes por valor: %d\n", valor_teste);
    tenta_alterar_valor(valor_teste);
    printf("Depois por valor: %d\n", valor_teste);

    // Exercicio 3
    printf("\n--- Ex 3: Alteracao por referencia ---\n");
    printf("Antes por referencia: %d\n", valor_teste);
    altera_por_referencia(&valor_teste);
    printf("Depois por referencia: %d\n", valor_teste);

    // Exercicio 4
    int x, y;

    printf("\n--- Ex 4: Troca ---\nDigite dois numeros (x e y): ");
    scanf("%d %d", &x, &y);
    trocar(&x, &y);
    printf("Troca: x=%d, y=%d\n", x, y);
    
    // Exercicio 5
    if (1)
    {
        int variavel_if = 99; //nasceu, escopo local
        printf("\n--- Ex 5: Bloco if ---\nVariavel do if: %d\n", variavel_if);
    }//morreu aqui

    // Exercicio 6
    int num_triplo;
    printf("\n--- Ex 6: Triplo ---\nDigite um numero: ");
    scanf("%d", &num_triplo);
    printf("Triplo: %d\n", triplo(num_triplo));

    // Exercicio 7
    printf("\n Ex 7: Incrementa por referencia\nValor antes: %d\n", num_triplo);
    incrementa_ref(&num_triplo);
    printf("Incrementado por ref: %d\n", num_triplo);

    // --- Exercicio 8: Demonstrando a diferenca entre Valor e Referencia ---
    int numero = 10;
    printf("\n--- Ex 8: Valor vs Referencia ---\n");
    printf("Valor inicial: %d\n", numero);

    //Ex 8: Chamada por Valor
    testar_diferenca_valor(numero); 
    printf("Apos procedimento por valor: %d (Nao altera o original)\n", numero);

    //Ex 8: Chamada por Referencia
    testar_diferenca_ref(&numero); 
    printf("Apos procedimento por referencia: %d (Altera o original)\n", numero);
    
    // Exercicio 9
    chamar_funcao();
    chamar_funcao();
    printf("\n Ex 9: Total de chamadas da funcao: %d\n", contador_chamadas);

    return 0;
}