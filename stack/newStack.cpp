#include<stdio.h>
#include<stdlib.h>
int top = -1;
int stack[5];
void push()
{
	int val;
	if(top==5-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("push elements : ");
		scanf("%d",&val);
		stack[++top]=val;
	}
}

void pop()
{
	int item;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else 
	{
		item=stack[top];
		top--;
		printf(" pop elements  << %d",item);
	}
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d  ",stack[i]);
	}
}
int main()
{
	a:
	printf("1. push \n");
	printf("2. pop  \n");
	printf("3. display \n");
	printf("4. exit::\n");
	while(1)
	{
		printf("\nenter the choice : ");
		int num;
		scanf("%d",&num);
		switch (num)
		{
			case 1 : push();
					 break;
			case 2 : pop();
					 break;		 
			case 3 : display();
			         break;
			 case 4: exit(0);
                
			default : printf("\ninvalid choise \n");
			goto a;
			
		}
	}
	
}
