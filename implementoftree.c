#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*left;
struct node*right;

};

typedef struct node* Node;
Node createtree();           // prototype
void Inoder(Node);
void preorder(Node);
void postorder(Node);
int countnodes(Node);


int main(){

Node root=createtree();
printf("Inoder tranversal-->");
Inoder(root);
printf("preorder tranversal-->");
preorder(root);
printf("postorder tranversal-->");
postorder(root);
printf("count the nodes in tree ");
printf("%d ",countnodes(root));
  
 return 0;
}

Node createtree(){
    Node root =NULL;
    int data;
    printf("enter the data:");
    scanf("%d",&data);
    if(data==-1) return NULL;
    root=(Node)malloc(sizeof(struct node));
    root->data=data;
    printf("enter the left for %d ",data);
    root->left=createtree();
    printf("enter the right for %d ",data);
    root->right=createtree();

    return root;
}
void Inoder(Node root){

if(root==NULL) return ;
Inoder(root->left);
printf("%d ",root->data);
Inoder(root->right);

}
void preorder(Node root){
    if(root==NULL) return ;
    printf("%d ",root->data);
    preorder(root->left);
   preorder(root->right);
}
void postorder(Node root){
    if(root==NULL) return ;
    postorder(root->left);
    postorder(root->right);
     printf("%d ",root->data);
}
int countnodes(Node t){
    if(t!=NULL){
        int lh=countnodes(t->left);
        int rh=countnodes(t->right);
        return (1+lh+rh);
    }else{
        return 0;
    }
}