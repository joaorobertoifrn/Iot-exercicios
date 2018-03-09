#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

char opcao,volta;
int i,loop=0,cont_alunos=0,vetor_alunos=0;
float media=0.0,somaNotas=0.0;
struct dados_aluno {
	char nome[50];
    float av1;
};




int main (void)
{
	system("cls");
    printf("**********************************************************************\n");
    printf("**                      Inicializacao de Dados                      **\n");
    printf("**********************************************************************\n\n\n");
   	printf("\t\n\nInforme a quantidade de Alunos : ");
	scanf("%d",&vetor_alunos);
	fflush(stdin);
   	struct dados_aluno aluno[vetor_alunos];
   	
	system("cls");
   do {
   		menu(); 
   		switch (opcao) {
   	 		case '1':
				system("cls");
			   	printf("**********************************************************************\n");
			   	printf("***           Lista de Alunos para simples consulta                ***\n");
			   	printf("**********************************************************************\n\n");
				
				printf("_________________________________________________________________________________\n");
				printf("|Cod. Aluno |          Nome do Aluno                           |   Nota Aluno    |\n");
				printf("|___________|__________________________________________________|_________________|\n");
				for(i=0; i<=vetor_alunos-1; i++) {
				printf("|  %5.2d    |%50s| %10.2f      |\n",i+1,aluno[i].nome,aluno[i].av1);
				printf("|___________|__________________________________________________|_________________|\n");
			
				}
			
				printf("\n\nTotal de Alunos Cadastrados no Momento: %d\n\n",cont_alunos);
				fflush(stdin);
				getchar();
				
				system("cls");
  			break;
	 		
			case '2':
				system("cls");
			   	printf("**********************************************************************\n");
			   	printf("***                     Cadastrar Aluno                            ***\n");
			   	printf("**********************************************************************\n\n");
				
				for(i=0;i<=vetor_alunos-1;i++){
					printf("Nome do aluno [%.2d]....: ",i+1);
				    scanf("%s", aluno[i].nome);
					printf("\n");
					printf("Nota da AV1 ..........: ",i+1);
				    scanf("%f", &aluno[i].av1);
					printf("\n"); 	
					cont_alunos = cont_alunos+1; 	
				}

				printf("\nALUNOS CADASTRADO COM SUCESSO !!\n\n");
				printf("\n\nTotal de Alunos Cadastrados no Momento: %.2d\n\n",cont_alunos);
				fflush(stdin);
				getchar();
				system("cls");
  			break;
	 		
			case '3':
				system("cls");
			   	printf("**********************************************************************\n");
			   	printf("***                     Calculo de Notas                           ***\n");
			   	printf("**********************************************************************\n\n");
				printf("\t");
				
				for(i=0;i<=vetor_alunos-1;i++){
					somaNotas = somaNotas + aluno[i].av1;	
				}
				printf("Media das Avaliacoes ..........: %4.2f",somaNotas/vetor_alunos);
				printf("\n");
				printf("\n\nTotal de Alunos Cadastrados no Momento: %d\n\n",cont_alunos);
				fflush(stdin);
				getchar();
				system("cls");	
  			break;
	 		
			 case '4':
				if (cont_alunos == 0) {
			        system("cls");
				   	printf("**********************************************************************\n");
			   		printf("***                       Limpar Dados                             ***\n");
			   		printf("**********************************************************************\n\n");
					printf("Nao encontramos dados no sistema. Nao eh Possivel Excluir nenhum Aluno.!!!!\n");
			 		printf("\tPressione 'ENTER' para voltar para o menu.\n");			          
					fflush(stdin);
			       	getchar();
			       	loop = 0;
			       	system("cls");
				} else {
					printf("\nAtencao!!! Essa rotina Limpara todos os dados cadastrados anteriormente.\n\n");
			        printf("Deseja Realmente Limpar todos dados ? S - SIM ou N - Nao.\n");
			        fflush(stdin);
			       	volta = toupper(getchar());
					while ((volta!='S')&&(volta!='N')) {
						printf("\nOpcao Errada Digite Novamente. S - SIM ou N - Nao. :");
			        	fflush(stdin);
			       	    volta = toupper(getchar());	   
				    }
			    	if (volta == 'S') {
						for(i=0;i<=vetor_alunos-1;i++){
							aluno[i].av1=0.0;
							cont_alunos = 0;	
						}
					}		      
				system("cls");	
				}
  			break;
			
			case '5':
        	break;     
	 		
			default:
	 	    	printf("\n\nOpcao errada!!!!!!!!\n\n");
	 		 	system("pause");
	 	     	opcao=' ';
             	getchar();
	 		 	system("cls");
	 		break;
	 	}
    }
    while (opcao !='5');
    system("cls");
    printf("Obrigado por usar meu programa!\n\n\n");
    system("pause");
 	return (0);
}

void menu(void) {
    printf("**********************************************************************\n");
    printf("**         Esse programa controla as notas de um Aluno              **\n");
    printf("**********************************************************************\n\n\n");
   	printf("\t%c 1 %c Lista de Alunos\n",16,17);
   	printf("\t%c 2 %c Cadastrar Alunos\n",16,17);
   	printf("\t%c 3 %c Calcular Notas\n",16,17);
   	printf("\t%c 4 %c Limpar Todos\n",16,17);
   	printf("\t%c 5 %c Sair\n",16,17);
   	printf("\t\nDigite sua Opcao : ");
   	fflush(stdin);
   	opcao = getchar();
}
