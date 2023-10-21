#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char a;
	cout<<"digite um caractere: ";
		cin>>a;
	if (a>='A' && a<='Z' ){
		cout<<"O caractere e maiusculo";
	}
	else{
		cout<<"O caractere e minusculo";
	}
	return 0;
}
