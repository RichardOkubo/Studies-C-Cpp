#include <stdio.h> // printf...
#include <stdlib.h> // operações matemáticas...
#include <ctype.h> // toupper, getchar...
#include <conio.h> // getche...
#include <string.h> // strcpy, strcat, strlen, strcmp...
#include <locale.h>  // setlocale

// Definindo uma constante
#define W 7

int main()
{
/*
    Toda variável em C possui:
        1) um nome;
        2) um tipo;
        3) um tamanho;
        4) um valor.

    Tipos:
        1) char - 1 Byte (8 bitd)
        2) int - 2 Bytes (de -32768 a +32767)
        3) float - 4 Bytes [7 dígitos de precisão]
        4) void - Nenhum bit
        5) double - 8 Bytes [15 dígitos de precisão]

    Modificadores de tipo:
            1) signed -> + e - (int)
            2) unsigned -> + (int)
            3) long -> aumentar a capacidade de armazenamento da variável
            4) short -> diminuir o tamanho de armazenamento da variável

    Tipos de formatação:
        1) %i ou %d - int
        2) %f - float ou double
        3) %c - char
        4) %s - string
    Outras formatação:
        1) %u - módulo de um número
        2) %P - endereço de memória
        3) %e ou %E - números com notação científica
        4) %% - imprime um sinal de porcentagem

    Operações matemáticas:
        1) + (soma)
        2) - (subtração)
        3) * (multiplicação)
        4) / (divisão)
        5) % (resto da divisão)

    Operadores de atribuição:
        1) +=
        2) -=
        3) *=
        4) /=
        5) %=

    Escape sequence:
        1) \n - pula uma linha
        2) \t - faz uma tabulação
        3) \\ - imprime uma barra invertida
        4) \" - imprime uma aspa duplas
        5) \' - imprime uma aspa simples
        6) \0 - indica onde finaliza o texto

    Operadores lógicos:
        1) && - operador E
        2) || - operador OU

    Operadores de incremento e Decremento:
        1) ++i (pré-incremento) /incrementa na instrução que a variável estiver contida/
        2) i++ (pós-incremento) /incrementa na próxima instrução/
        3) --i (pré-decremento) /bis/
        4) i-- (pós-decremento) /bis/

    Associação de operadores:
        [Da esquerda para a direita]
            1º ()
            2º * / %
            3º + -
            4º < <= > >=
            5º == !=
        [Da direita para a esquerda]
            1º -- ++
            2º = += -+ *= /= %=
*/

    // int num1, num2 = 0;
    // float _1float = 2.2;
    // double numDouble;
    // char a, b;
    //
    // num1 = 10;
    //
    // printf("%i\n", num1);
    // printf("%f\n", _1float);
    // printf("%d %f\n", num1, _1float);


    // int n1, n2, soma, sub, mult, div;
    //
    // printf("Calculadora 1.0\n");
    // printf("Entre com dois valores inteiros:\n");
    // scanf("%i%i", &n1, &n2);
    //
    // soma = n1 + n2;
    // sub = n1 - n2;
    // mult = n1 * n2;
    // div = n1 / n2;
    //
    // printf("Soma: %i\n", soma);
    // printf("Sutbracao: %i\n", sub);
    // printf("Multiplicacao: %i\n", mult);
    // printf("Divisao: %i\n", div);


    // char c;
    //
    // printf("Digite um caracter em letra minuscula: ");
    // scanf("%c", &c);
    //
    // system("cls"); // system("pause")
    //
    // if (c >= 'a')
    // {
    //     printf("\nSegue a letra que voce digitou em maiuscula: %c\n",
    //         toupper(c));
    // }
    // else
    // {
    //     printf("Nada a se fazer.");
    // }


    /*
        1) positivo -> 1
        2) negativo -> 0

        Exemplo:
    */
    // int i = 10;

    // printf("%i\n", i == 1);
    // printf("%i", i != 1);
    // printf("%i", !(i == 1) );


    // unsigned short int u;
    //
    // printf("%i", sizeof(u));


    // int i = 0;
    //
    // while (i < 10)
    // {
    //     printf("%i\n", i);
    //     i += 1;
    // }


    // char c;
    //
    // printf("Digite o valor 1:\n");
    // c = getchar(); // semelhante a scanf, recebe um caracter
    //
    // if (c == '1')
    // {
    //     printf("\nCorreto.\n");
    // }
    // else
    // {
    //     printf("\nErrado.\n");
    // }


    // int contador = 0;
    // char c;
    //
    // do
    // {
    //     contador += 1;
    //     printf("\nDigite 0 para sair do looping\n");
    //     printf("%i quantidade de vezez.\n", contador);
    //     c = getche(); // como getchar, mas não espera o usuário digitar ENTER
    // } while (c != '0');
    //
    // printf("\nAperta qualquer tecla aeh...");
    // getch();  // como o getche, mas não mostra a tecla digitada


    // int i;
    //
    // printf("Digite um valor entre 0 e 9:\n>>>");
    // scanf("%i", &i);
    //
    // switch (i)
    // {
    //     case 0:
    //         printf("A opcao digitada foi 'zero'.");
    //         break;
    //
    //     case 1:
    //         printf("A opcao digitada foi 'um'.");
    //         break;
    //
    //     case 2:
    //     case 3:
    //     case 4:
    //     case 5:
    //     case 6:
    //     case 7:
    //     case 8:
    //     case 9:
    //         printf("A opcao digitada esta entre 2 e 9.");
    //         break;
    //
    //     default:
    //         printf("Opcao padrao.");
    //         break;
    // }


    // for (int i = 0; i < 10; i++) // Funciona se {}, pois possui apenas uma instrução
    //     printf("%i\n", i);


    // int i = 0;
    //
    // for (; i < 10; i++)
    // { // como no caso logo acima, os {} são opcionais
    //     printf("%i\n", i);
    // }
    //
    //
    // for (int a = 0, b = 10; a <= 10 && b >= 0; a++, b--)
    // {
    //     printf("%i", a);
    //     printf(" - ");
    //     printf("%i\n", b);
    // }

    /*
        break - interrompe o ciclo
        continue - interrompe o laço
    */

    // for (int x = 0; x <= 10; x++)
    // {
    //     if (x == 2)
    //     {
    //         printf("?\n");
    //         continue;
    //     }
    //     if (x == 8)  // funciona se {}, pois possui apenas uma instrução
    //         break;
    //
    //     printf("%i\n", x);
    // }


    // const float pi = 3.14;
    //
    // printf("%f\n", pi);
    // printf("%i\n", w);
    // printf("%f + %i = %f", pi, w, pi + w);


    // { // Definindo um bloco (possui escopo)
    //     printf("Bloco 1\n");
    //     double dinheiro = 3.55;
    //     printf("Valor: %f\n", dinheiro);
    // }
    // // dinheiro = 3.44; // Erro


    // int num, result;
    //
    // printf("Informa um valor inteiro:\n");
    // scanf("%d", &num);
    //
    // result = (num < 0) ? 0 : num;  // Operador ternário
    // printf("Resultado: %d", result);


    // char letra;
    // int respost;
    //
    // printf("Digite umas das seguintes letras: a, b ou c\n");
    // scanf("%c", &letra);
    //
    // respost = (letra == 'a') ? 65 :
    //           (letra == 'b') ? 66 :
    //           (letra == 'c') ? 67 : -1;
    //
    // printf("A resposta foi %i\n", respost);


    // char str1[100], str2[100], str3[100];
    //
    // printf("Entre com uma string: ");
    // gets(str1);
    // strcpy(str2, str1); /* Copia str1 em str2 */
    // strcpy(str3, "Voce digitou a string "); /* Copia "Voce digitou a string" em str3 */
    // printf("\n\n%s%s", str3, str2);


    // char str1[100], str2[100];
    //
    // printf("Entre com uma string: ");
    // gets(str1);
    // strcpy(str2, "Voce digitou a string ");
    // strcat(str2, str1); /* str2 armazenara' Voce digitou a string + o conteudo de str1 */
    // printf("\n\n%s", str2);


    // int size;
    // char str[100];
    //
    // printf("Entre com uma string: ");
    // gets(str);
    // size = strlen(str);
    // printf("\n\nA string que voce digitou tem tamanho %d", size);


    // char str1[100], str2[100];
    //
    // printf("Entre com uma string: ");
    // gets(str1);
    // printf("\n\nEntre com outra string: ");
    // gets(str2);
    //
    // if (strcmp(str1, str2))
    //     printf ("\n\nAs duas strings são diferentes.");
    // else
    //     printf ("\n\nAs duas strings são iguais.");
    

    // setlocale(LC_ALL,"");  
    // printf("Agora não tem mais problema algum!\n"); // Não está funcionando


    for (int x = 0; x <= 255; x++)
    {
        printf("[%d]: %c\n", x, x);
    }

    return 0;
}
