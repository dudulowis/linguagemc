#include <stdio.h>
int main(){
    int idade;
    printf("Digite a sua idade e tecle Enter\n");
    scanf("%d",&idade);
    if(idade > 17){
        printf("%d anos. Você está autorizado!\n",idade);
    }
    else{
        printf("%d anos. Você não está autorizado!\n",idade);
    }
    return 0;
}