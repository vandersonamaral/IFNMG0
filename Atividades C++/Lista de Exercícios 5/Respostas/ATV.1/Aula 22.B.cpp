/*Aula 22 B- Fa�a um programa em C++ que solicite ao usu�rio que informe um caractere
min�sculo. O programa converter� o caractere para mai�sculo e o exibir� na tela.*/
#include <iostream>
using namespace std;
int main() {
	char a;
	cin>>a;
	a-=32;
	cout<<a;
	return 0;
}
