#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op, n1, n, i=0, s=0, j; 
	
    printf("\n================================\n");
    printf("CALCULADORA DE QUATRO OPERAÇÕES\n");
	printf("================================\n");
	
	printf("\nVeja a seguir as 04 operações\ndisponíveis:\n\n");
	printf("01 - ADIÇÃO;\n02 - SUBTRAÇÃO;\n03 - MULTIPLICAÇÃO;\n04 - DIVISÃO\n");
	printf("\nDigite o número correspondente a operação que deseja realizar: \n");
	scanf("%i", &op);
	
	switch (op){
	case 1:
	printf("\nQuantos números deseja somar: \n");
	scanf("%i", &n);
	for(i=0; i<n; i++){
		printf("Insira o %iº valor: \n", i+1);
	scanf("%i", &n1);	
		s= s+n1;	
	}
	printf("\nRESULTADO: %i", s);
	break;
	
		case 2:
	printf("Insira o número que será subtraido: \n");
	scanf("%i", &s);
	printf("\nQuantos números deseja subtrair de %i: \n", s);
	scanf("%i", &n);

	for(i=0; i<n; i++){
		printf("Insira o %iº valor por quem %i será subtraido: \n", i+1, s);
	scanf("%i", &n1);
	s=s-n1;
	}
	printf("\nRESULTADO: %i", s);
	break;
	
		case 3:
	printf("\nQuantos números deseja multiplicar: \n");
	scanf("%i", &n);
	s=1;
	for(i=0; i<n; i++){
		printf("Insira o %iº valor: \n", i+1);
	scanf("%i", &n1);
	s=s*n1;
	}	
	printf("\nRESULTADO: %i", s);
	break;

		case 4:
	printf("\n= IMPORTANTE =\n");
	printf("Aqui são Considerados\napenas números naturais!!!\n\n");
	
    printf("A divisão de números negativos,	racionais\nserão disponibilizados em breve\n\n");
	printf("Insira o número que será dividido: \n");
	scanf("%i", &s);
	printf("\nQuantas vezes %i será dividido: \n", s);
	scanf("%i", &n);

	for(i=0; i<n; i++){
	printf("Insira o %iº valor por quem %i será divido: \n", i+1, s);
	scanf("%i", &n1);
	s=s/n1;
	}
	printf("\nRESULTADO: %i", s);
	break;
	
		default:
		printf("Operação inválida");
		break;	
}
	return(0);
}
