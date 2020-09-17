//implementação
#include <iostream>
#include "QX_List.h"

//construtor
List::List(){
    header = new (std::nothrow) node;
    if(header == nullptr){
        std::cout << "erro ao alocar memória!\n";
        exit(1);
    }
    std::cout << "Lista Criada!\n";

}

List::~List(){
    node* aux = header;
    while (aux->next != nullptr){
        aux = aux->next;
        delete header;//apaguei o conteúdo do header
        header = aux;
    }
    std::cout << "Lista destruida!\n";
    
}
///////////////////////////////////////////////////////////
bool List::isEmpty(){
    return header->next==nullptr;
}
void List::push(int x){
    //crio um novo nó   
    node* novo = new node;
    novo->value = x;
    //a primeira inserção
    if(isEmpty()){
        header->next =  novo; //aponto o headernext pro novo
    }else{
        node * aux = header; //crio um auxilar que está apontando para o mesmo do header
        //
        while( aux->next != nullptr){
            aux = aux->next;//andar na minha lista
        }//com isso está garantido que o aux esteja apontando para o ultimo elemento
        aux->next = novo;
    }
    std::cout <<"Elemento Adicionado!\n"; 
}

void List::print(){
    if(this->isEmpty()){
        std::cout<<"lista vazia!\n";
    }else{
        node* aux = header->next;
        std::cout <<"[ ";
        while(aux != nullptr){
            std::cout << aux->value<<", ";
            aux = aux->next;
        }std::cout << " ]\n";
    }
}

// int  List::size(){
//     return 1;
// }

void List::removeAt(int index, int i=0){
    if(isEmpty()){
        std::cout<<"lista Vazia!\n";
    }else{
       int i=0;
       node* aux = header->next;
       node* p = header;


       while(aux!=nullptr){
           //estou na posição que quero remover o elemento
            if(i==index){
                aux=aux->next;
                delete p->next; // desconectando os nós
                p->next = aux;  // reconectando
                    //ja fiz o que queria fazer
                    std::cout << "Elemento removido!\n";
                    return;
            }
            aux = aux->next;
            i++;
            p= p->next;
       }
       std::cout << "index forado range!\n";
    }
}
