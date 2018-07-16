#include<stdio.h>
#include<conio.h>
#include<stdio.h>
struct bst
{
	struct bst *left;
	int info;
	struct bst *right;
};
void insert_bst(struct bst **);
void main()
{
	struct bst *root=NULL;
	int i,n;
	while(1)
	{
	insert_bst(&root);
	}
	getch();
}
void insert_bst(struct bst **root)
{
	struct bst *par=NULL,*ptr,*temp;
	int item;
	ptr=*root;
	printf("Enter node\n");
	scanf("%d",&item);
	while(ptr!=NULL)
	{
		if(item==ptr->info)
		{
			printf("Node already\n");
			return;
		}
		else if(item>ptr->info)
		{
			printf("moving right\n");
			par=ptr;
			ptr=ptr->right;
		}
		else
		{
			printf("moving left\n");
			par=ptr;
			ptr=ptr->left;
		}
	}
	temp=malloc(sizeof(struct bst));
	if(temp==NULL)
	{
		printf("Overflow\n");
		return;
	}
	temp->info=item;
	temp->left=NULL;
	temp->right=NULL;
	if(*root==NULL)
	{
		printf("Root node created\n");
		*root=temp;
	}
	else if(item>par->info)
	{
		printf("node created as right\n");
	}
	else
	printf("node created as left\n");
ptr=item;
}

void delete_bst(struct bst **root)
{
	struct bst *ptr,*par,*suc,*parsuc;
	int item;
	if(root==NULL)
	{
		printf("underflow\n");
		return;
	}
	ptr=root;
	par=NULL;
	while(ptr!=NULL)
	{
		if(item=ptr->info)
		return;
		else if(item>ptr->info)
		{
		par=ptr;
		ptr=ptr->right;
	    }
	    else
	    {
	    	par=ptr;
	    	ptr=ptr->left;
		}
		
	}
	if(ptr->left==NULL||ptr->right==NULL)
	{
		if(ptr->left==NULL)
		child=ptr->right;
		else
		child=ptr->left;
		if(ptr==*root)
		*root=child;
		else if(ptr->info>par->info)
		par->right=child;
		else
		par->left=child;
	}
	suc=ptr->right;
	parsuc=ptr;
	
	while(suc->left!=NULL)
	{
		parsuc=suc;
		suc=suc->left;
	}
	ptr->info=suc->info;
	parsuc->left=suc->right;
	if(ptr=parsuc)
	
}
void traverse_preorder(struct bst **root)
{
	ptr=*root;
	top=0;
	while(ptr!=NULL)
	{
		printf("%d",ptr->info);
		if(ptr->right!=NULL)
		{
			top=top+1;
			stack->top=ptr->right;
		}
		ptr=ptr->left;
	}
	if(top!=0)
	{
		ptr=
	}
}
