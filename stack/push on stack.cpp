#include<stdio.h>
int top=-1;
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
		printf("push elements");
		scanf("%d",&val);
		stack[++top]=val;
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d",& stack[i]);
	}
}
int main()
{
	printf("1. push \n");
	printf("2. display \n");
	while(1)
	{
		printf("\nenter the choise");
		int num;
		scanf("%d",&num);
		switch (num)
		{
			case 1 : push();
					 break;
			case 2 : display();
			         break;
		}
	}
	
}
