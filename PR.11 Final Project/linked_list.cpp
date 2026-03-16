#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
main(){
	Node *HEAD=new Node();
	HEAD->data=98;
	HEAD->next=NULL;
	
	Node *n2=new Node();
	n2->data=78;
	n2->next=NULL;
	HEAD->next=n2;
	
	Node *n3=new Node();
	n3->data=78;
	n3->next=HEAD;
	n2->next=n3;
	
	cout<<"Head Node Data:"<<HEAD->data<<endl;
	cout<<"Head Node Address:"<<HEAD<<endl;
	cout<<"Address of next node:"<<HEAD->next<<endl<<endl;
	
	cout<<"N2 Node Data:"<<n2->data<<endl;
	cout<<"N2 Node Address:"<<n2<<endl;
	cout<<"Address of next node:"<<n2->next<<endl<<endl;
	
	cout<<"N3 Node Data:"<<n3->data<<endl;
	cout<<"N3 Node Address:"<<n3<<endl;
	cout<<"Address of next node:"<<n3->next<<endl<<endl;
	
	
	
}
