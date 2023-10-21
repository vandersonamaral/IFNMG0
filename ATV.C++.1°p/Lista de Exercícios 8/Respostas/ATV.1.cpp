#include <iostream>
using namespace std;
const int n=100;

int main() {
	int a[n],cont=0;
	cout<<"Digite 100 numeros: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0)
			cont++;
	}
	cout<<"A quantidade de numero par eh "<<cont;
	return 0;
}
