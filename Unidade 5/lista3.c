#include <stdio.h>

// Exercicio 1
int fatorial(int n)
{
    if (n <= 1)
        return 1;
    return n * fatorial(n - 1);
}

// Exercicio 2
int soma_ate_n(int n)
{
    if (n == 1)
        return 1;
    return n + soma_ate_n(n - 1);
}

// Exercicio 3
int calcular_potencia(int base, int exp)
{
    if (exp == 0)
        return 1;
    return base * calcular_potencia(base, exp - 1);
}

// Exercicio 4
void contar_recursivo(int n)
{
    printf("%d ", n);
    if (n > 0)
    {
        contar_recursivo(n - 1);
    }
}

// Exercicio 6
void dobra_ponteiro(int *ptr)
{
    *ptr = (*ptr) * 2;
}

// Exercicio 8
void altera_primeiro_char(char *str)
{
    str[0] = 'X';
}


int soma_iterativa(int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total += i;
    }
    return total;
}


void modifica_vetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        *(vetor + i) += 5;
    }
}

//-----------------------------------------------------Main------------------------------------------------------//
int main()
{
    // Exercicio 1
    int n_fat;
    printf("--- Ex 1:Fatorial ---\nDigite um limite: ");
    scanf("%d", &n_fat);
    printf("Fatorial de %d: %d\n", n_fat, fatorial(n_fat));

    // Exercicio 2
    printf("\n--- Ex 2: Soma ate N ---\nDigite um numero: ");
    scanf("%d", &n_fat);
    printf("Soma ate %d: %d\n", n_fat, soma_ate_n(n_fat));

    // Exercicio 3
    int b, e;
    printf("\n--- Ex 3: Potencia ---\nBase e Expoente: ");
    scanf("%d %d", &b, &e);
    printf("%d elevado a %d: %d\n", b, e, calcular_potencia(b, e));

    // Exercicio 4
    int contagem;
    printf("\n--- Ex 4: Contagem N ate 0 ---\nComecar de qual numero? ");
    scanf("%d", &contagem);
    printf("Contagem: ");
    contar_recursivo(contagem);
    printf("\n");

    // Exercicio 5
    int valor_base;
    printf("\n--- Ex 5 e 6: Ponteiros ---\nDigite um valor inteiro: ");
    scanf("%d", &valor_base);

    int *p = &valor_base;
    *p = *p + 10;
    printf("Ex 5: Valor somado +10 pelo ponteiro: %d\n", valor_base);

    // Exercicio 6
    dobra_ponteiro(&valor_base);
    printf("Ex 6: Valor dobrado pelo ponteiro: %d\n", valor_base);

    // Exercicio 7
    int vet[3];
    printf("\n--- Ex 7: Vetor ---\nDigite 3 numeros para preencher o vetor:\n");
    scanf("%d %d %d", &vet[0], &vet[1], &vet[2]);

    printf("Vetores: %d, %d, %d\n", vet[0], vet[1], vet[2]);

    // Exercicio 8
    char palavra[50];
    printf("\n--- Ex 8: String ---\nDigite uma palavra: ");
    scanf("%s", palavra);
    altera_primeiro_char(palavra);
    printf("String com primeiro char alterado: %s\n", palavra);

    // Exercicio 10
    printf("\n--- Ex 10: Modificar Vetor ---\n");
    printf("Vetor original: %d, %d, %d\n", vet[0], vet[1], vet[2]);
    modifica_vetor(vet, 3);
    printf("Vetor modificado (+5 em todos): %d, %d, %d\n", vet[0], vet[1], vet[2]);

    return 0;
}