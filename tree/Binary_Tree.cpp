#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* GetnewNode(int data){
    Node* newNode = new Node();
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
Node* insert(Node* root,int data){
    if(root==nullptr){
        root=GetnewNode(data);
        return root;
    }else if(root->data<data){
        root->right=insert(root->right,data);
    }else{
        root->left=insert(root->left,data);
    }
    return root;
}
Node* FindMin(Node* root){
    if(!root){ cout<<"empty tree";return NULL;}
    if(root->left)FindMin(root->left);
    return root;
}
Node* Delete(Node* root,int data){
    if(!root){ cout<<"No such data";return root;}
    if(data>root->data){
        root->right=Delete(root->right,data);
    }else if(data<root->data){
        root->left=Delete(root->left,data);
    }else{
        if(root->left==NULL&&root->right==NULL){//leaf
            delete root;
            root=NULL;
            return root;
        }
        else if(root->left==NULL){
            struct Node* temp = root;
            root = root->right;
            delete temp;
            return root;
        }
        else if(root->right==NULL){
            struct Node* temp = root;
            root = root->left;
            delete temp;
            return root;
        }else{
            struct Node* temp = FindMin(root->right);
            root-> data = temp ->data;
            root ->right =Delete(root->right,root->data);
        }
        return root;
    }
}
void printInorder(Node* root){
    if(!root){ cout<<"empty tree";return;}
    if(root->left){
        printInorder(root -> left);
    }
    cout<<root->data<<" ";
    if(root->right){
         printInorder(root -> right);
    }    
}
void printLevelorder(Node* root){
    if(!root){cout<<"empty tree";return;}
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty()){
        cout<<Q.front()->data<<" ";
        if(Q.front()->left){
            Q.push(Q.front()->left);
        }
        if(Q.front()->right){
            Q.push(Q.front()->right);
        }
        Q.pop();
    }
}
int main(){
   Node* rootptr = NULL;
   rootptr = insert(rootptr,10);
   rootptr = insert(rootptr,20);
   rootptr = insert(rootptr,50);
   rootptr = insert(rootptr,30);
   rootptr = insert(rootptr,15);
   rootptr = insert(rootptr,60);
   rootptr = insert(rootptr,5);
   cout<<"Level order: ";
   printLevelorder(rootptr);
   cout<<endl;
   cout<<"Inorder order: ";
   printInorder(rootptr);
   cout<<endl;
   rootptr=Delete(rootptr,5);
   rootptr=Delete(rootptr,75);
   cout<<endl;
   cout<<"Min:"<<FindMin(rootptr)->data;
   cout<<endl;
   cout<<"Level order: ";
   printLevelorder(rootptr);
}