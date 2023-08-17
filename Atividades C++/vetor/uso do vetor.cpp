#include <iostream>

using namespace std;

int main() {
	int p[10];
	
	cout<<"Digite 10 numeros :";
	for(int i=0;i<10;i++){
		cin>>p[i];
	} 
	
    for(int i=9;i>=0;i--){
		cout<<p[i]<<" ";
	}
	return 0;
}
