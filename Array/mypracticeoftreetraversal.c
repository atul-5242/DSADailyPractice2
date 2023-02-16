
#include<limits.h>
#include <stdio.h>
#include <stdlib.h>


struct tree{
    int data;
    struct tree *left, *right;
};


int height(struct tree *root)
{
    int left, right;
    struct tree*temp=root;
    if(root==NULL)
    {
        return 0;
    }
    left = height(temp->left);
    right = height(temp->right);

    if(left>right)
    {
        return(left+1);
    }
    else
    return(right+1);
}

struct tree *create(struct tree *root,int data)
{
    if(root==NULL)
    {
        struct tree *newnode = (struct tree*)malloc(sizeof(struct tree));
        if(newnode!=NULL)
        {
            newnode->data = data;
            newnode->left = NULL;
            newnode->right = NULL;
        }
        return newnode;
    }
    if(data==root->data)
    {
        printf("\nElement is already present");
        return root;
    }
    else if(data<root->data)
    {
        root->left = create(root->left,data);
    }
    else{
        root->right = create(root->right,data);
    }

    return root;
}
 

int isBSTUtil(struct tree* node, int min, int max)
{
    if (node == NULL)
        return 1;
    if (node->data < min || node->data > max)
        return 0;
 
    return isBSTUtil(node->left, min, node->data - 1);
        
    return isBSTUtil(node->right, node->data + 1,max);
}

int isBST(struct tree* node)
{
    return (isBSTUtil(node, INT_MIN,INT_MAX));
}

// int leaf(struct node*root){
//     // int cnt=0;
//     struct node*temp=root;
//     if(temp==NULL){
//         return 0;
//     }
//     if (temp->left==NULL && temp->right==NULL)
//     {
//         return 1;
//     }
//     else{
//         return (leaf(temp->left)+leaf(temp->right));
//     }
    
// }


// void print(struct node*root){
//     struct node*temp=root;
//     if (root==NULL)
//     {
//         return ;
//     }
//     else{
//         print(temp->left);
//         printf(" %d ",temp->data);
//         print(temp->right);
//     }
    
// }






int main(){
    int choice=0,data1=0,cnt=0;
    struct node*root=NULL;
    while(choice!=-1){
        printf("\nEnter the choice:\n");
        scanf("%d",&choice);
        if(choice==1){
            printf("\nEnter the data\n");
            scanf("%d",&data1);
            root=create(root,data1);
            cnt++;
        }
        
        if (choice==2)
        {
            if(cnt==0){
                printf("\nTree is Empty");
            }
            else{
                print(root);
            }
        }
        if (choice==3)
        {
            // printf("%d",isBST(root));
            // Function call
    // isBSTUtil(root,);
    //     printf("Is BST");
    // else
    //     printf("Not a BST");
        }
        if (choice==4)
        {
            height(root);
        }
        if(choice==5){
            if (isBST(root))
        printf("Is BST\n");
    else
        printf("Not a BST");
        }
        
        
        

    }

}