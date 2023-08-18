#include <iostream>
using namespace std;

int main() {
	float num,maior=0;
	int i=0;
	while(i<10){
		cout<<"Digite um numero: ";
		cin>>num;
		if(num>maior)
			maior=num;
		i++;
	}
	cout<<"O maior numero e: "<<maior;
	return 0;
}
