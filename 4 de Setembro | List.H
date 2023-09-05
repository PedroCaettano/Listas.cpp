// LISTAS - LABORATÓRIO DE ESTRUTURA DE DADOS
// DIA 04/09/23

// SOUNDTRACK: BLACK SABBATH - MASTER OF REALITY

// List.H

#ifdef LIST_H
class List{
    public:
    List();
    ~List();
    void Insert(int p, int x);
    void Delete(int p, int x);
    bool Full();
    bool Empty();
    int Size();
    void Clear();



    private: // Campo de protegido 
    // trabalhando com nó
    struct ListNode{
    int Entry;
    ListNode* NextNode;

    };
    typedef ListNode* ListPointer; 
    ListPointer head; 
    int count; // Contador 
    void SetPosition(int p, ListPointer &current);
};

#endif
