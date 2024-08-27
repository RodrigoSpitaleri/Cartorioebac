#include <stdio.h> // biblioteca de comunicação com o usuário
#include <stdlib.h> //  biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() //Função responsável por cadastrar os usuário no sistema
{
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Final da criacao de variaveis/string
	
	printf("Digite o CPF a ser cadastrado:"); //coletando informação do usuário
	scanf("%s", cpf); // %s refere-se a string 
	
	strcpy(arquivo, cpf); //Responsavel por criar os valores das string
	
	FILE *file; // Cria o arquivo
	file = fopen(arquivo,"w"); // cria o arquivo W significa escrever uma nova
	fprintf(file,cpf); // salva o valor da variavel 
	fclose(file); // fecha o arquivo
	

	file = fopen (arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	

	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
    file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("pause");
	
	
	
}

int consulta()
{
	setlocale(LC_ALL, "portuguese");
	
	 char cpf[40];
	 char conteudo [200];
	 
	 printf("Digite o cpf a ser consultado:");
	 scanf("%s",cpf);
	 
	 FILE *file;
	 file = fopen(cpf,"r");
	 
	 if(file == NULL)
	 {
	 	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
     }
     
	 	while(fgets(conteudo,200,file)!= NULL)
	 	{
	 		printf("\n Essas são as informções do usuário:");
	 		printf("%s",conteudo);
	 		
		 }
		 
		 system("pause");
	 
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL);
	{
		printf("O usuário foi deletado do sistema!\n");
		system("pause");
	}
}


int teste()
{
	printf("funcionou a função");
	system("pause");
}

int main()
{
	int opcao=0; //Definindo variaveis
	int x=1;
	
	for(x=1;x=1;)
	{
	
	
	   system("cls");
	   
	   
	
	   setlocale(LC_ALL, "portuguese"); // Definindo a linguagem
	
	       printf("#### Cartório EBAC ###\n\n"); // inicio do menu
	       printf("Escolha a opção desejada do menu:\n\n");
	       printf("\t1 - Registrar nomes\n");
	       printf("\t2 - Consultar nomes\n");
	       printf("\t3 - Deletar nomes\n\n");
		   printf("\t4 - Sair do sistema!\n\n"); 
	       printf("Opção:"); //Fim do menu
	
	   scanf("%d", &opcao); // Armazenamento a escolha do usuário
	
	   system("cls"); // responsavel por limpar a tela
	   
	   
	   switch(opcao)
	   {
	   	    case 1:
	   		registro(); //chamada de funções 
		    break;
		    
		    case 2:
		    consulta();
			break;
			
			case 3:
			deletar();
			break;	
			
			case 4:
	        printf("Obrigado por utilizar o sistema!\n");
	        return 0;
	        break;
			
			default:
			printf("Essa opção não existe!\n");
		    system("pause");
		    break;
			//fim da seleção
	   }
	
	   
    }


}
