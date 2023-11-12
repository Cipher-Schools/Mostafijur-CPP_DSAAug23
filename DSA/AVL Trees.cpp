#include <bits/stdc++.h>
using namespace std;
class Node{
    
    public : 
    int data;
    int height;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
        this->height = 0;
    }
};

int height(Node* root){
    
    if(root == NULL)
    return 0;
    
    return root->height;
}

Node* rightRotate(Node* x){
    
    Node* y = x->left;
    Node* rc = y->right;
    
    //rotation
    y->right = x;
    x->left = rc;
    
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right)) + 1;
    
    return y;
    
}

Node* leftRotate(Node* x){
    
    Node* y = x->right;
    Node* lc = y->left;
    
    y->left = x;
    x->right = lc;
    
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right)) + 1;
    
    return y;
}

Node* insert(Node* root, int data){
    
    Node* n = new Node(data);
    
    if(root==NULL)
    return n;
    
    if(root->data > data){
        root->left = insert(root->left, data);
    }
    
    else if(root->data < data){
        root->right = insert(root->right, data);
    }
    
    root->height = max(height(root->left), height(root->right))+1;
    
    int balance = height(root->left) - height(root->right);
    
    // left left case
    if(balance > 1 && data < root->left->data){
        return rightRotate(root);
    }
    
    //right right case
    else if(balance < -1 && data > root->right->data){
        return leftRotate(root);
    }
    
    //left right case
    else if(balance > 1 && data > root->left->data){
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    
    // right left case
    else if(balance < -1 && data < root->right->data){
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    
    return root;
}

int balanceFactor(Node* root){
    
    return height(root->left) - height(root->right);
}
int justGreater(Node* root){
    
    if(root->left == NULL)
    return root->data;
    
    return justGreater(root->left);
}
Node* deleteNode(Node* root, int data){
    
    if(root == NULL)
    return NULL;
    
    if(root->data > data){
        root->left = deleteNode(root->left, data);
    }
    
    else if(root->data < data){
        root->right = deleteNode(root->right, data);
    }
    
    else{
        
        if(root->left == NULL)
        root = root->right;
        
        else if(root->right == NULL)
        root = root->left;
        
        else{
            int succ = justGreater(root->right);
            root->data = succ;
            root->right = deleteNode(root->right, succ);
        }
    }
    
    if(root == NULL)
    return root;
    
    root->height = 1 + max(height(root->left), height(root->right));
    
    int balance = height(root->left) - height(root->right);
    
    // LL case
    if(balance > 1 && balanceFactor(root->left) >= 0)
    return rightRotate(root);
    
    //LR case
    else if(balance > 1 && balanceFactor(root->left) < 0){
    root->left = leftRotate(root->left);
    return rightRotate(root);
    }
    
    // RR
    else if(balance < -1 && balanceFactor(root->right) < 0){
        return leftRotate(root);
    }
    
    // RL
    else if(balance < -1 && balanceFactor(root->right) >= 0){
    root->right = rightRotate(root->right);
    return leftRotate(root);
    }
    
    return root;
}
void inOrder(Node* root){
    if(root == NULL)
    return;
    
    inOrder(root->left);
    cout<<root->data<<" "<<height(root->left)-height(root->right)<<"\n";
    inOrder(root->right);
}

int main() {
  
   Node* root = NULL;
   root = insert(root, 10);
   root = insert(root, 20);
   root = insert(root, 30);
   root = insert(root, 40);
   root = insert(root, 50);
   root = insert(root, 25);
   root = deleteNode(root, 40);
   root = deleteNode(root, 10);
   
   inOrder(root);
}