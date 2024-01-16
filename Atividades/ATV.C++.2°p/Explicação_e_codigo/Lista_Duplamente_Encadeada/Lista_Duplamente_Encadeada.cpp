#include <iostream>

using namespace std;

struct ListaE{
	int dado;
	ListaE *prox;
	ListaE *ant;
};

void construtor(ListaE *&no){
	no=NULL;	
}


void inserir(int valor,ListaE *&no){
	
	ListaE *novo=new ListaE;
	novo->ant=NULL;
	novo->prox=NULL;
	novo->dado=valor;
	
	if(no == NULL){
		no=novo;
	}
	else{
		ListaE *aux=no;
		while(aux->prox!=NULL){
			aux=aux->prox;
		}
		aux->prox=novo;
		novo->ant=aux;
	}
}
void imprimir(const ListaE *no){
	if(no==NULL){
		cout<<"Lista Vazia."<<endl;
		
	}
	else {
		while(no!=NULL){
			cout<<no->dado<<" ";
			no=no->prox;
		}
		cout<<endl;
	}
}
void excluir(ListaE *&no){
	if(no==NULL){
		cout<<"Lista Vazia"<<endl;
	}
	else{
		ListaE *aux =no;
		no=aux->prox;
		no->ant=NULL;
		delete aux;
			
	}
}
void mostraElemeto(ListaE *no){
	if(no==NULL){
		cout<<"Lista Vazia"<<endl;
	}
	else{
		cout<<"Elemento atual: "<<no->dado<<endl;
		if(no->prox!=NULL){
			cout<<"Elemento proximo: "<<no->prox->dado<<endl;
		}
		else{
			cout<<"Nao ha elemento proximo"<<endl;
		}
		if(no->ant!=NULL){
			cout<<"Elemento anterior: "<<no->ant->dado<<endl;
		}
		else{
			cout<<"Nao ha elemento anterior"<<endl;
		}
	}
}


void busca(ListaE *no){
	ListaE *aux = no; 
	if(no==NULL){
		cout<<"Lista Vazia.";
		
	}
	int x;
	cin>>x;
	while(aux!=NULL){ 
	
		if(x==aux->dado){ 
			ListaE *m=aux; 
			if(m->ant!=NULL) 
				m->ant->prox = m->prox;
			if(m->prox!=NULL) 
				m->prox->ant = m->ant; 
			delete m; 
			break; 
		}
		aux = aux->prox; 
	}
}
int main() {
	ListaE *celula;
	int n;
	construtor (celula);
	for(int i=0;i<5;i++){
		cin>>n;
		inserir(n,celula);
	}	
	excluir(celula);
	imprimir(celula);
	mostraElemeto(celula);
	busca(celula);
	imprimir(celula);
	
	return 0;
}

