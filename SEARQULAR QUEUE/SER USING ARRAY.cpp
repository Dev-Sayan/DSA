#include<stdio.h>
#include<stdlib.h>
#define n 5
int Queue[n];
int front=-1;
int rear=-1;
void Enqueue()
{
	int val;
	if(((rear+1)%n)==front)
	{
		printf("Queue is full");
	}
	else if (front==-1 && rear==-1)
	{
		printf("Enter the Enqueue element  :<<<< ");
		scanf("%d",&val);
		front=rear=0;
		Queue[rear]=val;
	}
	else
	{
		printf("Enter the queue element :<<<< ");
		scanf("%d",&val);
		rear=(rear+1)%n;
		Queue[rear]=val;
	}
}
void Dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty\n");
	}
	else if(front==rear)
	{
		printf("Dequeue element is <<< %d ",Queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("Dequeue element is <<< %d ",Queue[front]);
		front=(front+1)%n;
	}
}
void Display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else
	{
		while(i!=rear)
		{
		printf("  %d ", Queue[i]);
		i=(i+1)%n;
		}
		printf("  %d ", Queue[rear]);
	}
}
int main()
{
	printf("1. Enqueue  \n");
	printf("2. Dequeue  \n");
	printf("3. Display  \n");
	printf("4. Exit  \n");
	while(1)
	{
		int num;
		printf("\n Enter the choice :");
		scanf("%d",&num);
		switch(num)
		{
			case 1 : Enqueue();
			    	 break;
			case 2 : Dequeue();
					 break;
			case 3 : Display();
					 break;
			case 4 : exit(0);
			
		    default: printf("Invalid choice \n");
		}
		
	}
}

