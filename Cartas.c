#include 

typedef struct {
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
} Carta;

int main() {
    Carta cartas[2]; // Array para armazenar duas cartas

    // Loop para cadastrar as duas cartas
    for (int i = 0; i < 2; i++) {
        printf("Cadastro da Carta %d:\n", i + 1);
        
        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        
        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);
        
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);
        
        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].num_pontos_turisticos);
        
        printf("\n");
    }

    // Exibindo os dados cadastrados
    printf("Dados Cadastrados:\n");
    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Número de pontos turísticos: %d\n", cartas[i].num_pontos_turisticos);
        printf("\n");
    }

    return 0;
}
