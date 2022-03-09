#include<iostream>
#include<windows.h>
#include<conio.h>
#define MAX 5
using namespace std;

class Queue{
	private:
		int front,rear,Que[MAX];
	public:
		Queue(){
			front=rear=-1;
		}
	void EnQ(int val){
		if(rear==MAX-1){
			cout<<"Overflow";
		}
		else{
			rear++;
			Que[rear]=val;
		}
		if(rear==-1){
			rear=0;     
		}
	}
	void DeQ(){
		if(front==(rear+1)){
			cout<<"Underflow";
		}
		else{
			cout<<Que[front]<<" \n";
			front++;
		}
	}
};
int main(){
	Queue obj;
	int op,val;
	do{
		cout<<"\n\n1. EnQ\n\n2. DeQ\n\n3. Enter -1 to Exit\n\n Enter Option: ";
		cin>>op;
		switch(op){
			case 1:
				cout<<"\n\nEnter value: ";
				cin>>val;
				obj.EnQ(val);
				break;
			case 2:
				obj.DeQ();
				break;
			case 3:
				system("cls");
				break;
		}
	}while(op>0);
}
