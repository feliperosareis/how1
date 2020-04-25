#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Declaração de variáveis.
	int num, opcao;
	
	// Exibe o Título do Programa.
	printf("\nCALCULADORA CONVERSORA DE BASES\n");
	
	do
	{
		// Chamada da função que exibe o menu.
		opcao = menu();
		
		// Estrutura condicional.
		if (opcao == 1)
		{
			// Solicita que o usuário digite um número decimal.
			printf("Digite um numero em DECIMAL para converte-lo em HEXADECIMAL: ");
			// Lê o número decimal digitado pelo usuáio.
			scanf("%d", &num);
			// Imprime o número convertido para hexadecimal.
			printf("O numero %d em hexadecimal eh: %x", num, num);	// A instrução %x converte o número decimal para hexadecimal.
		}
		else if (opcao == 2)
		{
			// Solicita que o usuário digite um número hexadecimal.
			printf("Digite um numero em HEXADECIMAL para converte-lo em DECIMAL: ");
			// Lê o número hexadecimal digitado pelo usuáio.
			scanf("%x", &num);
			// Imprime o número convertido para decimal.
			printf("O numero %x em decimal eh: %d\n", num, num);	// A instrução %x converte o número decimal para decimal.
		}
		else if (opcao == 0)
		{
			printf("Encerrando a Calculadora.");
			exit(0);	// Finaliza o programa.
		}
		else
		{
			// Mensagem de erro para o usuário.
			printf("Esta opcao eh invalida! Por favor, tente novamente.\n");
		}
	}
	while(opcao > 0);
	
		
	
	return 0;
}


int menu()
{
	int opcaoMenu;
	
	// Menu a ser exibido para o usuário.
    printf("\nDIGITE A OPERACAO DESEJADA:\n\n");
    printf("[ 1 ] DECIMAL  	  ->  HEXADECIMAL\n");
	printf("[ 2 ] HEXADECIMAL  ->  DECIMAL\n");
    printf("[ 0 ] SAIR\n");
    
    // Este comando lê a opção digitada pelo usuário.
	scanf("%d", &opcaoMenu);
	
	return opcaoMenu;
}








