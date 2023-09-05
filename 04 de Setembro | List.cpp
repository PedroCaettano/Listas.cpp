// List.cpp

//Lendo MONSTROS, por Barry Windsor-Smith 
#include "List.H"
#include <iostream>
using namespace std;

List::List(){
count = 0;
head = NULL;


}
List::~List(){
    ListPointer q;
    while (head!=NULL){
        q = head;
        head = head->NextNode;
        delete q;
    }
    count = 0;
}

bool List::Empty(){
return count == 0;

}

bool List::Full(){
    return false;
}

void List::SetPosition(int p, ListPointer &current ){
//verificar se é posição válida
current = head; 
for (int i = 2;;i++){
    current = current -> NextNode;
}
}

void List::Insert(int p, int x){
if(p < 1 || p > count + 1){

    cout << "Posicao de insercao não valida!"<< endl;
    return;
    //abort();
}
ListPointer NewNode;
NewNode = new ListNode;
if(NewNode == NULL){
    cout << "Falha na alocacao do novo no!" << endl;
    return;
    //abort();
}

ListPointer current;
SetPosition(p-1, current);
NewNode->Entry = x;
if(p==1){
        NewNode->NextNode = head;
        head = NewNode;

}else{
NewNode -> NextNode = current -> NextNODE;
current -> NewNode = NewNode;
}
count++;

}

void List::Delete(int p, int &x){
    if (Empty()){

cout << "Lista Vazia" << endl;
return;
//abort();

    }
    if (p < 1 || p > count) {
        cout << "Posição de remoção fora dos limites " << endl;
        return;
        //abort();     
    }
    ListPointer current, q;
    SetPosition(p-1, current);
    q = current -> NextNode;
    x = q->Entry;
if(p==1){
q = head;
head = head -> NextNode;

}else{
SetPosition(p-1, current);
q = current -> NextNode;
current -> NextNode = q->NextNode;

}
x = q->Entry;
delete q;
count --;


    current-> NextNode = q->NextNode;
    delete q;

    count --;
}
