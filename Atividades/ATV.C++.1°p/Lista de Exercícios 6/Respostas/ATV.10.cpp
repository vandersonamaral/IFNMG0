#include <iostream>
using namespace std;

int main() {
	float soma,num;
	int i=1;
	while(i!=0){
		cout<<"Digite um numero: ";
		cin>>num;
		soma+=num;
		if(num==0){
			cout<< "Soma e: "<<soma;
			i=0;
	}
	
	
	}
	return 0;
}
