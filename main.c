/* 
 * File:   main.c
 * Author: Tiago Arnold
 * e-mail: tiago@radaction.com.br
 *
 * Created on 20 August 2016, 17:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Este programa imprime a soma e a multiplicação
 * de cinco números definidos pelo usuario e 
 * armazenados em um vetor e identifica se é
 * positivo ou negativo. 
 */

int main(int argc, char** argv) {
    int v[4];
    int soma = 0;
    int mult = 1;
    for (int i = 0; i < 5; i++) {
        printf("Digite um número para o vetor posição %d: ", i);
        scanf("%d", &v[i]);
    }
    printf("\n\n\n----------------------------\n");
    for (int i = 0; i < 5; i++) {
        soma += v[i];
        mult *= v[i];
    }
    printf("O valor da soma é: %d\n", soma);
    if (soma > 0) {
        printf("O valor da soma é positivo!\n");
    } else if (soma < 0) {
        printf("O valor da soma é nagativo!\n");
    } else {
        printf("O valor da soma não é nem positivo nem negativo!\n");
    }

    printf("\n----------------------------\n");
    printf("O valor da multiplicação é %d\n", mult);

    if (mult > 0) {
        printf("O valor da multiplicação é positivo!\n");
    } else if (mult < 0) {
        printf("O valor da multiplicação é negativo!\n");
    } else {
        printf("O valor da multiplicação não é nem positivo nem negativo!\n");
    }
    system("PAUSE");
    return 0;
}

