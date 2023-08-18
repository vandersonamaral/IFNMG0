#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char cnpj[25],c[18];
	int a[14];
	cout<<"Informe o cnpj: ";
	cin>>cnpj;
	int j=0;
	for(int i=0;i<strlen(cnpj);i++){
		if(cnpj[i]>='0'&& cnpj[i]<='9'){
			c[j]=cnpj[i];
			j++;
		}
	}
	c[j]='\0';
	//identifica se o cnpj é valido
	if(j!=14){
		cout<<"CNPJ INVALIDO";
		return 0;
	}
	//convertendo char para int
	for(int i=0;i<j;i++){
		a[i] =c[i]-'0';
	}
	
	int soma1=0;
	int m = 5;
	for(int i=0;i<4;i++){
		soma1 += a[i]*m;
		m--;
	}
	m=9;
	for(int i=4;i<j-2;i++){
		soma1 += a[i]*m;
		m--;
	}
	int div1=0;
	if(soma1%11<2)
		div1=0;
	else{
		div1=11-(soma1%11);
	}
	//segundo numero
	int soma2=0;
	m=6;
	for(int i=0;i<5;i++){
		soma2 += a[i]*m;
		m--;
	}
	m=9;
	for(int i=5;i<j-1;i++){
		soma2 += a[i]*m;
		m--;
	}
	int div2=0;
	if(soma2%11<2){
		div2=0;
	}
	else{
		div2=11-(soma2%11);
	}
	if(a[12]==div1 && a[13]==div2)
		cout<<"CNPJ VALIDO";
	else
		cout<<"CNPJ INVALIDO";
	return 0;
}
