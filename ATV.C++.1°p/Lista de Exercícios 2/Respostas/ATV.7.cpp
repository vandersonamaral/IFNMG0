#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float distancia,Xa,Xb,Ya,Yb;
	cout<<"digite o valor da coordenadas do ponto A (x,y): ";
	cin>>Xa>>Ya;
	cout<<"digite o valor da coordenadas do ponto B (x,y): ";
	cin>>Xb>>Yb;
	distancia=sqrt(pow(Xb-Xa,2)+pow(Yb-Ya,2));
	cout<<"A distancia entre os pontos A e B e: "<<distancia<<endl;
	return 0;
}
