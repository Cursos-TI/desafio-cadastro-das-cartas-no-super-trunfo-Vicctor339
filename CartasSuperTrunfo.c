#include <stdio.h>

int main() {
    char Estado1[3], Codigo1[4], NomeDaCidade1[50];  
    unsigned long int Populacao1;
    int PontosTuristicos1;
    float Area1, PIB1, PibPercapita1, DensidadePopulacional1, SuperPoder1;

    char Estado2[3], Codigo2[4], NomeDaCidade2[50]; 
    unsigned long int Populacao2;
    int PontosTuristicos2;
    float Area2, PIB2, PibPercapita2, DensidadePopulacional2, SuperPoder2;

    // Entrada de dados
    printf("Digite o Estado (EX: PR): ");
    scanf("%2s", Estado1); 
    
    printf("Digite o Código da carta (ex: A01): ");
    scanf("%3s", Codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade1);
    
    printf("Digite a população da cidade: ");
    scanf("%lu", &Populacao1);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Area1);
    
    printf("Digite o PIB da cidade (Em Bilhões de Reais): ");
    scanf("%f", &PIB1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    printf("\nDigite o Estado da carta 2 (EX: PR): ");
    scanf("%2s", Estado2);
    
    printf("Digite o Código da carta 2 (ex: A02): ");
    scanf("%3s", Codigo2);
    
    printf("Digite o Nome da Cidade da carta 2: ");
    scanf(" %[^\n]", NomeDaCidade2);
    
    printf("Digite a população da cidade da carta 2: ");
    scanf("%lu", &Populacao2);
    
    printf("Digite a área da cidade da carta 2 em km²: ");
    scanf("%f", &Area2);
    
    printf("Digite o PIB da cidade da carta 2 (Em Bilhões de Reais): ");
    scanf("%f", &PIB2);
    
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &PontosTuristicos2);

    // Cálculo de atributos
    DensidadePopulacional1 = Populacao1 / Area1;
    PibPercapita1 = (PIB1 * 1e9) / Populacao1;
    SuperPoder1 = Populacao1 + Area1 + (PIB1 * 1e9) + PontosTuristicos1 + PibPercapita1 + (1 / DensidadePopulacional1);

    DensidadePopulacional2 = Populacao2 / Area2;
    PibPercapita2 = (PIB2 * 1e9) / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + (PIB2 * 1e9) + PontosTuristicos2 + PibPercapita2 + (1 / DensidadePopulacional2);

    // Exibição dos dados das cartas
    printf("\n****** EXIBIÇÃO CARTA 1 ******\n");
    printf("População: %lu habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f Bilhões de Reais\n", PIB1);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PibPercapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n****** EXIBIÇÃO CARTA 2 ******\n");
    printf("População: %lu habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f Bilhões de Reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PibPercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação dos atributos
    printf("\n====== COMPARAÇÃO DAS CARTAS ===========\n");
    printf("População: Carta %d venceu (%d)\n", Populacao1 > Populacao2 ? 1 : 2, Populacao1 > Populacao2);
    printf("Área: Carta %d venceu (%d)\n", Area1 > Area2 ? 1 : 2, Area1 > Area2);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2 ? 1 : 2, PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 2, DensidadePopulacional1 < DensidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", PibPercapita1 > PibPercapita2 ? 1 : 2, PibPercapita1 > PibPercapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", SuperPoder1 > SuperPoder2 ? 1 : 2, SuperPoder1 > SuperPoder2);

    return 0;
}
