#include <stdio.h>

int main()
{
    
    float nota1=0, nota2=0, media=0;//declaração de variáveis
    int resposta;
    
    do{//inicio da repetição
    printf("Digite a primeira nota: ");//inclui os valores das notas
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    media = (nota1+nota2)/2;//calculo da média das notas 
    printf("A média do aluno é %.2f pontos\n", media);//Exibe a média do aluno
    
    printf("Digite 1 para calcular outra média ou 2 para sair do programa");
    scanf("%d", &resposta);//verifica se deseja calcular novamente as médias 
    
}while(resposta==1);// Condição para o Laço

    return 0;
}
