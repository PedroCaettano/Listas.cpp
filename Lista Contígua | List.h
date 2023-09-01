// Aula 8 - Lista Contígua
// A prova vai até listas. - Encadeada dinâmica, Encadeada dupla, Encadeada dupla circular.

// List.h
// Estamos em uma estrutura contigua - Vamos usar um vetor que vai do valor 1 até o final da estrutura
#ifndef LIST_H
#define LIST_H


const int MaxList = 100;
class List{
public:
List();
~List();
bool Empty();
bool Full();
void Insert(int p, int x);
void Delete(int p, int &x);

void Replace(int p, int x); // Sempre lembrar dos Feiticeiros de Wavely Place
int Size();
void Clear();
void Retrieve(int p); //Sempre lembrar do cachorro | Realoca os elementos em seu devido lugar

private:
int count;
int Entry[MaxList + 1];
};
