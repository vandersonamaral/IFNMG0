/*Escreva um programa em C++ que recebe uma data no formato dia/mes/ano e imprime o dia da semana correspondente. 
Use o algoritmo de Zeller para calcular o dia da semana. Considere que o ano tem 365 dias e que os meses tem 30 dias, exceto fevereiro que tem 28 dias. 
Nao use funcoes ou bibliotecas prontas para manipular datas.*/


#include <iostream>

using namespace std;

int main() {
	int f,b;
	float ano,dia,mes;
	cout<<"Digie o dia/mes/ano: ";
	cin>>dia>>mes>>ano;
	f=ano+dia+3*(mes-1)-1;
	if(mes<3){
		mes-=1;
	}
	if(mes>=3){
		f-=int(0.4*mes+2.3);
	}
    f+=int(ano/4)-int((ano/100+1)*0.75);
    b=f%7;
    switch(b){
		case 0:
			cout<<"DOMINGO";
			break;
		case 1:
			cout<<"SEGUNDA-FEIRA";
			break;
		case 2:
			cout<<"TERCA-FEIRA";
			break;
		case 3:
			cout<<"QUARTA-FEIRA";
			break;
		case 4:
			cout<<"QUINTA-FEIRA";
			break;
		case 5:
			cout<<"SEXTA-FEIRA";
			break;
		case 6:
			cout<<"SABADO";
			break;
		default:
			cout<<"OPCAO INVALIDA";
	}
    
	return 0;
}

