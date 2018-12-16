#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>


int main (void)

{
	
	char hostname[500], cmd[2048], login[500], img[500], IP[500];
	int alter, bang, ID;
	
	setlocale(LC_ALL,""); 
	
	printf("\n\n");
	printf("\n FERRAMENTAS 4.0");
	printf("\n O que você deseja realizar? ");
	printf("\n  1) Ping normal.");
	printf("\n  2) Ping constante.");
	printf("\n  3) Traçar rota de rede.");
	printf("\n  4) Reiniciar maquina. ");
	printf("\n  5) Desligar maquina. ");
	printf("\n  6) Gerenciador de tarefas remoto.");	
	printf("\n  7) Matar processo remotamente.");
	printf("\n  8) Criação de script para fechar aplicativo.");
	printf("\n  9) MSTSC (Acesso Remoto).");
	printf("\n  10) Verificar MAC Address.");
	printf("\n  11) Descobrir Hostname de IP.");
	printf("\n  12) Instalação de Programas");				
	printf("\n  13) Sair. ");
	
	printf("\n\n\nInforme a alternativa: ");
	scanf("%d", &alter);
	system("cls");
	
switch (alter) 
{
	case 1:
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		sprintf(cmd, "ping %s", hostname);
		system(cmd);
		system("pause");
		return 0;

		
	case 2: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		sprintf(cmd, "ping -t %s", hostname);
		system(cmd);
		system("pause");
		return 0;	
		
	case 3: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		sprintf(cmd, "tracert %s", hostname);
		system(cmd);
		system("pause");
		return 0;
	
	case 4: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		sprintf(cmd, "shutdown /r /f /m %s", hostname);
		system(cmd);
		system("pause");
		return 0;	
		
	case 5: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		sprintf(cmd, "shutdown /s /m %s", hostname);
		system(cmd);
		system("pause");
		return 0;	

	case 6: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		printf("\n\n Informe o login ATD: ");
		scanf("%s", &login);
		sprintf(cmd, "tasklist  /U %s /P /S %s", login, hostname);
		system(cmd);
		system("pause");
		return 0;
		
	case 7: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		printf("\n\n Informe o login ATD: ");
		scanf("%s", &login);
		sprintf(cmd, "tasklist  /U %s /P /S %s", login, hostname);
		system(cmd);
		system("pause");
			if (cmd>0)
			{
				printf("\n\n Informe o ID do processo: ");
				scanf("%d", &ID);
				sprintf(cmd, "taskkill /U %s /S %s /PID %d", login, hostname, ID);
				system(cmd);
				system("pause");						
			}	
		return 0;

	case 8: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		printf("\n\n Informe o login ATD: ");
		scanf("%s", &login);
		sprintf(cmd, "tasklist  /U %s /P /S %s", login, hostname);
		system(cmd);
		system("pause");
			if (cmd>0)
			{
				printf("\n\n Informe o nome da imagem: ");
				scanf("%s", &img);
				sprintf(cmd, "echo taskkill /f /IM %s >> Script.bat", img);
				system(cmd);
				system("pause");						
			}	
		return 0;
			
	case 9: 
		sprintf(cmd, "start mstsc.exe");
		system(cmd);
		system("pause");
		return 0;			

	case 10: 
		printf("\n\n Informe o hostname da maquina: ");
		scanf("%s", &hostname);
		printf("\n\n Informe o login ATD: ");
		scanf("%s", &login);
		sprintf(cmd, "getmac  /S %s /U %s", hostname, login);
		system(cmd);
		system("pause");
		return 0;
	
	case 11: 
		printf("\n\n Informe o endereço IP: ");
		scanf("%s", &IP);
		sprintf(cmd, "ping  /a %s ", IP);
		system(cmd);
		system("pause");
		return 0;

	case 12: 
			printf("\n\n");
			printf("\n FERRAMENTAS 3.5");
			printf("\n O que você deseja realizar? ");
			printf("\n  1) Ping normal.");
			printf("\n  2) Ping constante.");
			printf("\n  3) Traçar rota de rede.");
			printf("\n  4) Reiniciar maquina. ");
			printf("\n  5) Desligar maquina. ");
			printf("\n  6) Gerenciador de tarefas remoto.");	
			printf("\n  7) Matar processo remotamente.");
			printf("\n  8) Criação de script para fechar aplicativo.");
			printf("\n  9) MSTSC (Acesso Remoto).");
			printf("\n  10) Verificar MAC Address.");
			printf("\n  11) Descobrir Hostname de IP.");
			printf("\n  12) Instalação de Programas");				
			printf("\n  13) Sair. ");
	
			printf("\n\n\nInforme a alternativa: ");
			scanf("%d", &bang);
			system("cls");
			switch (bang) 
			{
				case 1:
				
					
				
				default:	
					printf("\n\nO valor informado não está correto!\n\n");
					system("pause");
					return 0;
			}
			
	case 13: 
		return EXIT_SUCCESS;
		return 0;
		
	default:	
		printf("\n\nO valor informado não está correto!\n\n");
		system("pause");
		return 0;

}

	system("pause");
	return 0;		
}

