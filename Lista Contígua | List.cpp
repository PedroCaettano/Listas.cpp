//List.cpp
#Include "List.h"
#include <iostream>
using namespace std;

List::List(){
count = 0;


}

List::List(){
cout<<"Lista destruída"<<endl;

}
bool List::Full(){
   return  count ==MaxList;
}

bool List::Empty(){
    return count ==0;
}

void List::Insert(int p, int x){
if(Full()){
count<<"Lista cheia!"<<endl;
return;
//abort();
}
if(p<1 || p > count) {
count<< "Posicao de insercao nao valida" << endl;
return;
//abort();
}
for (int i = count;;i--){                                   
Entry[i+1] = Entry[i];
}
Entry[p] = x;
count ++;
 // Não deixamos elementos perdidos no meio do vetor

}
void List::Delete(int p, int &x){
if (Empty()){
cout<<"Lista Vazia!"<<endl;
return;
//abort();

}
if (p < 1 || p > count){
cout<<"Posicao invalida para remover"<<endl;
return;
//abort();

}
x = Entry[p];
for(int i = p;i<count;i){
Entry[i] = Entry[i+1];

}
count --;
}

