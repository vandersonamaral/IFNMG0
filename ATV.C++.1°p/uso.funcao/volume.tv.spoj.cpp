#include <iostream>

using namespace std;
int volume(int v,int t,int a[]){
	int soma=v;
	for(int i=0;i<t;i++){
        soma+=a[i];
    if(soma>100)
        soma=100;
    if(soma<0)
        soma=0;
    } 
	return soma;   
}
int main(){
	int v,t,r;
    cin>>v>>t;
    int a[t];
    for(int i=0;i<t;i++)
    	cin>>a[i];
    r=volume(v,t,a);
    cout<<r;
        
    return 0;
}
