#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char palavra1[20],p2[20];
	int resultado;
	cout<<"Digite a primeira palavra: ";
	cin>>palavra1;
	cout<<"Digite a segunda palavra: ";
	cin>>p2;
	resultado=strcmp(palavra1,p2);
	if (resultado>0){
		cout<<p2 <<endl;
		cout<<palavra1;
	}
	else if (resultado<0){
		cout<<palavra1<<endl;
		cout<<p2;
	}
	else{
		cout<<"Sao iguais as palavras";
	}
	return 0;
}
