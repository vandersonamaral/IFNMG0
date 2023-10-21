#include <iostream>
using namespace std;

int main() {
	float num,maior=0,menor=0;
	int i=0;
	while(i<10){
		cout<<"Digite um numero: ";
		cin>>num;
		if (i==0){
			maior= num;
			menor=num;
		}
		else {
		if(num>maior)
			maior=num;
		if(num<menor)
			menor=num;
		
		}
		i++;
	}
	cout<<"O maior numero e: "<<maior;
	cout<<"\nO menor numero e: "<<menor;
	return 0;
}
