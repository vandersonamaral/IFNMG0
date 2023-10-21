#include <iostream>
using namespace std;
int main() {
	int f,b;
	float ano,dia,mes;
	
	cout<<"Digie o dia/mes/ano";
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
