#include <iostream>
using namespace std;

const int p=50;

int main() {
	int a[p];
	cout<<"Digite 50 numeros: ";
	for(int i=0;i<p;i++)
	cin>>a[i];
	for(int i=p-1;i>=0;i--)
	cout<<a[i]<<" ";	
	return 0;
}
