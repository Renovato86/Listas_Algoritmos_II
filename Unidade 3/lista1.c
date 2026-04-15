#include <stdio.h>

// Exercicio 1
void inicia_sistema()
{
    printf("Iniciando o sistema\n");
}

// Exercicio 2
int dobro(int n)
{
    return n * 2;
}

// Exercicio 3
int soma(int a, int b)
{
    return a + b;
}

// Exercicio 4
void saudar(char nome[])
{
    printf("Ola, %s\n", nome);
}

// Exercicio 5
float calc_media(float n1, float n2, float n3)
{
    return (n1 + n2 + n3) / 3.0;
}

// Exercicio 6
void verificar_situacao(float media)
{
    if (media >= 6.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
}

// Exercicio 7
int eh_par(int numero)
{
    if (numero % 2 == 0)
    {
        return 1; // Verdadeiro
    }
    return 0; // Falso
}

// Exercicio 8
int quadrado(int x)
{
    return x * x;
}

// Exercício 9
void mostra_resultado(int res)
{
    printf("%d\n", res);
}

// Exercício 10
int maior_valor(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

    //-----------------------------------------------------Main------------------------------------------------------//

int main()
{
    // Exercicio 1
    inicia_sistema();
    
    // Exercicio 2
    int d;
    printf("\n--- Ex 2: Dobro ---\nDigite um numero: ");
    scanf("%d", &d);
    printf("Dobro: %d\n", dobro(d));

    // Exercicio 3
    int a, b;
    printf("\n--- Ex 3: Soma ---\nDigite dois numeros: ");
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", soma(a, b));

    // Exercicio 4
    char MeuNome[50];
    printf("\n--- Ex 4: Saudacao ---\nQual o seu nome? ");
    scanf("%s", MeuNome);
    saudar(MeuNome);

    // Exercicio 5
    float n1, n2, n3;
    printf("\n--- Ex 5: Media ---\nDigite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    float m = calc_media(n1, n2, n3);
    printf("Media: %.2f\n", m);

    // Exercicio 6
    printf("\n--- Ex 6: Verificar Situacao ---\n");
    verificar_situacao(m);

    // Exercicio 7
    int num;
    printf("\n--- Ex 7: Par ou impar ---\nDigite um numero inteiro: ");
    scanf("%d", &num);
    if (eh_par(num))
    {
        printf("O numero %d eh par\n", num); 
    }
    else
    {
        printf("O numero %d eh impar\n", num);
    }

    // Exercicio 8
    printf("\n--- Ex 8: Quadrado ---\n");
    printf("Quadrado desse numero: %d\n", quadrado(num));

   // Exercicio 9
    int num1, num2;
    printf("\n--- Ex 9: Soma ---\nDigite dois numeros: ");
    scanf("%d %d", &num1, &num2);

    int resultado_soma = soma(num1, num2);
    printf("A soma eh: ");
    mostra_resultado(resultado_soma);

    // Exercicio 10
    printf("\n--- Ex 10: Maior valor ---\n");
    printf("Maior valor entre eles: %d\n", maior_valor(num1, num2));
    return 0;
}