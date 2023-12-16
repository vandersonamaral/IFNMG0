#include <iostream>
#include <string.h>
#include <ctime>
#include <fstream>

using namespace std;
const int MAX=50;
const int MAX_CONTA=200;

struct Conta{
		char numConta[MAX];
		char numAgenc[MAX];
		char nome[MAX];
		char cpf[15];
		float saldo;	
};
struct MoviConta{
	char data[MAX];
	char hora[MAX];
	char lancamento[MAX];
	float saldo;
	float valor;
};



void menu(int &op);
void cadastrarConta(Conta pessoa[],int &qtd);
void alterarDados(Conta pessoa[],int qtd);
int  buscaCliente (char numC[],char numA,Conta pessoa[],int qtd);
void excluiConta	(Conta pessoa[],int &qtd);
void consultaSal(Conta pessoa[],int qtd);
void deposito(Conta pessoa[],int qtd);
void saque(Conta pessoa[],int qtd);
void transferencia(Conta pessoa[],int qtd);
void mostrarTudo(Conta pessoa[],int qtd);
void salvarMovimentacao(char lan[],int qtd, int cont, float valor, float valor2);
void extrato(int &num);
void extratoEmTela(Conta pessoa[],int qtd);
void extratoEmArquivo(Conta pessoa[],int qtd);
void salvarDados(Conta pessoa[], int qtd, MoviConta movimentacoes[][MAX_CONTA], int contarMovimentacoes[]);
void lerDados(Conta pessoa[], int &qtd, MoviConta movimentacoes[][MAX_CONTA], int contarMovimentacoes[]);


MoviConta movimentacoes[MAX][MAX_CONTA];
int contarMovimentacoes[MAX] = {} ;
ofstream fout;

int main() {
		setlocale(LC_ALL,"portuguese");
		
		int op,num,qtd=0;
		Conta pessoa[MAX];
		
		lerDados(pessoa,qtd,movimentacoes, contarMovimentacoes);
		do{
		system("cls");

		
		menu(op);
		
		
		switch(op){
			case 1:
			 	cadastrarConta (pessoa, qtd);
				break;
			case 2:
				alterarDados  (pessoa, qtd);
				break;
				
			case 3:
				excluiConta (pessoa,qtd);
				break;
				
			case 4:
				consultaSal(pessoa, qtd);
				break;
			
			case 5:
				deposito( pessoa, qtd);
				break;

			case 6:
				saque( pessoa, qtd);
				break;
			case 7:
				transferencia( pessoa,qtd);
				break;
			case 8:
				mostrarTudo( pessoa,qtd);
				break;
			case 9:
				extrato(num);
				
				switch(num) {
    			case 1:
        			extratoEmTela(pessoa, qtd);
        			system("pause");
        			break;
  			   case 2:
        			extratoEmArquivo(pessoa, qtd);
       				 break;

				}

				break;
			case 10:
				cout << "\nTchau!\n\n";

				salvarDados(pessoa,qtd,movimentacoes,contarMovimentacoes);
				break;
			
			
				
		}
		
	}while(op!= 10);//op==10-->Sair
	
	return 0;
}
void menu(int &op){
	cout<<"********************************************\n";
	cout<<"*    ARABANCO – SEMPRE COM VOCÊ =P         *\n";
	cout<<"********************************************\n\n";
	cout<<"Menu de opções: \n\n";
	cout<<"		1 - Cadastrar Conta Corrente\n";
	cout<<"		2 - Alterar dados de uma Conta Corrente\n";
	cout<<"		3 – Excluir uma Conta Corrente\n";
	cout<<"		4 – Consultar Saldo\n";
	cout<<"		5 – Fazer Depósito \n";
	cout<<"		6 – Realizar Saque	\n";
	cout<<"		7 – Transferir Valores	\n";
	cout<<"		8 – Mostrar todas as contas e saldos	\n";
	cout<<"		9 – Emitir extrato de conta	\n";
	cout<<"		10 – Sair	\n\n";	
	cout<<"Escolha uma opcao entre 1 e 10: ";
	cin>>op;
}
void extrato(int &num){
	system("cls");
	cout << "OPÇÕES DE EXTRATO: " << endl << endl;
	cout<<"1 - Extrato em Tela\n";
	cout<<"2 - Extrato em arquivo\n\n";
	cout<<"Escolha 1 ou 2: ";
	cin>>num;
}
void cadastrarConta(Conta pessoa[],int &qtd){
   	system("cls");
   	Conta c;
   	
   	cout<<"Número da conta :";
   	cin>>c.numConta;
   	cout<<"Número da agência: ";
   	cin>>c.numAgenc;
   	cout<<"Nome do titular : ";
   	cin>>c.nome;
   	cout<<"CPF do titular: ";
   	cin>>c.cpf;
   	cout<<"Saldo inicial: ";
   	cin>>c.saldo;
   	if(c.saldo<0){
   		cout<<"O saldo inicial não pode ser negativo.";
   		system("pause");
   		return;
   }
   	salvarMovimentacao((char*)"Saldo Inicial         ", qtd,MAX, (float)c.saldo, 0);
   	pessoa [qtd++]=c;
   	
   	cout<<"Conta cadastrada com sucesso\n";
   	system("pause");
}


int buscaCliente (char numC[],char numA[],Conta pessoa[],int qtd){
	for(int i=0;i<qtd;i++)
		if(strcmp(numC,pessoa[i].numConta)==0 && strcmp(numA,pessoa[i].numAgenc)==0 )
			return i;
			
	return -1;		
}
void alterarDados(Conta pessoa[],int qtd){
	system("cls");
	char numC[20],numA[20];
	int t;
	cout<<" ALTERAR DADOS DE UMA CONTA CORRENTE\n\n";
	cout<<"Número da Conta Corrente: ";
	cin>>numC;
	cout<<"\nAgência da Conta Corrente: ";
	cin>>numA;
	t= buscaCliente ( numC, numA, pessoa,qtd);
	if(t==-1){
		cout<<"\nConta não encontrada.";
		system("pause");
		return;
	}
	else{
		system("cls");
		cout<<"INFORME OS NOVOS DADOS DA CONTA CORRENTE";
		cout<<"\nNome do titular: ";
		cin>>pessoa[t].nome;
		cout<<"CPF do titular: ";
		cin>>pessoa[t].cpf;
		
	}
	cout<<"Dados alterados com sucesso.\n\n";
	system("pause");
}
void excluiConta	(Conta pessoa[],int &qtd){
	system("cls");
	char numC[20],numA[20];
	cout<<"EXCLUINDO UMA CONTA\n\n";
	cout<<"Informe o número da conta corrente que será excluída: ";
	
	cin>>numC;
	cout<<"Informe o número da agência corrente que será excluída: ";
	cin>>numA;
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	
	else{

				
		for(int i=t;i<qtd-1;i++){
				pessoa[i]= pessoa[i+1];
				contarMovimentacoes[i] = contarMovimentacoes[i+1];
			}
			
		for(int o = 0; o < MAX_CONTA; o++)
			for(int i=t;i<qtd-1;i++){
				movimentacoes[i][o] = movimentacoes[i+1][o];
	
			}
		qtd--;	
		cout<<"Conta excluida com sucesso\n\n";
	}
	system("pause");
}
void consultaSal(Conta pessoa[],int qtd){
	system("cls");
	char numC[20],numA[20];
	cout<<"Número da Conta Corrente:";
	cin>>numC;
	cout<<"Agência da Conta Corrente:";
	cin>>numA;
	system("cls");
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	cout<<"CONSULTAR SALDO \n\n";
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	else{
	    cout<<"Número da Conta: "    <<pessoa[t].numConta;
		cout<<"\nNúmero da Agência: "<<pessoa[t].numAgenc;
		cout<<"\nNome do titular: "  <<pessoa[t].nome;
		cout<<"\nCPF do titular: "   <<pessoa[t].cpf;
		cout<<"\nSaldo: "            <<pessoa[t].saldo<<endl;
		}
	system("pause");
}
void deposito(Conta pessoa[],int qtd){
	system("cls");
	cout<<"DEPÓSITO\n\n";
	char numC[20],numA[20];
	float d;
	cout<<"Número da Conta Corrente:";
	cin>>numC;
	cout<<"Agência da Conta Corrente:";
	cin>>numA;
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	else{
	    cout<<"Número da Conta: "    <<pessoa[t].numConta;
		cout<<"\nNúmero da Agência: "<<pessoa[t].numAgenc;
		cout<<"\nNome do titular: "  <<pessoa[t].nome;
		cout<<"\nCPF do titular: "   <<pessoa[t].cpf;
		cout<<"\nSaldo: "            <<pessoa[t].saldo<<endl;
		}
	cout<<"\nInforme o valor a ser depositado: ";
	cin>>d;
	if(d<0){
		cout<<"O deposito não pode ser negativo ";
		system("pause");
		return;
	}
	salvarMovimentacao((char*)"Deposito              ", t, MAX, d, pessoa[t].saldo);
	pessoa[t].saldo=d+pessoa[t].saldo;
	cout<<"Deposito realizado com sucesso.\n\n";
	system("pause");
	
	
}

void saque(Conta pessoa[],int qtd){
	system("cls");
	cout<<"REALIZAR SAQUE\n\n";
	char numC[20],numA[20];
	float d;
	cout<<"Número da Conta Corrente:";
	cin>>numC;
	cout<<"Agência da Conta Corrente:";
	cin>>numA;
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	else{
	    cout<<"Número da Conta: "    <<pessoa[t].numConta;
		cout<<"\nNúmero da Agência: "<<pessoa[t].numAgenc;
		cout<<"\nNome do titular: "  <<pessoa[t].nome;
		cout<<"\nCPF do titular: "   <<pessoa[t].cpf;
		cout<<"\nSaldo: "            <<pessoa[t].saldo<<endl;
		}
	cout<<"\nInforme o valor a ser sacado : ";
	cin>>d;
	if(d<0){
		cout<<"O valor do saque não pode ser negativo ";
		system("pause");
		return;
	}
	if(d>pessoa[t].saldo){
		cout<<"Saldo insuficiente.";
		system("pause");
		return;
	}
	salvarMovimentacao((char*)"Saque                 ", t, MAX, d * -1, pessoa[t].saldo);
	pessoa[t].saldo=pessoa[t].saldo-d;
	cout<<"Saque realizao com sucesso.\n\n";
	system("pause");
}
void transferencia(Conta pessoa[],int qtd){
	system("cls");
	cout<<"TRASNFERÊNCIA\n\n";
	char numC[20],numA[20];
	char numC2[20],numA2[20];
	cout<<"Informe os dados da conta de origem.";
	cout<<"Número da Conta Corrente: ";
	cin>>numC;
	cout<<"Agência da Conta Corrente: ";
	cin>>numA;
	
	cout<<"\n\nInforme os dados da conta de destino.";
	cout<<"Número da Conta Corrente: ";
	cin>>numC2;
	cout<<"Agência da Conta Corrente: ";
	cin>>numA2;
	
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	cout<<"\n\nCONTA DE ORIGEM.\n\n";
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return ;
	}
	else{
	    cout<<"Número da Conta: "    <<pessoa[t].numConta;
		cout<<"\nNúmero da Agência: "<<pessoa[t].numAgenc;
		cout<<"\nNome do titular: "  <<pessoa[t].nome;
		cout<<"\nCPF do titular: "   <<pessoa[t].cpf;
		cout<<"\nSaldo: "            <<pessoa[t].saldo<<endl;
		}	
	int p= buscaCliente ( numC2, numA2, pessoa,qtd);
	cout<<"\n\nCONTA DE DESTINO.	\n\n";
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	else{
	    cout<<"Número da Conta: "    <<pessoa[p].numConta;
		cout<<"\nNúmero da Agência: "<<pessoa[p].numAgenc;
		cout<<"\nNome do titular: "  <<pessoa[p].nome;
		cout<<"\nCPF do titular: "   <<pessoa[p].cpf;
		cout<<"\nSaldo: "            <<pessoa[p].saldo<<endl;
		}
	cout<<"Informe o valor a ser transferido: ";
	int v;
	cin>>v;
	if(v<0){
		cout<<"O valor de transferêcia não pode ser negativo ";
		system("pause");
		return;
	}
	if(v>pessoa[t].saldo){
		cout<<"Saldo insuficiente.";
		system("pause");
		return;
	}
	salvarMovimentacao((char*)"Transferência Recebida", p, MAX, v , pessoa[p].saldo);
	salvarMovimentacao((char*)"Transferência Enviada ", t, MAX, v * -1, pessoa[t].saldo);
	pessoa[t].saldo=pessoa[t].saldo-v;
	pessoa[p].saldo=pessoa[p].saldo+v;
	cout<<"Transferência realizada com sucesso.\n\n";
	system("pause");
}
void mostrarTudo(Conta pessoa[],int qtd){
	
	system("cls");
	for(int i=0;i<qtd;i++){
		cout<<"Número da Conta: "    <<pessoa[i].numConta;
		cout<<"\nNúmero da Agência: "<<pessoa[i].numAgenc;
		cout<<"\nNome do titular: "  <<pessoa[i].nome;
		cout<<"\nCPF do titular: "   <<pessoa[i].cpf;
		cout<<"\nSaldo: "            <<pessoa[i].saldo<<endl<<endl;	
	}
	system("pause");
}
void extrato(Conta pessoa[], int qtd) {
    system("cls");
    char numC[20], numA[20];
    
    cout << "EXTRATO DA CONTA" << endl;
    cout << "Número da Conta Corrente: ";
    cin >> numC;
    cout << "Agência da Conta Corrente: ";
    cin >> numA;

    int r = buscaCliente (numC, numA, pessoa, qtd);
    
    
    system("pause");
}
void salvarMovimentacao(char lan[], int qtd, int cont, float valor, float valor2){
	time_t t;
	time(&t);
	struct tm * infoTempo;
	infoTempo=localtime(&t);
	strftime(movimentacoes[qtd][contarMovimentacoes[qtd]].data, cont, "%d/%m/%y", infoTempo);
	strftime(movimentacoes[qtd][contarMovimentacoes[qtd]].hora, cont, "%H:%M", infoTempo);
	strcpy(movimentacoes[qtd][contarMovimentacoes[qtd]].lancamento, lan);
	movimentacoes[qtd][contarMovimentacoes[qtd]].valor = valor;
	movimentacoes[qtd][contarMovimentacoes[qtd]].saldo = valor + valor2;
	contarMovimentacoes[qtd]++;
}
void extratoEmTela(Conta pessoa[], int qtd){
	system("cls");
	time_t ta;
	time(&ta);
	struct tm * infoTempo;
	infoTempo=localtime(&ta);
	char dataehora[MAX];
	char numC[20],numA[20];
	cout << "Dados da conta que quer tirar o extrato: " << endl;
	cout<<"Número da Conta Corrente:";
	cin>>numC;
	cout<<"Agência da Conta Corrente:";
	cin>>numA;
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	system("cls");
	cout << "EXTRATO BANCARIO EM TELA\n\n";
	cout << "Nome: " << pessoa[t].nome << "\t\t\tAgência\\Conta: ";
	cout << pessoa[t].numConta << "\\" << pessoa[t].numAgenc << endl;
	
	strftime(dataehora, MAX, "%d/%m/%y", infoTempo);
	cout << "Data: " << dataehora << "\t\t\t";
	strftime(dataehora, MAX, "%H:%M", infoTempo);
	cout << "Hora: " << dataehora << endl<<endl<<endl;
	
	cout << "Histórico\n";
	int j = contarMovimentacoes[t];
	contarMovimentacoes[t] = 0;
	cout << "| Data " << "\t\t|Hora " << "\t\t| Lançamento"<<"\t\t\t| Valor (R$)" << "\t| Saldo(R$)"<< "\t|" << endl;
	for (int i = 0; i < j; i++){
		cout <<"| "<< movimentacoes[t][contarMovimentacoes[t]].data << "\t| "<< movimentacoes[t][contarMovimentacoes[t]].hora 
		<<"\t\t| " <<movimentacoes[t][contarMovimentacoes[t]].lancamento << "\t| " << movimentacoes[t][contarMovimentacoes[t]].valor
		<<"\t\t| " << movimentacoes[t][contarMovimentacoes[t]].saldo << "\t\t|\n";
		contarMovimentacoes[t]++;
	}
	contarMovimentacoes[t] = j;
}
void extratoEmArquivo(Conta pessoa[],int qtd){
	system("cls");
	cout << "EXTRATO BANCARIO EM ARQUIVO\n\n";
	char numC[20],numA[20];
	cout << "Dados da conta que quer tirar o extrato: " << endl;
	cout<<"Número da Conta Corrente:";
	cin>>numC;
	cout<<"Agência da Conta Corrente:";
	cin>>numA;
	int t= buscaCliente ( numC, numA, pessoa,qtd);
	if(t==-1){
		cout<<"Conta Corrente não encontrada.\n";
		system("pause");
		return;
	}
	system("cls");
	ofstream fout;
	fout.open("ExtratoTela.html");
	if(!fout){
		cout << "Erro ao criar o arquivo.\n";
		return;
	}
	else{
		
	time_t ta;
	time(&ta);
	struct tm * infoTempo;
	infoTempo=localtime(&ta);
	char dataehora[MAX];
		
		fout << "<!DOCTYPE html><html lang=\"pt-br\"><head><title>Extrato em Tela</title>";
		fout<<"<style>h1{text-align: center;}div{width: 100%;}.nome{display: flex;justify-content: space-around;";
		fout<<"align-items: center;}.horario{display: flex;justify-content: space-around;align-items: center;}";
		fout<<"p{font-size: 20px;margin-left: 1%;} h2{font-size: 20px;}table, th, td{padding: 2px;border: 2px solid black;";
		fout<<"border-collapse: collapse;}table {width: 60%;text-align: left;margin-left: 20%;margin-right: 20%;}";
		fout<<"tr:nth-child(odd) {background-color: rgb(170, 170, 170);}.money{text-align: right;}</style></head>";
		fout << "<body><h1> EXTRATO BANCÁRIO</h1><div class=\"nome\"><p>Nome:" << pessoa[t].nome <<" </p><p>Conta/Agência:"
		<< pessoa[t].numConta<< "/" << pessoa[t].numAgenc << "</p></div>";
		strftime(dataehora, MAX, "%d/%m/%y", infoTempo);
		fout <<"<div class=\"horario\"><p >Data:"<< dataehora << "</p><p>Hora:";
		strftime(dataehora, MAX, "%H:%M", infoTempo);
		fout <<dataehora << " </p></div><br><br><br><h2 style=\"text-align: center\">Histórico</h2>"
		<<"<div class=\"table1\"><table><tr style=\"background-color: rgb(164, 164, 164);\"><th>Data</th><th>Hora</th>"
		<<"<th style=\"width: 30%;\">Lançamento</th><th class=\"money\">Valor (R$)</th><th class=\"money\">Saldo (R$)</th></tr>";
		int j = contarMovimentacoes[t];
		contarMovimentacoes[t] = 0;
		for(int i = 0; i < j; i++){
			fout << "<tr style=";
			if(movimentacoes[t][contarMovimentacoes[t]].valor < 0){
				fout <<"color:red>";
			}
			else{
				fout << "color:green>";
			}
			fout << "<td>" << movimentacoes[t][contarMovimentacoes[t]].data << "</td>";
            fout << "<td>" << movimentacoes[t][contarMovimentacoes[t]].hora << "</td>";
            fout << "<td>" << movimentacoes[t][contarMovimentacoes[t]].lancamento << "</td>";
            fout << "<td class=\"money\">" << movimentacoes[t][contarMovimentacoes[t]].valor << "</td>";
            fout << "<td class=\"money\">" << movimentacoes[t][contarMovimentacoes[t]].saldo << "</td></tr>";
			contarMovimentacoes[t]++;	
		}
		contarMovimentacoes[t] = j;
		fout << "</table></div></body></html>";
		cout << "EXTRATO EMITIDO COM SUCESSO!\n\n";
		system("pause");
	} 
	
	fout.close();
}
void salvarDados(Conta pessoa[], int qtd, MoviConta movimentacoes[][MAX_CONTA], int contarMovimentacoes[]){
	ofstream fout;
	fout.open("Dados.bin", ios::binary);
	if(!fout){
		cout << "Erro ao criar o arquivo.\n";
		return;
	}
	fout.write((char*) pessoa, sizeof(Conta) * MAX);
	fout.write((char*) &qtd, sizeof(qtd));
	fout.write((char*) movimentacoes, sizeof(MoviConta) * MAX * MAX_CONTA);
	fout.write((char*) contarMovimentacoes, sizeof(int) * MAX);
	
	fout.close();
}
void lerDados(Conta pessoa[], int &qtd, MoviConta movimentacoes[][MAX_CONTA], int contarMovimentacoes[]){
	ifstream fin;
	fin.open("Dados.bin", ios::binary);
	if(!fin){
		cout << "Erro ao acessar o arquivo.\n";
		return;
	}
	fin.read((char*) pessoa, sizeof(Conta) * MAX);
	fin.read((char*) &qtd, sizeof(qtd));
	fin.read((char*) movimentacoes, sizeof(MoviConta) * MAX * MAX_CONTA);
	fin.read((char*) contarMovimentacoes, sizeof(int) *MAX);
	fin.close();
	
	
}

