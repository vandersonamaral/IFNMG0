#include <iostream>
using namespace std;
const int p=50;
int main() {
	int a[p],media;
	float soma;
	cout<<"Digite 50 numeros: ";
	for(int i=0;i<p;i++){
		cin>>a[i];
	}
	for(int i=0;i<p;i++){
		soma+=a[i];
	}
	media=soma/p;
	for(int i=0;i<p;i++){
		if(media<a[i])
		cout<<a[i]<<" ";
	}
	return 0;
}
