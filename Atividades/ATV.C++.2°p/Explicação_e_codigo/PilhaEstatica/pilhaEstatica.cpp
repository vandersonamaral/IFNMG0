#include <iostream>

using namespace std;

const int MAX=50;

class Stack{
	private:
		int items[MAX];
		int top; 
		
	public:
		//Construtor chamado automaticamente 
		//para inicializar um objeto 
		Stack(){
			this->top=0;
		}
		
		//Destrutor: chamado automaticamente 
		//quando um objeto é desalocado.
		//Usado para desalocar recursos do objeto
		~Stack(){
		
		}
		
		void push(int item){
			
			if(this->top<MAX){
				this->items[this->top]=item;
				this->top++;
			}
			else{
				cout<<"Overflow\n";
			}	
		}
		
		int pop(){
			if(this->top>0){
				this->top--;
				return this->items[this->top];
			}

			else{
				cout<<"Underflow\n";
			}		
		}
		
		int getTop(){
			if(this->top>0){
				return this->items[this ->top-1];
			}	
		}
		int size(){
			return this->top;
		}
	
		bool isEmpty(){
			if(this->top==0)
				return true;
			else
				return false;
		}
		bool isFull(){
			if (this ->top==MAX)
				return true;
			else 
				return false;
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
