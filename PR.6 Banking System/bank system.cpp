#include<iostream>
using namespace std;
class bank{
	private:
			int acc_no;
			float amount;
			string name;
			float depo_amount,with_amount;
	public:
	
		void setDetails(int acc_no,string name,float amount){
			this->acc_no=acc_no;
			this->amount=amount;
			this->name=name;
		}
		void getDetails(int index){
				if(index!=-1){
					cout<<endl;
					cout<<"Account Number:"<<this->acc_no<<endl;
					cout<<"Account Holder Name:"<<this->name<<endl;
					cout<<"Account Amount:"<<this->amount<<endl;	
				}else{
					cout<<endl;
					cout<<"Account Not Found"<<endl<<endl;
				}
		}
		void depositeAmount(int index){
				if(index!=-1){
					cout<<endl;
					cout<<"Enter you want to deposite:";
					cin>>this->depo_amount;
					this->amount+=this->depo_amount;
					
					cout<<"Account Number:"<<this->acc_no<<endl;
					cout<<"Account Holder Name:"<<this->name<<endl;
					cout<<"Account Amount After Deposite :"<<this->amount<<endl;
					
				}else{
					cout<<endl;
					cout<<"Account Not Found"<<endl<<endl;
				}
		}
		void withdrawAmount(int index){
				if(index!=-1){
					cout<<endl;
					cout<<"Enter you want to Withdraw:";
					cin>>this->with_amount;
					if(this->amount <= this->depo_amount){
						cout<<"Your Account Balance Not sufficiant"<<endl<<endl;
					}else{
						this->amount-=with_amount;
						
						cout<<"Account Number:"<<this->acc_no<<endl;
						cout<<"Account Holder Name:"<<this->name<<endl;
						cout<<"Account Amount After Deposite :"<<this->amount<<endl;	
					}						
				}else{
					cout<<endl;
					cout<<"Account Not Found"<<endl<<endl;
				}
		}
		int Account_no(){
			return this->acc_no;
		}
};
int main()
{
	bank b[50];
	int ch,i;
	int cnt=0;
	int acc_no=100;
	int index=-1;
	int ac_no;
	float amount;
	string nm;
	while(1){
		cout<<endl;
		cout<<"1.Create Account"<<endl;
		cout<<"2.Deposite Amount"<<endl;
		cout<<"3.Withdraw Amount"<<endl;
		cout<<"4.Account detail"<<endl;
		cout<<"5.exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		if(ch==5){
			cout<<"Thank you"<<endl<<endl;
			break;
		}
		switch(ch){
			case 1:
				acc_no++;
				cout<<"Account Number is:"<<acc_no<<endl;
				cout<<"Enter Account Holder Name:";
				cin>>nm;
				cout<<"Enter Amount:";
				cin>>amount;
				b[cnt++].setDetails(acc_no,nm,amount);
				cout<<endl<<"Account create successfully"<<endl<<endl;
				break;
			case 2:
				cout<<"Enter your Account Number:";
				cin>>ac_no;
				for(i=0;i<cnt;i++){
					if(b[i].Account_no()==ac_no){
						index=i;
						break;
					}else{
						index=-1;
					}
				}
				b[index].depositeAmount(index);			
				break;
			case 3:
				cout<<"Enter your Account Number:";
				cin>>ac_no;
				for(i=0;i<cnt;i++){
					if(b[i].Account_no()==ac_no){
						index=i;
						break;
					}else{
						index=-1;
					}
				}
				b[index].withdrawAmount(index);	
				break;
			case 4:
				cout<<"Enter your Account Number:";
				cin>>ac_no;
				for(i=0;i<cnt;i++){
					if(b[i].Account_no()==ac_no){
						index=i;
						break;
					}else{
						index=-1;
					}
				}
					b[index].getDetails(index);
				break;
			default:
				cout<<"Wrong choice......"<<endl;
				break;	
		}		
	}
	return 0;
}
