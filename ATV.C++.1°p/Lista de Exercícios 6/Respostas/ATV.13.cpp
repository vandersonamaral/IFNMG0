#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char n[21];
	int i;
	cout<<"Digite um nome: ";
	cin>>n;
	i=strlen(n)-1;
	while(i>=0){
		cout<<n[i];
		i--;
	}
	return 0;
}
