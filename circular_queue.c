#include<stdio.h>
#define size 5
int item[size];
int front=-1;
int rear =-1;
//check queue is full
int isfull(){
	if((front==rear+1)||(front==0&& rear==size-1)){
		return 1;
	}
	return 0;
}
//check if queue is empty
int isempty(){
	if(front==-1){
		return 1;
	}
	return 0;
}
//entering element
int enqueue(int element){
	if(isfull()){
		printf("Sorry! queue is full");
     	}
	else{
		if(front==-1){
			front=0;
		}
		rear=rear+1%size;
		item[rear]=element;
		printf("inserted %d\t",element);
	}
	printf("\n");
		return 0;
	
}//remove an element
int dequeue(){
	int element;
	if(isempty()){
		printf("the queue is empty");
		return -1;
	}
	else{
		element =item[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front =(front+1)%size;
		}
		printf("deleted element %d",element);
		return element;
	}
}
//for displaying
void display(){
	int i;
	if(isempty()){
		printf("empty queue");
	}
	else{
		printf("front %d",front);
		printf("\n");
		printf("Item :");
		printf("\n");
		for(i=front;i!=rear;i=i+1%size){
			printf("%d\t",item[i]);
		}
		printf("%d",item[i]);
		printf("\n");
		printf("rear =%d",rear);
	}

}void main(){
	int n,ch,element;
	printf("press 0 to exit\n");
	printf("press 1 to start\n");
	scanf("%d",&n);
	while(n==1){
		printf("press 1 . insert \n");
		printf("press 2 . delete\n");
		printf("press 3. display\n");
		printf("press 4. exit\n");
		scanf("%d",&ch);
		switch(ch){
		
		    case 1:
			   printf("enter the element");
			   scanf("%d",&element);
			   enqueue(element);
			   break;
			   printf("\n");	
		    case 2:
			    element=dequeue();
			    front!=-1;
				{
				printf("the deleted element is %d",element);
				}
				
		 	   break;
	        case 3:
	      	     display();
	      	   break;
	        default:
	        	printf("you have given a invalid input");
	    }
	}
}

