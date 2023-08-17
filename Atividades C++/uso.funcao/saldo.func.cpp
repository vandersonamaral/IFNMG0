#include <iostream>

using namespace std;
int saldo(int n,int s,int valor[]){
	int soma=s;
	int menor=s;
	for(int i=0;i<n;i++){
		soma+=valor[i];
		if(soma<menor)
			menor=soma;	
	}
	return menor;
}
int main() {
	int n,s,r;
	cin>>n>>s;
	int valor[n];
	for(int i=0;i<n;i++)
		cin>>valor[i];
		
	r=saldo(n,s,valor);
	cout<<r;
	
	return 0;
}

