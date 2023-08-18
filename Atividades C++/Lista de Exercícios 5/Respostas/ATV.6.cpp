#include <iostream>
using namespace std;
int main() {
	int angulo1,angulo2,angulo3;
	cout<<"Digite o angulo do triangulo: ";
	cin>>angulo1>>angulo2>>angulo3;
	if (angulo1==90||angulo2==90||angulo3==90)
		cout<<"Triangulo Retangulo";
	else if(angulo1>90||angulo2>90||angulo3>90)
		cout<<"Triangulo Obtusangulo";
	else
		cout<<"Triangulo Acutangulo";
	
	return 0;
}
