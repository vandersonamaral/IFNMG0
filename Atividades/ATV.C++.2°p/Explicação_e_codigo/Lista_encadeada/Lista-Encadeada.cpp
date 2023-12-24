#include <iostream>

using namespace std;
int cont = 0;

struct Celula {
    int dado;
    Celula *p;
};

void construtor(Celula *&c) {
    c = NULL;
}

void insere(int valor, Celula *&c) {
    Celula *novo = new Celula;
    novo->dado = valor;
    novo->p = NULL;
    if (c == NULL) {
        c = novo;
    } else {
        Celula *aux = c;
        while (aux->p != NULL) {
            aux = aux->p;
        }
        aux->p = novo;
    }
    cont++;
}

void imprimir(const Celula *c) {
    if (c == NULL) {
        cout << "Lista vazia." << endl;
    } else {
        while (c != NULL) {
            cout << c->dado << "  ";
            c = c->p;
        }
        cout << endl;
    }
}

void remover(Celula *&c) {
    if (c == NULL) {
        cout << "Lista vazia" << endl;
    } else {
        Celula *aux = c;
        c = c->p;
        delete aux;
        cont--;
    }
}

int busca(int valor, const Celula *c) {
    if (c == NULL) {
        cout << "Lista vazia." << endl;
    } 
	else {
        const Celula *aux = c;
        while (aux != NULL) {
            if (aux->dado == valor)
                return 1;
            aux = aux->p;
        }
    }
    return 0;
}

void quantidade() {
    cout << "Quantidade de elementos " << cont << endl;
}

void menu(int &op) {
    cout << "MENU DE OPÇÃO\n\n";
    cout << "1_ Inserir dado." << endl;
    cout << "2_ Imprimir." << endl;
    cout << "3_ Remover dado." << endl;
    cout << "4_ Busca." << endl;
    cout << "5_ Quantidade de elementos." << endl;
    cout << "6_ Sair." << endl;
    cout << "\n\nEscolha uma opção:";
    cin >> op;
}

int main() {
    int op, n, r;
    Celula *primeiro;
    construtor(primeiro);
	setlocale(LC_ALL,"portuguese");
    do {
        system("cls");
        menu(op);

        switch (op) {
        case 1:
            cout << "Informe um número  ";
            cin >> n;
            insere(n, primeiro);
            system("pause");
            break;

        case 2:
            imprimir(primeiro);
            system("pause");
            break;

        case 3:
            remover(primeiro);
            system("pause");
            break;

        case 4:
            cout << "Informe o número a ser buscado: ";
            cin >> n;
            r = busca(n, primeiro);
            cout << r << endl;
            system("pause");
            break;

        case 5:
            quantidade();
            system("pause");
            break;

        case 6:
            cout << "\nTchau!\n\n";
            system("pause");
            break;
        }
    } while (op != 6);

    
    while (primeiro != NULL) {
        Celula *temp = primeiro;
        primeiro = primeiro->p;
        delete temp;
    }

    return 0;
}

