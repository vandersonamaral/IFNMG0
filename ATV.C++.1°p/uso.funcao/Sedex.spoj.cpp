#include <iostream>

using namespace std;
char tamCaixa(int a,int d,int b,int m){
	if(a<=d && a<=b && a<=m){
        return 'S';
    }
    else{
        return 'N';
    }
}
int main(){
    int a,d,b,m;
	char r;
    cin>>a;
    cin>>d>>b>>m;
    r=tamCaixa(a,d,b,m);
    cout<<r;
    return 0;
}
