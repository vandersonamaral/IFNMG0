#include <iostream>
using namespace std;

const int p=50;
int main() {
	int a[p],cont=0,num=0;
	cout<<"Digite 50 numeros: ";
	for(int i=0;i<p;i++){
		cin>>a[i];
	}
	for(int i=0;i<p;i++){	
		if(a[i]%2==0){
			cont++;
		}
		else{
			num++;
		}
	}
	cout<<"Quantidade de numero impar: "<<num<<endl;
	cout<<"Quantidade de numero par: "<<cont<<endl;
	return 0;
}
