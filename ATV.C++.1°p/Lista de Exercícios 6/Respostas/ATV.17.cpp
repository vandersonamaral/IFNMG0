#include <iostream>
using namespace std;

int main() {
	int div=0,qprimo=0;
	for(int p=1;qprimo<1000;p++){
		div=0;
		for(int i=p;i>=1;i--){
			if(p%i==0)
			div++;
	}
	if(div==2){
		cout<<p<<" ";
		qprimo++;
	}
	}
	return 0;
}
