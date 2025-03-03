#include <stdio.h>

#include <stdio.h>

int main() {
    char Estado1[3], Codigo1[4], NomeDaCidade1[50];  // Mudado para armazenar siglas como "PR", "SP"
    int Populacao1, PontosTuristicos1;
    float Area1, PIB1;
//Carta 2
    char Estado2[3], Codigo2[4], NomeDaCidade2[50];  // Mudado para armazenar siglas como "PR", "SP"
    int Populacao2, PontosTuristicos2;
    float Area2, PIB2;
   
   
    // Entrada de dados
    printf("Digite o Estado (EX: PR): ");
    scanf("%2s", Estado1);  // %2s para garantir que leia no máximo 2 caracteres


    printf("Digite o Código da carta (ex: A01): ");
    scanf("%3s", Codigo1);
    

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", NomeDaCidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (Em Bilhões de Reais): ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    
// //ENTRADE DE DADOS DA CARTA2

printf("Digite o Estado da carta 2 (EX: PR): ");
scanf("%2s", Estado2);  // %2s para garantir que leia no máximo 2 caracteres


printf("Digite o Código da carta 2 (ex: A02): ");
scanf("%3s", Codigo2);


printf("Digite o Nome da Cidade da carta 2: ");
scanf(" %[^\n]", NomeDaCidade2); 

printf("Digite a população da cidade da carta 2: ");
scanf("%d", &Populacao2);

printf("Digite a área da cidade da carta 2 em km²: ");
scanf("%f", &Area2);

printf("Digite o PIB da cidade da carta 2(Em Bilhões de Reais): ");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos da carta 2: ");
scanf("%d", &PontosTuristicos2);


// Exibição dos dados da carta 1
printf("\n****** EXIBIÇÃO CARTA 1 ******\n");
printf("Estado: %s\n", Estado1);  // Mudado de %c para %s
printf("Código: %s\n", Codigo1);
printf("Nome da cidade: %s\n", NomeDaCidade1);
printf("População: %d habitantes\n", Populacao1);
printf("Área: %.2f km²\n", Area1);
printf("PIB: %.2f Bilhões de Reais\n", PIB1);
printf("Número de pontos turísticos: %d\n", PontosTuristicos1);

// Exibição dos dados da carta 2

printf("\n****** EXIBIÇÃO CARTA 2 ******\n");
printf("Estado: %s\n", Estado2);  // Mudado de %c para %s
printf("Código: %s\n", Codigo2);
printf("Nome da cidade: %s\n", NomeDaCidade2);
printf("População: %d habitantes\n", Populacao2);
printf("Área: %.2f km²\n", Area2);
printf("PIB: %.2f Bilhões de Reais\n", PIB2);
printf("Número de pontos turísticos: %d\n", PontosTuristicos2);



    return 0;
}