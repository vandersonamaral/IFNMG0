#include <iostream>
using namespace std;
//A=area,r=raio,D=diametro,p=perimetro
int main() {
	float A,r,D,p;
	cout<<"Diametro da cicunferencia:";
	cin>>D;
	r=D/2;
	A=3.14*r*r;
	cout<<"area e: "<<A;
	p=2*3.14*r;
	cout<<"\nperimetro : "<<p;
	return 0;
}
