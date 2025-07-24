#include <stdio.h>

int main (){
    int habitantes1, pontoturistico1; 
    int habitantes2, pontoturistico2;
    float area1, pib1; 
    float area2, pib2;
    char letra1[50], codigo1[50], cidade1[50]; 
    char letra2[50], codigo2[50], cidade2[50];
    
        printf("Bem-vindo ao jogo Super trunfo \n");
        printf("Você irá cadastrar duas cartas do jogo \n");
        printf("\n");
        printf("Primeira carta: \n");
        
            printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
            scanf("%s", &letra1);

            printf("Crie o código da carta usando A letra do estado seguida o 01 ao 04 (ex: A01, B03): \n");
            scanf("%s", &codigo1);
            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade1);

            printf("Digite o número de habitantes da cidade: \n");
            scanf("%d", &habitantes1);

            printf("Digite a área da cidade em quilômetros quadrados: \n");
            scanf("%f", &area1);

            printf("Digite o Produto Interno Bruto da cidade (PIB): \n");
            scanf("%f", &pib1);

            printf("Digite a quantidade de pontos turísticos na cidade: \n");
            scanf("%d", &pontoturistico1);
            printf("\n");

        printf("Parabéns, você concluio o cadastro da primeira carta \n");
        printf("Agora você irá cadastrar a segunda carta do jogo: \n");
        printf("\n");

            printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
            scanf("%s", &letra2);

            printf("Crie o código da carta usando A letra do estado seguida o 01 ao 04 (ex: A01, B03): \n");
            scanf("%s", &codigo2);

            printf("Digite o nome da cidade: \n");
            scanf("%s", &cidade2);

            printf("Digite o número de habitantes da cidade: \n");
            scanf("%d", &habitantes2);

            printf("Digite a área da cidade em quilômetros quadrados: \n");
            scanf("%f", &area2);

            printf("Digite o Produto Interno Bruto da cidade (PIB): \n");
            scanf("%f", &pib2);

            printf("Digite a quantidade de pontos turísticos na cidade: \n");
            scanf("%d", &pontoturistico2);
            printf("\n");

        printf("carta 1:\n");
            printf("Estado: %s\n",letra1);
            printf("Código: %s\n",codigo1);
            printf("Nome da cidade: %s\n",letra1);
            printf("População: %d\n", habitantes1);
            printf("Área: %.1f km²\n",area1);
            printf("PIB: %.1f bilhões de reais\n", pib1);
            printf("Número de Pontos Turísticos: %d\n\n",pontoturistico1);
        
        printf("carta 2:\n");
            printf("Estado: %s\n",letra2);
            printf("Código: %s\n",codigo2);
            printf("Nome da cidade: %s\n",letra2);
            printf("População: %d\n", habitantes2);
            printf("Área: %.1f km²\n",area2);
            printf("PIB: %.1f bilhões de reais\n", pib2);
            printf("Número de Pontos Turísticos: %d\n",pontoturistico2);
    return 0;
}
