#include<iostream>
#include "QX_List.h"
using namespace std;

//como compilar no terminal do linux

//->  g++ main.cpp QX_List.cpp -o exe

int main(){
  
    List L;
    cout<< "vazia? "<<L.isEmpty()<<"\n";
    L.push(1);
    L.push(7);
    L.push(5);
    L.push(9);
    L.push(4);
    cout<< "vazia? "<<L.isEmpty()<<"\n";
    L.print();
    int i;
    cout << "Index: ";
    cin >> i ;
    L.removeAt(i);
    L.print();

}

