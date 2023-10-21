#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char a;
	cout<<"Digite um caractere: ";
	cin>>a;
	if (a>='A' && a<='Z' )
		cout<<"CARACTERE ALFABETICO MAIUSCULO";
	else
	if(a>='a' && a<='z')
		cout<<"CARACTERE ALFABETICO MINUSCULO";
	else
	if(a>='0' && a<='9')
		cout<<"CARACTERE NUMERICO";
	else
		cout<<"OUTROS CARACTERES";
	
	return 0;
}
