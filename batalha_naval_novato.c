#include <stdio.h>

int main(){

    // Variáveis para a primeira cidade.

    char codigoA[10], nomeA[50];
    int populacaoA;
    float areaA, pibA;

    // Variáveis para a segunda cidade.
    char codigoB[5], nomeB[25];
    int populacaoB;
    float areaB, pibB;

    // Cadastro da primeira cidade.
    printf("=== Cadastro Cidade 1 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB (Em bilhões) :");
    scanf("%f", &pibA);

    // Cadastro da segunda cidade
    printf("=== Cadastro Cidade 2 ===\n");
    printf("Digite o código da cidade: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB (Em bilhões) :");
    scanf("%f", &pibB);

    // Comparações
    if (populacaoA > populacaoB) {
        printf("Maior população: %s\n", nomeA);
    }  else if (populacaoB > populacaoA) {
        printf("Maior população: %s\n", nomeB);
    } else {
        printf("População: Empate\n");
    }

    // Área
    if (areaA > areaB) {
        printf("Maior área: %s\n", nomeA);
    } else if (areaB > areaA) {
        printf("Maior área: %s\n", nomeB);
    } else {
        printf("Área: Empate\n");
    }

    // PIB
    if(pibA > pibB) {
        printf("Maior PIB: %s\n", nomeA);
    } else if (pibB > pibA) {
        printf("Maior PIB: %s\n", nomeB);
    } else {
        printf("PIB: Empate\n");
    }

    // Decisão Final
    int pontosA = 0, pontosB = 0;

    if (populacaoA > populacaoB) pontosA++; else if (populacaoB > populacaoA) pontosB++;
    if (areaA > areaB) pontosA++; else if (areaB > areaA) pontosB++;
    if (pibA > pibB) pontosA++; else if (pibB > pibA) pontosB++;

    printf("\n=== Cidade Vencedora ===\n");
    if (pontosA > pontosB) {
        printf("A cidade vencedora é: %s (%s)\n", nomeA, codigoA);
    } else if (pontosB > pontosA) {
        printf("A cidade vencedora é: %s (%s)\n", nomeB, codigoB);
    } else {
        printf("Resultado: Empate\n");
    }

    return 0;
}