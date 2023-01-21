//Perfil Github: Lorenzo Amorim
#include <stdio.h>
//biblioteca padr�o da linguagem C. Comandos de entrada e sa�da //
#include <math.h>
// biblioteca necess�ria para algumas fun��es matem�ticas

int main() { 
//declara a fun��o principal, chamada de "main", e "int" indica que ir� "devolver" algum comando do tipo inteiro//
    printf("ALGORITMOS E PROGRAMA��O: ATIVIDADE DE PRODU��O\n");
    printf("Nome:\tLorenzo Ataide dos Santos Amorim \n");
    printf("Curso:\tAn�lise e desenvolvimento de sistemas \n");
    printf("Universidade:\tUnivesidade La Salle \n");
    printf("Matr�cula:\t202213935 \n");
//instru��o de "print" para mostrar no console ao usu�rio algum texto na tela, \(contrabarra)n para pular uma linha depois da frase e \t para dar espa�o ap�s os dois pontos (opcional)//
    float A, B; 
	int opcao;
//float para definir que as vari�veis "A" e "B" ser�o n�meros decimais, e int para definir que a vari�vel "opcao" ser�o n�meros inteiros
    printf("Escolha uma das opera��es em que deseja realizar o c�lculo:\n\n");
    printf("1 - Soma\n2 - Subtra��o\n3 - Divis�o\n4 - Multiplica��o\n5 - Pot�ncia\n6 - Ra�z Quadrada\n\n");
    scanf("\n%d", &opcao);
    //scanf para a intera��o do usu�rio com o comando, "%d" 
    //para leros dados inteiros e "&opcao" para armazenar no 
    //endere�o de op��o
    if (opcao == 6){
        printf("Voc� escolheu ra�z quadrada: \nPara ra�z quadrada escolha apenas um valor: ");
        scanf("%f", &A);
        printf("%0.2f", sqrt(A));
        return 0;
    }
    else {
    // if e else usados juntos, pois houve uma sele��o composta, usada para determinar se um valor � verdadeiro e/ou sen�o ele � falso
    
    printf("Digite um primeiro valor: ");
    scanf("%f", &A);
    printf("Digite um segundo valor:");
    scanf("%f", &B);
    
    
//"%f" para ler os dados em valor decimal ou pontos flutuantes
    switch(opcao){
//"switch" como comando de sele��o, server para criar op��es, muito usado para implementar um menu
    case 1: 
    //cases, como casos para a sele��o de switch, usadas tamb�m como vari�veis para a mesma
        printf("Voc� escolheu a soma:\n%0.2f\n", A + B);
        break;
        //break para sair do loop de switch
    case 2: 
        printf("Voc� escolheu a subtra��o:\n%0.2f\n", A - B);
        break;
    case 3: 
        while(B == 0){
            printf("N�o existe n�mero divis�vel por zero!\nDigite outro valor: ");
            scanf("%f", &B);
    //foi usada a fun��o "while" (enquanto), para a defini��o de B, e assim n�o ser� necess�rio o uso de if e else novamente, while � usada enquanto o valor for 0, e se n�o for 0 o programa n�o ir� realizar o c�lculo
        }
        printf("Voc� escolheu a divis�o:\n%0.2f\n", A / B);
        break;
    case 4: 
        printf("Voc� escolheu a multiplica��o:\n%0.2f", A * B);
        break;
    case 5:
        printf("Voc� escolheu a potencia��o: \n%0.2f", pow(A,B));
        break;
        
    }
      
    }
     


    
    return 0;
//valor da fun��o main de retorno//
}

//Toda estrutura b�sica de um c�digo C acima//
