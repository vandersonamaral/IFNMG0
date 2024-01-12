#include <iostream>

using namespace std;

struct Node{
	int item;
	Node *next;
};

class Queue{
	private:
		Node *head=NULL;
		Node *tail;
		int n;
		
	public:
		//Construtor
		Queue(){
			this->head=NULL;
			this->tail=NULL;
			this ->n=0;
		
		}
		//Destrutor
		~Queue(){
			/*
			while(!this->isEmpty() )
				this->dequeue();
			*/
			Node *t;
			
			while(this->head!=NULL){
				t=this->head;
				this->head=this->head->next;
				delete t;
			}
		}
	
		//Enfilerar	
		void enqueue(int item){
			Node *t=new Node;
			t->item=item;
			t->next=NULL;
			
			if(this->isEmpty()){
				this->head=t;
				this->tail=t;
			
			}
			else{
				this->tail->next=t;
				this->tail=t;
			}
			this->n++;
	
		}
		
		//Desenfilerar	
		int dequeue(){
			if(this ->isEmpty()){
				cout<<"Fila vazia.\n";
			}
		
			else{//Possui 1 ou mais elementos
				int r=this->head->item;
				
				if(this->size()==1){
					delete this->head;
					this->head=this->tail=NULL;
				
				}
				else{//mais de um elemento
					Node *t=this->head;
					this->head=this->head->next;
					delete t;
					
				}
				this->n--;
				return r;
			}
		}
	
		//Retornar o primeiro elemento
		int first(){
			if(!this->isEmpty())
			return this->head->item;
		}
		
		//Tamanho
		int size(){
			return this->n;
		}
		
		//Está vazia?
		bool isEmpty(){
			return this->n==0;
		}
};
int main() {
	
	return 0;
}

