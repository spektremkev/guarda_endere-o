#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ALUNOS: Izabelly Azevedo Lima - Matr�cula 2019201251
		 Gabriel dos SN Martis - Matr�cula 2019200071
		 Raquel Vieira Cardoso - Matr�cula 2019200854

ATIVIDADE I  - QUEST�O 1

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
	   	 
	    printf("Informe o seu endere�o:");
	    	scanf("%s",&endereco);
	
	    printf("Informe o n�mero da sua resid�ncia:");
	    	scanf("%d",&casa);
	    
	    printf("Digite seu telefone:");
	    	scanf("%d",&telefone);
	    
	    printf("informe seu celular:");
	   	 scanf("%d",&celular);

    printf("\nOl� usu�rio, se suas informa��es est�o corretas clique em avan�ar.\n");
    printf("O seu nome � %s\n",nome,".");
    printf("O seu cpf � %d\n",cp);
    printf("A sua idade � %d\n",idade,".");
    printf("O seu sexo � %s\n",sexo,".");
    printf("O seu endere�o � %s",endereco);
    printf(",n�mero %d\n",casa, ".");
    printf("O seu telefone � %d\n",telefone);
    printf("O seu celular � %d\n",celular);
    }
	
}
