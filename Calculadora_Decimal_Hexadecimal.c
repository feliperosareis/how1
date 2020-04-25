#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declara��o de vari�veis.
	int num, opcao;
	
	// Exibe o T�tulo do Programa.
	printf("\nCALCULADORA CONVERSORA DE BASES\n");
	
	do
	{
		// Chamada da fun��o que exibe o menu.
		opcao = menu();
		
		// Estrutura condicional.
		if (opcao == 1)
		{
			// Solicita que o usu�rio digite um n�mero decimal.
			printf("Digite um numero em DECIMAL para converte-lo em HEXADECIMAL: ");
			// L� o n�mero decimal digitado pelo usu�io.
			scanf("%d", &num);
			// Imprime o n�mero convertido para hexadecimal.
			printf("O numero %d em hexadecimal eh: %x", num, num);	// A instru��o %x converte o n�mero decimal para hexadecimal.
		}
		else if (opcao == 2)
		{
			// Solicita que o usu�rio digite um n�mero hexadecimal.
			printf("Digite um numero em HEXADECIMAL para converte-lo em DECIMAL: ");
			// L� o n�mero hexadecimal digitado pelo usu�io.
			scanf("%x", &num);
			// Imprime o n�mero convertido para decimal.
			printf("O numero %x em decimal eh: %d\n", num, num);	// A instru��o %x converte o n�mero decimal para decimal.
		}
		else if (opcao == 0)
		{
			printf("Encerrando a Calculadora.");
			exit(0);	// Finaliza o programa.
		}
		else
		{
			// Mensagem de erro para o usu�rio.
			printf("Esta opcao eh invalida! Por favor, tente novamente.\n");
		}
	}
	while(opcao > 0);
	
		
	
	return 0;
}


int menu()
{
	int opcaoMenu;
	
	// Menu a ser exibido para o usu�rio.
    printf("\nDIGITE A OPERACAO DESEJADA:\n\n");
    printf("[ 1 ] DECIMAL  	  ->  HEXADECIMAL\n");
	printf("[ 2 ] HEXADECIMAL  ->  DECIMAL\n");
    printf("[ 0 ] SAIR\n");
    
    // Este comando l� a op��o digitada pelo usu�rio.
	scanf("%d", &opcaoMenu);
	
	return opcaoMenu;
}








