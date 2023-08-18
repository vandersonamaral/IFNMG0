#include <iostream>
#include <string.h>
using namespace std;
const int n=15;

int main() {
	char p[n];
	int soma=0;
	cout<<"Digite uma palavra: ";
	cin>>p;
	for(int i=0;i<strlen(p);i++){
		soma+=p[i];
	}
	cout<<soma;
	return 0;
}
