#include<stdio.h>
#include<conio.h>
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
	insert_bst(&root);
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

