#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* CreateNode(int data)
{
    struct  Node* p = (struct Node*)malloc(sizeof(struct Node));
    p ->  data = data;
    p -> left = NULL;
    p -> right = NULL;
    return p;
};

void  preOrder(struct Node* root){
    if(root != NULL){
        printf("%d ", root->data);
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

void  inOrder(struct Node* root){
    if(root != NULL){
        inOrder(root -> left);
        printf("%d ", root->data);
        inOrder(root -> right);
    }
}

void  postOrder(struct Node* root){
    if(root != NULL){
        postOrder(root -> left);
        postOrder(root -> right);
        printf("%d ", root->data);
    }
}
int main() {
    struct Node* p = CreateNode(4);
    struct Node* p1 = CreateNode(1);
    struct Node* p2 = CreateNode(6);
    struct Node* p3 = CreateNode(5);
    struct Node* p4 = CreateNode(2);

    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;

    printf("Preorder is: ");
    preOrder(p);
    printf("\n");
    printf("Inorder is: ");
    inOrder(p);
    printf("\n");
    printf("Postorder is: ");
    postOrder(p);
    
    return 0;
}