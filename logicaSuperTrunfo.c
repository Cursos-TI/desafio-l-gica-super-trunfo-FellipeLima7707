#include <stdio.h>

int main(){

    char estado[20];
    char codigodacarta[20];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;
    float densidadepopulacional;
    float PIBpercapita1, PIBpercapita2;
    
    printf("*** Carta 1 ***\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", codigodacarta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numerodepontosturisticos);

    densidadepopulacional = populacao / area;
    PIBpercapita1 = pib / populacao;

    printf(" Carta 1 \n");
    printf("Estado: %s\n",estado);
    printf("Codigo da Carta: %s\n",codigodacarta);
    printf("Nome da Cidade: %s\n",nomedacidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Reais\n", pib);
    printf("Número de pontos Turísticos: %d\n",numerodepontosturisticos);
    printf("Densidade Populacional: %.f\n", densidadepopulacional);
    printf("PIB per Capita: %.2f Reais\n",PIBpercapita1);

    printf("*** Carta 2 ***\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", codigodacarta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade);

    printf("Digite o número da população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &numerodepontosturisticos);

    densidadepopulacional = populacao / area;
    PIBpercapita2 = pib / populacao;

    printf(" Carta 2 \n");
    printf("Estado: %s\n",estado);
    printf("Codigo da Carta: %s\n",codigodacarta);
    printf("Nome da Cidade: %s\n",nomedacidade);
    printf("População: %d\n",populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Reais\n", pib);
    printf("Número de pontos Turísticos: %d\n",numerodepontosturisticos);
    printf("Densidade Populacional: %f\n", densidadepopulacional);
    printf("PIB per Capita: %.2f Reais\n",PIBpercapita2);

    if ("PIBperCapita1 e PIBperCapita2: %f\n", PIBpercapita1, PIBpercapita2)
    { 
        printf("Atributo : PIB per Capita.\n");
        printf("Carta 1: %f\n", PIBpercapita1);
        printf("Carta 2: %f\n", PIBpercapita2);
    }

    if(PIBpercapita1 > PIBpercapita2){
        printf("Resultado: Cidade 1 tem maior População.\n");
    }
    if(PIBpercapita1 < PIBpercapita2){
        printf("Resultado: Cidade 2 tem maior População.\n");
    } 
    else {
        printf("*** Parabéns por Vencer!!! *** \n");
    }
    

}
