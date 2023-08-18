#include <iostream>
using namespace std;

int main() {
	float soma=0,b=200,i=1;
	while(i<=100){
		soma+=i/b;
		i+=1;
		b-=2;
	}
	cout<<soma;
	return 0;
}
