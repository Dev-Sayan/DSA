#include<stdio.h>
#include<stdlib.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;

void Enqueue()
{
	int val;
	if(rear==n-1)
	{
		printf("enqueue is full");
	}
	else if (front==-1 && rear==-1)//only use for 1st time
	{
		printf("Enter the enqueue elements : ");
		scanf("%d",&val);
		front=rear=0;
		queue[rear]=val;
	}
	else
	{
		printf("Enter the enqueue elements : ");
		scanf("%d",&val);
		queue[++rear]=val;
	}	
}

void Dequeue()
{
	if(rear==-1 && front==-1)
	{
		printf("queue is empty\n");
}
	else if(front == rear)
	{
		(front=rear=-1);
	}
	else
	{
		printf("dequeue element is <<< %d",queue[front]);
		front++;
	}
}

void Peek()
{
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		printf(" first element is :  %d ",queue[front]);
	}
}

void Display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
}
int main()
{
	printf("1. Enqueue \n");
	printf("2. Dequeue  \n");
	printf("3. Peek\n");
	printf("4. Display \n");
	printf("5. Exit\n");
	while(1)
	{
		printf("\n enter the choice : ");
		int num;
		scanf("%d",&num);
		switch(num)
		{
			case 1 : Enqueue();
					 break;
			case 2 : Dequeue();
					 break;
			case 3 : Peek();
					 break;		 
			case 4 : Display();
					 break;
			case 5 : exit(0);
			
			default: printf("\n invalid choise");
					 
		}
	}
}



