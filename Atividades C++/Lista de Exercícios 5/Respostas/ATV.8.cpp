#include <iostream>
#include <string.h>
using namespace std;
const int N=21;
int main() {
	char placa[N];
	int x;
	cout<<"Digite a placa do veiculo:";
	cin>>placa;
	x=strlen(placa);
	if ( x==8 &&
	placa[0]>='A'&& placa[0]<='Z'&&
	placa[1]>='A'&& placa[1]<='Z'&&
	placa[2]>='A'&& placa[2]<='Z'&&
	placa[3]=='-'&&
	placa[4]>='0'&& placa[4]<='9'&&
	placa[5]>='0'&& placa[5]<='9'&&
	placa[6]>='0'&& placa[6]<='9'&&
	placa[7]>='0'&& placa[7]<='9'
	){
		cout<<"PLACA PADRAO ANTIGO";
	}
	else{
	if ( x==7 &&
	placa[0]>='A'&& placa[0]<='Z'&&
	placa[1]>='A'&& placa[1]<='Z'&&
	placa[2]>='A'&& placa[2]<='Z'&&
	placa[3]>='0'&& placa[3]<='9'&&
	placa[4]>='A'&& placa[4]<='Z'&&
	placa[5]>='0'&& placa[5]<='9'&&
	placa[6]>='0'&& placa[6]<='9'
	){
		cout<<"PLACA PADRAO MERCOSSUL CARRO";
	}
	else{
	if( x==7 &&
	placa[0]>='A'&& placa[0]<='Z'&&
	placa[1]>='A'&& placa[1]<='Z'&&
	placa[2]>='A'&& placa[2]<='Z'&&
	placa[3]>='0'&& placa[3]<='9'&&
	placa[4]>='0'&& placa[4]<='9'&&
	placa[5]>='A'&& placa[5]<='Z'&&
	placa[6]>='0'&& placa[6]<='9'
	){
		cout<<"PLACA DO PADRAO MERCOSSUL MOTO";
	}
	else
		cout<<"PLACA INVALIDA";
	
	}
	}
	return 0;
}
