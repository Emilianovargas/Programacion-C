#include<iostream>
#include<stdio.h>

using namespace std;

struct NodeT{
    int x;
    NodeT *parent;
    NodeT *left_child;
    NodeT *rigth_child;
};

NodeT *CreateNodeT(int elem);
bool InsertNodeT(NodeT *root, int elem);
void InOrder(NodeT *root);

int main(){
    bool ok;

    NodeT *root = CreateNodeT(9);
cout << InsertNodeT(root, 8) << endl;
cout << InsertNodeT(root, 9) << endl;
cout << InsertNodeT(root, 3) << endl;
cout << InsertNodeT(root, 10) << endl;
cout << InsertNodeT(root, 2) << endl;
cout << InsertNodeT(root, 7) << endl;
cout << InsertNodeT(root, 12) << endl;
cout<<root->left_child->left_child->rigth_child->x<<endl;
InOrder(root);
    return 0;
}

NodeT *CreateNodeT(int elem){
    NodeT *newnode = NULL;
    newnode = new NodeT[1];
    if (newnode == NULL){ return NULL;}
    newnode->x = elem;
    newnode->parent = NULL;
    newnode->left_child = NULL;
    newnode->rigth_child = NULL;
    return newnode;
}

void InOrder(NodeT *root){
   if (root == NULL){return;}
   //cout << root->x << "\t"; // N   //Preorder
   InOrder(root->left_child); // I
  // cout << root->x << "\t"; // N  //Modo Inorder
   InOrder(root->rigth_child);// D
  // cout << root->x << "\t"; // N   //Modo posorder
   return;
}

bool InsertNodeT(NodeT *root, int elem){
    NodeT *newnode;
    if (elem < root->x ){ //lado izquierdo
       if (root->left_child == NULL){
          newnode = CreateNodeT(elem); 
          if (newnode == NULL) { return false;}
          root->left_child = newnode;
          newnode->parent = root;
          return true;
       }
       // llamada recursiva
       return InsertNodeT(root->left_child,elem);
    }
    else{ // lado derecho
        if (root->rigth_child == NULL){
          newnode = CreateNodeT(elem); 
          if (newnode == NULL) { return false;}
          root->rigth_child = newnode;
          newnode->parent = root;
          return true;
       }
       return InsertNodeT(root->rigth_child,elem);
    }

}