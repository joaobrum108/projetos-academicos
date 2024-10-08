#include <stdio.h>

int main() {
    int escolha;
    int quantidade_papagaio;
    int custo_kg_comida;
    int total_comida;
    int dias;
    int total_por_dia;
    
    printf("ZOOLOGICO GUARULHOS\n");
    printf("tipos de animais\n");
    printf(" (1)papagaio\n");
    printf(" (2)zebra\n");
    printf(" (3)girafa\n");
    
    printf("\n-------------------------------------------\n");
    printf("Escolha um numero para o animal :\n");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            printf("Qual a quantidade de papagaio :\n");
            scanf("%d", &quantidade_papagaio);
            printf("Custo estimado por kilo de comida:\n");
            scanf("%d", &custo_kg_comida);
            
            // Calculando o total estimado de comida
            total_comida = quantidade_papagaio / custo_kg_comida;
            
            printf(" Quantidade por de kilo por %d papagaios é de:  %d kg\n", quantidade_papagaio, total_comida);
            
            
            
            total_por_dia = quantidade_papagaio * total_comida;
            
            printf("Quantidade por dia e %d kg\n",quantidade_papagaio,total_comida);
            
            
            
            
            
            break;
        
        case 2:
            // Você pode adicionar a lógica para zebra aqui
            break;
        
        case 3:
            // Você pode adicionar a lógica para girafa aqui
            break;
        
        default:
            printf("Escolha um número de 1 a 3\n");
            break;
    }
    
    return 0;

