#include <iostream>
using namespace std;

int main() {
	float n,soma;
	int i=0;
	while(i<10){
		cout<<"Digite um numero:";
		cin>>n;
		soma+=n;
		i++;
	}
	cout<<"A soma e: "<<soma;
	cout<<"\nA media e: "<<soma/10;
	return 0;
}
