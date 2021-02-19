#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* left,*right;
    node(int data){
        this->data=data;
        left=right=NULL;
    }
    
};
void printPostorder(struct node* node){
    if(node==NULL)
    return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout<<node->data<<" ";
}
int main(){
    struct node *root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4); 
    root->left->right = new node(5);
    cout<<"POSTORDER TRAVERSAL:\n";
    printPostorder(root);
    return 0;
}