#include <stdio.h>
#include <stdlib.h>

int main()
{
      int a,b,teste,troca;
      
      printf("Inicio do intervalo:");
      scanf("%d",&a);
      printf("Final do intervalo:");
      scanf("%d",&b);
      
	  //teste para deixar o intervalo crescente.	
      if (a>b){
      	troca=b;
		b=a;
		a=troca;	
	  }
      
	  teste = a;
      
	  do{
      	if ((teste%2==0)&&(teste%3==0)){
      		printf("numero gerado: %d\n",teste);
		  }
		teste=teste+1;  	
	  }        
      while(teste!=b);

      system("PAUSE");
}

