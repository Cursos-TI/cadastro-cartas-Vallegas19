#include <stdio.h>


int main(){
    //Carta 1

    char Estado1;         
    char Codigo1[3];         
    char NomeDaCidade1[50];
    int Populacao1; 
    float Area1; 
    float PIB1;
    int NumerodePontosTurísticos1;

    //Carta2

    char Estado2;         
    char Codigo2[3];
    char NomeDaCidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int NumerodePontosTurísticos2;


    //Dados da Carta 1
    printf("Carta1\n");
    printf("Digite seu Estado: ");
    scanf(" %c", &Estado1);             // adicionado espaço antes do %c e &

    printf("Digite seu Codigo: ");
    scanf(" %s", Codigo1);

    printf("Digite o nome da sua cidade: ");
    scanf(" %[^\n]", NomeDaCidade1);

    printf("Digite a população: ");
    scanf(" %d", &Populacao1);

    printf("Digite a Área: ");
    scanf(" %f", &Area1);

    printf("Digite o PIB ");
    scanf(" %f", &PIB1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &NumerodePontosTurísticos1);

    //Dados da Carta 2
    printf("Carta 2\n");
    printf("Digite seu Estado: ");
    scanf(" %c", &Estado2);

    printf("Digite seu Codigo: ");
    scanf(" %s", Codigo2);

    printf("Digite o nome da sua Cidade: ");
    scanf(" %[^\n]", NomeDaCidade2);

    printf("Digite a população: ");
    scanf(" %d", &Populacao2);

    printf("Digite a Área: ");
    scanf(" %f", &Area2);

    printf("Digite o PIB: ");
    scanf(" %f", &PIB2);

    printf("Digite o número de pontos Turisticos: ");
    scanf(" %d", &NumerodePontosTurísticos2);

    //Exibição dos dados
    printf("\n-----Dados das Cartas Cadastradas-----\n");

    printf("\n Dados da Carta 1: \n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Nome da cidade: %s\n", NomeDaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %f km²\n", Area1);
    printf("PIB: %f", PIB1);
    printf("Número de Pontos Turisticos: %d\n", NumerodePontosTurísticos1);

    printf("\n Dados da Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %f km²\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", NumerodePontosTurísticos2);

return 0;
}
