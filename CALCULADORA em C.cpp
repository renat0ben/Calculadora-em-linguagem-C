#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op, n1, n, i=0, s=0, j; 
	
    printf("\n================================\n");
    printf("CALCULADORA DE QUATRO OPERA��ES\n");
	printf("================================\n");
	
	printf("\nVeja a seguir as 04 opera��es\ndispon�veis:\n\n");
	printf("01 - ADI��O;\n02 - SUBTRA��O;\n03 - MULTIPLICA��O;\n04 - DIVIS�O\n");
	printf("\nDigite o n�mero correspondente a opera��o que deseja realizar: \n");
	scanf("%i", &op);
	
	switch (op){
	case 1:
	printf("\nQuantos n�meros deseja somar: \n");
	scanf("%i", &n);
	for(i=0; i<n; i++){
		printf("Insira o %i� valor: \n", i+1);
	scanf("%i", &n1);	
		s= s+n1;	
	}
	printf("\nRESULTADO: %i", s);
	break;
	
		case 2:
	printf("Insira o n�mero que ser� subtraido: \n");
	scanf("%i", &s);
	printf("\nQuantos n�meros deseja subtrair de %i: \n", s);
	scanf("%i", &n);

	for(i=0; i<n; i++){
		printf("Insira o %i� valor por quem %i ser� subtraido: \n", i+1, s);
	scanf("%i", &n1);
	s=s-n1;
	}
	printf("\nRESULTADO: %i", s);
	break;
	
		case 3:
	printf("\nQuantos n�meros deseja multiplicar: \n");
	scanf("%i", &n);
	s=1;
	for(i=0; i<n; i++){
		printf("Insira o %i� valor: \n", i+1);
	scanf("%i", &n1);
	s=s*n1;
	}	
	printf("\nRESULTADO: %i", s);
	break;

		case 4:
	printf("\n= IMPORTANTE =\n");
	printf("Aqui s�o Considerados\napenas n�meros naturais!!!\n\n");
	
    printf("A divis�o de n�meros negativos,	racionais\nser�o disponibilizados em breve\n\n");
	printf("Insira o n�mero que ser� dividido: \n");
	scanf("%i", &s);
	printf("\nQuantas vezes %i ser� dividido: \n", s);
	scanf("%i", &n);

	for(i=0; i<n; i++){
	printf("Insira o %i� valor por quem %i ser� divido: \n", i+1, s);
	scanf("%i", &n1);
	s=s/n1;
	}
	printf("\nRESULTADO: %i", s);
	break;
	
		default:
		printf("Opera��o inv�lida");
		break;	
}
	return(0);
}
