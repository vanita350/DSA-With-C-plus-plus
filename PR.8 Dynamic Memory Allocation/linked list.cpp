#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
class LinkedList{
	public:
		int count;
		Node *head;
		
		LinkedList(){
			head=NULL;
			count=0;
		}
		void insert_at_Begining(int data){
			Node *n=new Node(data);
			n->next=head;
			head=n;
			count++;
			cout<<"Node Created......"<<endl<<endl;
		}
		void viewNode(){
			Node *ptr=head;
			while(ptr!=NULL){
				cout<<"Data: "<<ptr->data<<endl;
				ptr=ptr->next;
			}
			cout<<endl;
		}
		void Delete_Node(int position){
			if (position < 0 || position >= count) {
				cout << "Invalid position........"<<endl<<endl;
				return;
			}	
			Node *temp;
			if (position == 0) {
				temp = head;
				head = head->next;
			} else {
				Node *prev = head;
				for (int i = 0; i < position - 1; i++) {
					prev = prev->next;
				}
				temp = prev->next;
				prev->next = temp->next;
			}
			delete temp;
			count--;
			cout << "deleted........"<<endl<<endl;
		}
		void searchNode(int position){
			Node *n=head;
			if (position < 0 || position >= count) {
				cout << "Invalid position........"<<endl<<endl;
				return;
			}else{
				
				for (int i = 0; i < position; i++) {
					n=n->next;	
				}
				cout<<endl<<"Data:"<<n->data<<endl<<endl;
			}	
		}
		void reverseList(){
			Node *prev = NULL;
			Node *current = head;
			Node *next = NULL;
			
			while (current != NULL) {
			    next = current->next;   
			    current->next = prev;   
			    prev = current;         
			    current = next;         
			}
			head = prev;
			Node *ptr=head;
			while(ptr!=NULL){
				cout<<"Data: "<<ptr->data<<endl;
				ptr=ptr->next;
			}
			cout<<endl;
		}
		
};

main(){
	int ch;
	int data,position,newData;
	LinkedList list;
	while(1){
		cout<<"1.Insert Node At Begining"<<endl;
		cout<<"2.View Node"<<endl;
		cout<<"3.Search Node"<<endl;
		cout<<"4.Delete Node"<<endl;
		cout<<"5.Revese Linked List"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<endl;
		
		if(ch==0){
			cout<<"Thank you...."<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter Node Data:";
				cin>>data;
				list.insert_at_Begining(data);
				break;
			case 2:
				list.viewNode();
				break;
			case 3:
				cout<<"Enter Node Postion to Search Node:";
				cin>>position;
				list.searchNode(position);
				break;
			case 4:
				cout<<"Enter Node Postion to Delete Node:";
				cin>>position;
				list.Delete_Node(position);
				break;
			case 5:
				list.reverseList();
			break;
		}
	}
}