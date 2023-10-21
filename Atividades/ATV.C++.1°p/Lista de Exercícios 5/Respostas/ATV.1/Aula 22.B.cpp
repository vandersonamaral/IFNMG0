/*Aula 22 B- Faça um programa em C++ que solicite ao usuário que informe um caractere
minúsculo. O programa converterá o caractere para maiúsculo e o exibirá na tela.*/
#include <iostream>
using namespace std;
int main() {
	char a;
	cin>>a;
	a-=32;
	cout<<a;
	return 0;
}
