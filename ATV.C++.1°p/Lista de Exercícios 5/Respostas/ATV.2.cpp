#include <iostream>
using namespace std;
int main() {
	int nota;
	cout<<"Digite a nota do aluno: ";
	cin>>nota;
	if(nota>=60 && nota<=100){
		cout<<"APTO";
	}
	if(nota<=59 && nota>=0){
		cout<<"EM CONSTRUNCAO";
	}
	if (nota>100 || nota<0){
		cout<<"NOTA INVALIDA";
	}
	return 0;
}
