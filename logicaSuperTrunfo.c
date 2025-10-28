#include <stdio.h>

int main() {
  //vamos criar um codigo para cadastro de duas cartas do jogo super trunfo 
    printf("desafio castas super trunfo- países \n");
    
    //carta 1: colocando as variaveis.
    int carta1, carta2;
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    long unsigned int populaçao1, populaçao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;
    int opçao;
    

   /*imprimindo as variaveis carta 1 
   e colocando a entrada de dados do usuario*/;

   
    printf("\n---cadastro da carta 1--- \n");

    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado1); // espaço antes do %C para não ler o enter.

    printf("digite o codigo ex:A01 : \n");
    scanf("%3s", codigo1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("digite o numero da população: \n");
    scanf("%lu", &populaçao1);

    printf("digite a area em km²: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos1);

    //calculando a densidade e o pib percapita da carta 1
    densidade1 = populaçao1 / area1;
    PIB_per_capita1 = PIB1 * 1000000000 / populaçao1;
    // calculando super poder 
    super_poder1 = (float)populaçao1 + area1 + PIB1 + (float)pontos_turisticos1 + PIB_per_capita1 + (1 / densidade1);


    /*imprimindo as variaveis carta 1 
   e colocando a entrada de dados do usuario*/

    printf("\n---cadastro da carta 2---\n");
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado2); // espaço antes do %C para não ler o enter.

    printf("digite o codigo ex:A01 : \n");
    scanf("%3s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("digite o numero da população: \n");
    scanf("%lu", &populaçao2);

    printf("digite a area em km²: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos2);

    //calculando a densidade e o pib percapita da carta 2
    densidade2 = populaçao2 / area2;
    PIB_per_capita2 = PIB2 * 1000000000 / populaçao2;
    // calculando super poder 
    super_poder2 = (float)populaçao2 + area2 + PIB2 + (float)pontos_turisticos2 + PIB_per_capita2 + (1 / densidade2);

    // Exibição dos dados carta 2 
    printf("\n--Carta 1--\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", populaçao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", PIB_per_capita1);
    printf("Super poder:%.2f\n",super_poder1);

    // Exibição dos dados carta 2 
    printf("\n--Carta 2--\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populaçao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", PIB_per_capita2);
    printf("Super poder:%.2f\n", super_poder2);

   // exibindo um menu 
    printf("\n-- Menu De comparação --\n ");
    printf("Escolha a alternativa para comparar:\n");//escolhe as alternativa
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade populacional\n");
    printf("Digite sua opção:");
    scanf("%d", &opçao);//usuario digita a opção do menu 

    //exibe o resultado da comparação
    printf("\n--- Resultado da comparação ---\n");
    printf("carta 1: %s\n", nome_da_cidade1);
    printf("carta 2: %s\n",nome_da_cidade2);

    switch (opçao)
    {
    case 1:
      printf("Alternativa: População\n");
      printf("%s: %lu habitantes\n", nome_da_cidade1, populaçao1);
      printf("%s: %lu habitantes\n", nome_da_cidade2, populaçao2);

    if (populaçao1 > populaçao2){
      printf("Vencedor:%s\n",nome_da_cidade1);
      printf("\n---Carta 1 venceu!---\n");

    }else if (populaçao2 > populaçao1){
      printf("Vencedor:%s\n",nome_da_cidade2);
      printf("\n---Carta 2 venceu!---\n");
      
    }else{
      printf("Empate!\n");
    }
    break;

     case 2:
      printf("Alternativa: Área\n");
      printf("%s: %.2f km²\n", nome_da_cidade1, area1);
      printf("%s: %.2f km²\n", nome_da_cidade2, area2); 

    if (area1 > area2){
      printf("Vencedor:%s\n",nome_da_cidade1);
      printf("\n---Carta 1 venceu!---\n");

    }else if (area2 > area1){
      printf("Vencedor:%s\n",nome_da_cidade2);
      printf("\n---Carta 2 venceu!---\n");
      
    }else{
      printf("Empate!\n");
    }
    break;

     case 3:
      printf("Alternativa: PIB\n");
      printf("%s: %.2f Bilhões\n", nome_da_cidade1, PIB1);
      printf("%s: %.2f Bilhões\n", nome_da_cidade2, PIB2); 

    if (PIB1 > PIB2){
      printf("Vencedor:%s\n",nome_da_cidade1);
      printf("\n---Carta 1 venceu!---\n");

    }else if (PIB2 > PIB1){
      printf("Vencedor:%s\n",nome_da_cidade2);
      printf("\n---Carta 2 venceu!---\n");
      
    }else{
      printf("Empate!\n");
    }
    break;
      case 4:
      printf("Alternativa: Pontos Turísticos \n");
      printf("%s: %d\n", nome_da_cidade1, pontos_turisticos1);
      printf("%s: %d\n", nome_da_cidade2, pontos_turisticos2); 

    if (pontos_turisticos1 > pontos_turisticos2){
      printf("Vencedor:%s\n",nome_da_cidade1);
      printf("\n---Carta 1 venceu!---\n");

    }else if (pontos_turisticos2 > pontos_turisticos1){
      printf("Vencedor:%s\n",nome_da_cidade2);
      printf("\n---Carta 2 venceu!---\n");
      
    }else{
      printf("Empate!\n");
    }
    break;
    case 5:
      printf("Alternativa:Densidade populacional  \n");
      printf("%s: %.2f hab/km²\n", nome_da_cidade1,densidade1 );
      printf("%s: %.2f hab/km²\n", nome_da_cidade2,densidade2 ); 

    if (densidade1 < densidade2 ) {
      printf("Vencedor:%s\n",nome_da_cidade1);
      printf("\n---Carta 1 venceu!---\n");

    }else if (densidade2 < densidade1 ){
      printf("Vencedor:%s\n",nome_da_cidade2);
      printf("\n---Carta 2 venceu!---\n");
      
    }else{
      printf("Empate!\n");
       }

      break;

    default:{
       printf("Opção invalida! tente novamente.\n");
    }
   
      break; 
   }
   return 0;
  }
