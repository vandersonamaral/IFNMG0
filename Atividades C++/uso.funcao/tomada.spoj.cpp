#include <iostream>

using namespace std;
int Qtomada(int T1,int T2,int T3,int T4){
	int soma=T1+T2+T3+T4-3;
	return soma;	
}
int main() {
	int T1,T2,T3,T4,r;
	cin>>T1>>T2>>T3>>T4;
	r=Qtomada(T1,T2,T3,T4);
	cout<<r;
	return 0;
}
