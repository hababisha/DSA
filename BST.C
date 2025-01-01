//PROGRAM TO PERFORM BASIC OPERATIONS ON A BINARY SEARCH TREE

#include<stdio.h>
#include<stdlib.h>
struct tree
{
	  struct tree *left;
	  int info;
	  struct tree *right;
};
void insert(struct tree **ptr,int item)
{
	  if(*ptr==NULL)
	  {
		   *ptr=(struct tree *)malloc(sizeof(struct tree));
		   (*ptr)->left=(*ptr)->right=NULL;
		   (*ptr)->info=item;
		   return;
	  }

	  else
	  {
		   if(item<(*ptr)->info)
		   {
			     insert(&((*ptr)->left),item);
		   }
		   else
		   {
			     insert(&((*ptr)->right),item);
		   }
		   return;
	  }
}

void preorder(struct tree *ptr)
{
	  struct tree *move;
	  move=ptr;
	  if(move!=NULL)
	  {
		   printf(" %d ",move->info);
		   preorder(move->left);
		   preorder(move->right);
	  }
	  else
		   return;
}
void inorder(struct tree *ptr)
{
	  struct tree *move;
	  move=ptr;
	  if(move!=NULL)
	  {
		   inorder(move->left);
		   printf(" %d ",move->info);
		   inorder(move->right);
	  }
	  else
	  return;
}
void postorder(struct tree *ptr)
{
	  struct tree *move;
	  move=ptr;
	  if(move!=NULL)
	  {
		   postorder(move->left);
		   postorder(move->right);
		   printf(" %d ",move->info);
	  }
	  else
		   return;
}
int main()
{
	  struct tree *root=NULL;
	  int item,ch;
	  char ch1;
	  do
	  {
		   printf("\nBINARY SEARSCH TREE MENU\n");
		   printf("1.Insert\n");
		   printf("3.Traversal\n");
		   printf("4.Exit\n");
		   printf("\nEnter your choice   :         ");
		   scanf("%d",&ch);
		   switch(ch)
		    {
			     case 1: printf("\nEnter the element to be inserted   :         ");
				      scanf("%d",&item);                                                                       insert(&root,item);

				      break;
			  
			     case 3: printf("\na.Preorder.\n");
				      printf("b.Inorder.\n");
				      printf("c.Postorder.\n");
				      printf("\nEnter your choice   :         ");
				      ch1=getche();
				      printf("\n\nTree items  :  ");
				      switch(ch1)
				      {
						case 'a': preorder(root);
							    break;
						case 'b': inorder(root);
							    break;
						case 'c': postorder(root);
							    break;
				      }
				      break;
			     default: exit(0);
		   }
		   fflush(stdin);
	  }while(ch!=4);
}