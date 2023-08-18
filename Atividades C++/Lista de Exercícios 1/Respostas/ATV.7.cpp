#include <iostream>

using namespace std;
/*Pg=pizza grande ,Pm=pizza média, Pp=pizza pequena, R2=refrigerante
2 litros, Rl=refrigerante lata*/
int main() {
	float	Pg,Pm,Pp,R2,Rl,Vt;
	cout<<"Pizza grande= ";
	cin>>Pg;
	cout<<"Pizza media= ";
	cin>>Pm;
	cout<<"Pizza pequena= ";
	cin>>Pp;
	cout<<"Refrigerante 2 litros= ";
	cin>>R2;
	cout<<"Refrigerante lata= ";
	cin>>Rl;
	Vt=Pg*30.00+Pm*23.00,Pp*18.00+R2*6.50+Rl*3,50;
	cout<<"valor a pagar= "<<Vt;
	return 0;
}
