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
void printPreorder(struct node* node){
    if(node==NULL)
    return;
    cout<<node->data<<" ";
    printPreorder(node->left);
    printPreorder(node->right);

}
int main(){
    struct node *root = new node(1); 
    root->left = new node(2); 
    root->right = new node(3); 
    root->left->left = new node(4); 
    root->left->right = new node(5);
    cout<<"PREORDER TRAVERSAL:\n";
    printPreorder(root);
    return 0;
}