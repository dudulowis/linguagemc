#include <stdio.h>

int main(){
    int placa;
    printf("Digite o número final da placa do veículo\n");
    scanf("%d",&placa);

    if( placa == 1 || placa == 2){
        printf("Rodízio de Segunda-Feira\n");
    }
    else if(placa == 3 || placa == 4){
        printf("Rodízio de Terça-Feira\n");
    }
    else if(placa == 5 || placa == 6){
        printf("Rodízio de Quarta-Feira\n");
    }
    else if(placa == 7 || placa == 8){
        printf("Rodízio de Quinta-Feira\n");
    }
    else if(placa == 9 || placa == 0){
        printf("Rodízio de Sexta-Feira\n");
    }
    else{
        printf("Final de placa inválido\n");
    }
    return 0;
    
}