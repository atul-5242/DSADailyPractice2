#include <stdio.h>
#include <stdlib.h>

struct tree{
    int data;
    struct tree *left, *right;
};


struct tree* insertion(struct tree *root,int data)
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
    if(data<root->data)
    {
        root->left = insertion(root->left,data);
    }
    else{
        root->right = insertion(root->right,data);
    }
    return root;
}

void create(struct tree **root)
{
    int choice=1;
    int data;
    while(choice==1){
        
        printf("\nEnter the element: ");
        scanf("%d",&data);
        *root = insertion(*root,data);
        printf("\nFor Enter the Element choice 1 or for exit choice 0: ");
        scanf("%d",&choice);
    }
}

void Search(struct tree *root,int key)
{
    if(root==NULL)
    {
        printf("Element is not present in tree\n");
        return ;
    }
    if(key==root->data)
    {
        printf("Element is present in tree\n");
        return ;
    } 
    else if(key<root->data)
    {
        Search(root->left,key);
    }
    else{
        Search(root->right,key);
    }
}

struct tree* minValueNode(struct tree* root)
{
    struct tree* current = root;

    while (current && current->left != NULL)
        current = current->left ;
    return current;
}

struct tree* delete(struct tree *root, int data)
{
     if (root == NULL)
        return root;
 
    
    if (data < root->data)
        root->left = delete(root->left, data);
 
    
    else if (data > root->data)
        root->right = delete(root->right, data);
 
    
    else {
        if (root->left == NULL && root->right == NULL)
            return NULL;
        else if (root->left == NULL) {
            struct tree* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct tree* temp = root->left;
            free(root);
            return temp;
        }
 
        struct tree* temp = minValueNode(root->right);
 
        root->data = temp->data;
 
        root->right = delete(root->right, temp->data);
    }
    return root;
}

int leaf(struct tree *root)
{
    if(root == NULL)     
        return 0; 
    if(root->left == NULL && root->right == NULL) 
        return 1;         
    else
        return (leaf(root->left)+ leaf(root->right));
}

int height(struct tree *root)
{
    int left, right;
    if(root==NULL)
    {
        return -1;
    }
    left = height(root->left);
    right = height(root->right);
    
    if(left>right)
    {
        return(left+1);
    }
    else
    return(right+1);
}



int RHS(struct tree  *root)
{
    if(root == NULL)
        return 0;
    return (1 + RHS(root->left) + RHS(root->right));
}
int LHS(struct tree  *root)
{
    if(root == NULL)
        return 0;
 
    int left = LHS(root->left);
    int right = LHS(root->right);
 
    return (1 + left + right);
}

void display(struct tree* root)
{
    if(root==NULL)
    {
        return ;
    }
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}







int main()
{
    struct tree *root = NULL;
    struct tree *temp = NULL;

    create(&root);
        
    printf("Element in Binary search tree: ");
    display(root);
    printf("\n");
    while(1)
    {
        printf("\nChoice the task: ");
        printf("\n1-Search a particular key. ");
        printf("\n2-Delete a node from the tree. ");
        printf("\n3-Total number of leaf nodes. ");
        printf("\n4-Height of a binary search tree. ");
        printf("\n5-Total numbers of nodes from right hand side of root node.");
        printf("\n7-Total numbers of nodes from Left hand side of root node.");
        printf("\n6-Exit. ");
        int choice;
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        int data;
        int n;
        switch(choice)
        {
            case 1:
                    printf("\nEnter the element to be search: ");
                    scanf("%d",&data);
                    Search(root,data);
                    break;
            case 2:
                    printf("\nEnter the element to be delete: ");
                    scanf("%d",&data);
                    temp = delete(root,data);
                    break;
            case 3:
                    n = leaf(root);
                    printf("\nTotal Number of leaf node: %d\n",n);
                    break;
            case 4:
                    n = height(root);
                    printf("\nHeight of binary tree: %d\n",n);
                    break;
            case 5:
                    n = RHS(root->right);
                    printf("\nTotal numbers of nodes from right hand side of root node: %d\n",n);
                    break;
            case 7:
                    min(root);
                    // n = LHS(root->left);
                    // printf("\nTotal numbers of nodes from Left hand side of root node: %d\n",n);
                    // break;
            case 6:
                    // exit(0);

            default:
                    printf("\nInvalid choice.");
        }

    }
    return 0;
}
