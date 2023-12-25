#include <iostream>
#include <cstdlib>
using namespace std;

/*
	Pilha dinâmica /Pilha ligada / Pilha encadeada
	/ Pilha usando estruturas de dados auto  referenciadas
*/
struct Node{
	int item;
	Node *next;
	
};

class Stack{
	private:
		
		Node *top;	//ponteiro para o topo
		int n;// quantidade de elementos
		
	public:
		Stack(){
			// Pilha vazia
			this->top=NULL;
			this->n=0;
		}
		
		~Stack(){
			while(!this->isEmpty() )
				this->pop();			
		}
	//Empilha
	void push(int item){
		Node *t=new Node;
		t->item=item;
		t->next=this->top;
		this->top=t;
		this->n++;
		
		
	}
	//Desempilha
	int pop(){
		if(!this->isEmpty() ){
			Node *t=this->top;
			this->top=t->next;
			int r=t->item;
			delete t;
			this->n--;
			return r;
		}
		else{
			cout<<"Underflow.\n";
		}
		
	}
	//Elemento do topo	
	int getTop(){
		if(!this->isEmpty())
			return this->top->item;
		else
			cout<<"Pilha vazia";
		
	}
	//Esta vazia?
	bool isEmpty(){
		return this->n==0;
	}
	//Tamanho
	int size(){
		return this->n;
	}
	
};

int main() {
	Stack a;
	a.push(10);
	a.push(20);
	a.push(30);
	a.push(40);
	a.push(50);
	
//	cout<<a.size();
	
	while(!a.isEmpty()){
		cout<<a.getTop()<<endl;
	a.pop();
	}
	return 0;
}

