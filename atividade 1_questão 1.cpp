#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ALUNOS: Izabelly Azevedo Lima - Matrícula 2019201251
		 Gabriel dos SN Martis - Matrícula 2019200071
		 Raquel Vieira Cardoso - Matrícula 2019200854

ATIVIDADE I  - QUESTÃO 1

*/


int main()
{
    setlocale(LC_ALL, "Portuguese");
    {
        char nome[90], sexo[90], endereco[90];
        int casa, celular, cp, telefone, idade;

	
	    printf("Informe o seu nome:");
	   	 scanf("%s",&nome);
	    
	    printf("Informe o seu cpf:");
	    	scanf("%d",&cp);
	    
	    printf("Informe a sua idade:");
	   	 scanf("%d",&idade);
	    
	    printf("Informe o seu sexo:");
	    	scanf("%s",&sexo);
	   	 
	    printf("Informe o seu endereço:");
	    	scanf("%s",&endereco);
	
	    printf("Informe o número da sua residência:");
	    	scanf("%d",&casa);
	    
	    printf("Digite seu telefone:");
	    	scanf("%d",&telefone);
	    
	    printf("informe seu celular:");
	   	 scanf("%d",&celular);

    printf("\nOlá usuário, se suas informações estão corretas clique em avançar.\n");
    printf("O seu nome é %s\n",nome,".");
    printf("O seu cpf é %d\n",cp);
    printf("A sua idade é %d\n",idade,".");
    printf("O seu sexo é %s\n",sexo,".");
    printf("O seu endereço é %s",endereco);
    printf(",número %d\n",casa, ".");
    printf("O seu telefone é %d\n",telefone);
    printf("O seu celular é %d\n",celular);
    }
	
}
