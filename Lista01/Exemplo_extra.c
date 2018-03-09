#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

#define Linha 5
#define Coluna 5

int main (void)
{
   char opcao,volta, poltrona[Linha][Coluna];
   int i=0,j=0,loop=0,contador_posicao,row,col;
   
   for(i=1;i<=Linha;i++)
	  for(j=1;j<=Coluna;j++)
          poltrona[i][j] =  ' ';
          contador_posicao=0;
   do
    {
     printf("**********************************************************************\n");
     printf("**         Esse programa controla os assentos de um Teatro          **\n");
     printf("**********************************************************************\n\n\n");
   	 printf("\t%c 1 %c Exibir Disponibilidades\n",16,17);
   	 printf("\t%c 2 %c Escolher Lugares\n",16,17);
   	 printf("\t%c 3 %c Limpar Lugar Ocupado\n",16,17);
   	 printf("\t%c 4 %c Limpar Todos\n",16,17);
   	 printf("\t%c 5 %c Sair\n",16,17);
   	 printf("\t\nDigite sua Opcao : ");
   	 fflush(stdin);
   	 opcao = getchar();
   	 switch (opcao)
   	 {
   	 	case '1':
   			 system("cls");
   			 printf("**********************************************************************\n");
   			 printf("***   Abaixo estao os Lugares Disponiveis para simples consulta.   ***\n");
   			 printf("**********************************************************************\n\n");
			 printf("\t");
             for(i=1;i<=Coluna;i++)
		        printf("%5.2d",i);
   				  for(i=1;i<=Linha;i++){
     			  printf("\n\n\t%2.2d",i);
	  				   for(j=1;j<=Coluna;j++)
   					     printf(" [%1c] ",poltrona[i][j]);}
			 printf("\n\n[ ] - Livre  [X] - Reservado     Total de Cadeiras Ocupadas no Momento: %d\n\n",contador_posicao);
			 fflush(stdin);
			 getchar();
			 system("cls");
  		break;
	 	case '2':
             do
			  {
			 system("cls");
   			 printf("**********************************************************************\n");
   			 printf("***               Lugares Disponiveis para consulta.               ***\n");
   			 printf("**********************************************************************\n\n");
			 printf("\t");
             for(i=1;i<=Coluna;i++)
		        printf("%5.2d",i);
   				  for(i=1;i<=Linha;i++){
     			  printf("\n\n\t%2.2d",i);
	  				   for(j=1;j<=Coluna;j++)
   					     printf(" [%1c] ",poltrona[i][j]);}
			 printf("\n\n[ ] - Livre  [X] - Reservado     Total de Cadeiras Ocupadas no Momento: %d\n\n",contador_posicao);
			 printf("Selecione o Lugar para fazer sua reserva.\n\n");
			 printf("%c Linha : ",16); 
	    	 scanf("%d",&row);
	         while ((row>Linha) || isdigit(row))
			 {
			   printf("%c Valor Informado esta fora do intervalo valido.!!!\n %c Informe Novamente a Linha : ",16,16);
			   fflush(stdin);
			   scanf("%d",&row);
			 }   	   
             printf("%c Coluna: ",16); 
			 scanf("%d",&col);
	         while ((col>Coluna) || isdigit(col))
			 {
			   printf("%c Valor Informado esta fora do intervalo valido.!!!\n %c Informe Novamente a Coluna : ",16,16);
			   fflush(stdin);
			   scanf("%d",&col);
			 }
   			   if(poltrona[row][col]==' ')
			     {
				   poltrona[row][col] = 'X';
       		 	   printf("\nRESERVA EFETIVADA COM SUCESSO !!\n\n");
       		 	   contador_posicao++;
                   printf("Deseja Fazer outra  reserva ? S - SIM ou N - Nao.\n");
                   fflush(stdin);
                   volta = toupper(getchar());
			       while ((volta!='S')&&(volta!='N'))
                   {
			         printf("\nOpcao Errada Digite Novamente. S - SIM ou N - Nao. :");
                     fflush(stdin);
       	             volta = toupper(getchar());	   
	               }
       		 	   if (volta == 'N')
       		 	     loop = 0;
       		 	    else
       		 	     loop = 1;
		       }  
   			   else if (poltrona[row][col]=='X')
   			   {
              	   printf("\nCADEIRA JA OCUPADA!! ESCOLHA OUTRA !!\n");
              	   fflush(stdin);
				   getchar();
              	   loop = 1;
	           }
	         }
	         while (loop != 0);
			 getchar();
			 system("cls");	
  		break;
	 	case '3':
	         if (contador_posicao == 0)
	         {
               system("cls");
			   printf("O Teatro encontra-se VAZIO. Nao eh Possivel Excluir nenhuma Reserva.!!!!\n");
 			   printf("\tPressione 'ENTER' para voltar para o menu.\n");			          
		       fflush(stdin);
       	       getchar();
       	       loop = 0;
       	       system("cls");
		     }
		      else
			 {
             do
			  {
			 system("cls");
   			 printf("**********************************************************************\n");
   			 printf("***               Lugares Disponiveis para consulta.               ***\n");
   			 printf("**********************************************************************\n\n");
			 printf("\t");
             for(i=1;i<=Coluna;i++)
		        printf("%5.2d",i);
   				  for(i=1;i<=Linha;i++){
     			  printf("\n\n\t%2.2d",i);
	  				   for(j=1;j<=Coluna;j++)
   					     printf(" [%1c] ",poltrona[i][j]);}
			 printf("\n\n[ ] - Livre  [X] - Reservado     Total de Cadeiras Ocupadas no Momento: %d\n\n",contador_posicao);
			 printf("Selecione o Lugar para fazer sua reserva.\n\n");
			 printf("%c Linha : ",16); 
	    	 scanf("%d",&row);
	         while ((row>Linha) || isdigit(row))
			 {
			   printf("%c Valor Informado esta fora do intervalo valido.!!!\n %c Informe Novamente a Linha : ",16,16);
			   fflush(stdin);
			   scanf("%d",&row);
			 }   	   
             printf("%c Coluna: ",16); 
			 scanf("%d",&col);
	         while ((col>Coluna) || isdigit(col))
			 {
			   printf("%c Valor Informado esta fora do intervalo valido.!!!\n %c Informe Novamente a Coluna : ",16,16);
			   fflush(stdin);
			   scanf("%d",&col);
			 }
   			   if(poltrona[row][col]=='X')
			     {
				   poltrona[row][col] = ' ';
       		 	   printf("\nEXCLUSAO EFETIVADA COM SUCESSO !!\n\n");
       		 	   contador_posicao++;
                   printf("Deseja Fazer outra  EXCLUSAO ? S - SIM ou N - Nao.\n");
                   fflush(stdin);
                   volta = toupper(getchar());
			       while ((volta!='S')&&(volta!='N'))
                   {
			         printf("\nOpcao Errada Digite Novamente. S - SIM ou N - Nao. :");
                     fflush(stdin);
       	             volta = toupper(getchar());	   
	               }
       		 	   if (volta == 'N')
       		 	     loop = 0;
       		 	    else
       		 	     loop = 1;
		       }  
   			   else if (poltrona[row][col]=='X')
   			   {
              	   printf("\nCADEIRA JA EXCLUIDA!! ESCOLHA OUTRA !!\n");
              	   fflush(stdin);
				   getchar();
              	   loop = 1;
	           }
	         }
	         while (loop != 0);
			 getchar();
			 system("cls");	
          }

  		break;
	 	case '4':
	         if (contador_posicao == 0)
	         {
               system("cls");
			   printf("O Teatro encontra-se VAZIO. Nao eh Possivel Excluir nenhuma Reserva.!!!!\n");
 			   printf("\tPressione 'ENTER' para voltar para o menu.\n");			          
		       fflush(stdin);
       	       getchar();
       	       loop = 0;
       	       system("cls");
		     }
		      else
			 {
			 printf("\nAtencao!!! Essa rotina Limpara todas as reservas feitas anteriormente.\n\n");
             printf("Deseja Realmente Limpar todos as reservas ? S - SIM ou N - Nao.\n");
             fflush(stdin);
       	     volta = toupper(getchar());
			 while ((volta!='S')&&(volta!='N'))
             {
			    printf("\nOpcao Errada Digite Novamente. S - SIM ou N - Nao. :");
                fflush(stdin);
       	        volta = toupper(getchar());	   
	         }
       		 	   if (volta == 'S')
       		 	    {
				   	 for(i=1;i<=Linha;i++)
			           for(j=1;j<=Coluna;j++)
			              poltrona[i][j] =  ' ';
			              contador_posicao = 0;
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

