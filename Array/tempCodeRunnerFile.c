struct node* create(struct node*root,int data1){
    struct node*temp=root;
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    // new_node->left=NULL;
    // new_node->right=NULL;
    if (temp==NULL)        
    {
        temp=new_node;
        new_node->data=data1;
        new_node->left=NULL;
        new_node->right=NULL;
        return new_node;
    }
    else{
        if (data1>temp->data)
        {
            temp->right=create(temp->right,data1);
        }
        if (data1<temp->data)
        {
            temp->left=create(temp->left,data1);
        }
        if(temp->data==data1){
            printf("\nElement is present here\n");
            return temp;
        }
        
        
    }
    return temp;
    
}

void print(struct node*root){
    struct node*temp=root;
    if (root==NULL)
    {
        return ;
    }
    else{
        print(temp->left);
        printf(" %d ",temp->data);
        print(temp->right);
    }
    
}