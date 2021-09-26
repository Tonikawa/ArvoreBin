// Gabriel Batista Cristiano
// TIA: 32090722
// Fabio Silveira Tanikawa
// TIA: 32092563

// TESTANDO FAMILIA!!!!

#include <iostream>
#include <sstream>
#include "BST.cpp"

using namespace std; 


int main() 
{
    Node* A = new Node();
    Node* B = new Node();
    Node* C = new Node();
    Node* D = new Node();
    Node* E = new Node();
    Node* F = new Node();

    A->SetData("A");
    A->SetLeftNode(B);
    A->SetRightNode(C);
    //cout << to_string(A->GetDegree(A));
    // cout << A->GetDepth(A);
    // cout << A->GetHeight(A);
    // cout << A->IsLeaf(A);
    // cout << A->IsRoot(A);
    
    B->SetData("B");
    B->SetParentNode(A);
    B->SetLeftNode(D);
    // cout << B->GetDegree(B);
    // cout << B->GetDepth(B);
    // cout << B->GetHeight(B);
    // cout << B->IsLeaf(B);
    // cout << A->IsLeaf(A);

    C->SetData("C");
    C->SetParentNode(A);
    C->SetLeftNode(E);
    C->SetRightNode(F);

    D->SetData("D");
    D->SetParentNode(B);    

    E->SetData("E");    
    E->SetParentNode(C);

    F->SetData("F");
    F->SetParentNode(C);
    // cout << F->GetDegree(F);
    // cout << F->GetDepth(F);
    // cout << F->GetHeight(F);
    // cout << F->IsLeaf(F);
    //cout << F->IsRoot(F);  

    Tree* tree = new Tree(A); 
//if arvore vazia(false)- continua
//Percurso para arvore mostrada no documento
//Em ordem: D->B->A->E->C->F
//Pre-ordem: A->B->D->C->E->F  1-visitar nó raiz 2-percorrer a subarvore da esquerda e depois da direita em pre ordem
//Pós ordem: D->B->E->F->C->A  1-percorrer a subarvore da esquerda e depois da direita em pos ordem 2-visitar nó raiz

    cout << tree->TraverseInOrder() << "\n";
    cout << tree->TraversePostOrder() << "\n";
    cout << tree->TraversePreOrder();   

    delete tree;
    delete F;
    delete E;
    delete D;
    delete C;
    delete B;
    delete A;  
}