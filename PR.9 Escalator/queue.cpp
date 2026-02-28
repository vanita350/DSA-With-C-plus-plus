#include<iostream>
using namespace std;

class Queue{
    private:
        int *arr;
        int front, rear, size, capacity;
    
    public:
        Queue(int cap) {
            capacity = cap;
            arr = new int[capacity];
            front = -1;
            rear = -1;
            size = 0;
        }
        bool isFull() {
            return rear == capacity - 1;
        }

        bool isEmpty() {
            return front == -1 || front > rear;
        }
        void enqueue(int value){
            if (isFull()) {
                cout << "Queue is Full"<<endl<<endl;
                return;
            }
            if (front == -1) front = 0;
            rear++;
            arr[rear] = value;
            size++;
            cout <<"enqueued successfully..........."<<endl<<endl;
        }
        void dequeue() {
            if (isEmpty()) {
                cout << "Queue is Empty "<<endl<<endl;
                return;
            }
            cout <<"dequeued successfully........."<<endl<<endl;
            front++;
            size--;
        }
        void display() {
            if (isEmpty()) {
                cout << "Queue is Empty"<<endl<<endl;
                return;
            }
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl<<endl;
        }
	    ~Queue() {
            delete[] arr;
        }
};
int main(){
	int ch,value;
	int capacity;
	cout<<"Enter Queue Capacity:";
	cin>>capacity;
	cout<<endl;
	Queue q(capacity);
	while(1){
		cout<<"Press 1 for Enqueue (Add)"<<endl;
		cout<<"Press 2 for Dequeue (Remove)"<<endl;
		cout<<"Press 3 for Display Element in queue"<<endl;
		cout<<"Press 4 for Check Queue is Empty or not"<<endl;
		cout<<"Press 5 for Check Queue is Full or not"<<endl;
		cout<<"Press 0 for Exit"<<endl<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<endl;
		if (ch==0){
			cout<<"Thank you.........."<<endl<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter Value to Enqueue:";
				cin>>value;
				q.enqueue(value);
				break;
			case 2:
			    q.dequeue();
				break;
			case 3:
				q.display();
				break;
			case 4:
				if(q.isEmpty()){
					cout << "\nQueue is empty........"<<endl<<endl;
				}
				else{
					cout << "\nQueue is not empty........"<<endl<<endl;
				}
				break;
			case 5:
				if(q.isFull()){
					cout<<"\nQueue is Full......"<<endl<<endl;
				}else{
					cout<<"\nQueue is not  Full......"<<endl<<endl;
				}	
				break;
			default:
				cout<<"Please enter Right choice......"<<endl<<endl;
				break;
				
		}
		
	}
	return 0;
}