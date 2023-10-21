#include <iostream>
using namespace std;

int main() {
	int i,num,div=0;
	cout<<"Digite um numero: ";
	cin>>num;
	for(i=1;i<=num;i++)
		if(num%i==0){
		div++;}
	if(div==2)
		cout<<"E primo"<<endl;
	else
		cout<<"Nao e primo"<<endl;
	return 0;
}
