//Perfil Github: Lorenzo Amorim
#include <stdio.h>
//biblioteca padrão da linguagem C. Comandos de entrada e saída //
#include <math.h>
// biblioteca necessária para algumas funções matemáticas

int main() { 
//declara a função principal, chamada de "main", e "int" indica que irá "devolver" algum comando do tipo inteiro//
    printf("ALGORITMOS E PROGRAMAÇÃO: ATIVIDADE DE PRODUÇÃO\n");
    printf("Nome:\tLorenzo Ataide dos Santos Amorim \n");
    printf("Curso:\tAnálise e desenvolvimento de sistemas \n");
    printf("Universidade:\tUnivesidade La Salle \n");
    printf("Matrícula:\t202213935 \n");
//instrução de "print" para mostrar no console ao usuário algum texto na tela, \(contrabarra)n para pular uma linha depois da frase e \t para dar espaço após os dois pontos (opcional)//
    float A, B; 
	int opcao;
//float para definir que as variáveis "A" e "B" serão números decimais, e int para definir que a variável "opcao" serão números inteiros
    printf("Escolha uma das operações em que deseja realizar o cálculo:\n\n");
    printf("1 - Soma\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n5 - Potência\n6 - Raíz Quadrada\n\n");
    scanf("\n%d", &opcao);
    //scanf para a interação do usuário com o comando, "%d" 
    //para leros dados inteiros e "&opcao" para armazenar no 
    //endereço de opção
    if (opcao == 6){
        printf("Você escolheu raíz quadrada: \nPara raíz quadrada escolha apenas um valor: ");
        scanf("%f", &A);
        printf("%0.2f", sqrt(A));
        return 0;
    }
    else {
    // if e else usados juntos, pois houve uma seleção composta, usada para determinar se um valor é verdadeiro e/ou senão ele é falso
    
    printf("Digite um primeiro valor: ");
    scanf("%f", &A);
    printf("Digite um segundo valor:");
    scanf("%f", &B);
    
    
//"%f" para ler os dados em valor decimal ou pontos flutuantes
    switch(opcao){
//"switch" como comando de seleção, server para criar opções, muito usado para implementar um menu
    case 1: 
    //cases, como casos para a seleção de switch, usadas também como variáveis para a mesma
        printf("Você escolheu a soma:\n%0.2f\n", A + B);
        break;
        //break para sair do loop de switch
    case 2: 
        printf("Você escolheu a subtração:\n%0.2f\n", A - B);
        break;
    case 3: 
        while(B == 0){
            printf("Não existe número divisível por zero!\nDigite outro valor: ");
            scanf("%f", &B);
    //foi usada a função "while" (enquanto), para a definição de B, e assim não será necessário o uso de if e else novamente, while é usada enquanto o valor for 0, e se não for 0 o programa não irá realizar o cálculo
        }
        printf("Você escolheu a divisão:\n%0.2f\n", A / B);
        break;
    case 4: 
        printf("Você escolheu a multiplicação:\n%0.2f", A * B);
        break;
    case 5:
        printf("Você escolheu a potenciação: \n%0.2f", pow(A,B));
        break;
        
    }
      
    }
     


    
    return 0;
//valor da função main de retorno//
}

//Toda estrutura básica de um código C acima//
