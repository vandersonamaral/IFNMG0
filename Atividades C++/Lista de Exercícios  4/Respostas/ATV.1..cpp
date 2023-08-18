#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char p1[20],p2[20];
	cout<<"Digite seu nome: ";
	cin>>p2;
	strcpy (p1,"SEJA BEM-VINDO, ");
	strcat (p1,p2);
	cout<<p1<<"!";
	return 0;
}
