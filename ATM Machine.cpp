#include<iostream>
using namespace std;

class ATM{
	private:
		int balance;
		int pincode;
		int success;
			
	public:
		ATM(int bal,int pin)
		{
			balance=bal;
			pincode=pin;
		}
		
		int getbalance()
		{
			return balance;
		}
		
		int withdraw(int amount,int pin)
		{
			if(pin!=pincode)
			{
				return false;
			}
			
			if(amount>balance)
			{
				return false;
			}
			
			balance=balance-amount;
			return true;
				
		}
		
		int deposit(int amount)
		{
			
			balance=balance+amount;
			
			
		}
		
		int transfer(int amount,ATM receive,int pin)
		{
			
			if(pin!=pincode)
			{
				return false;
			}
			
			receive.withdraw(amount,pin);
			
			if(success)
			{
				receive.deposit(amount);
				return true;
				
			}
			else
			{
				return false;
			}
			
			
			
		}
		
		
		
};

int main()
{
	
	ATM bank(1000,1234);
	int choice,amo,success,pin;
	
	char option;
	
	cout<<"Your balance is "<<bank.getbalance()<<endl;
	
	
	do{
		
		system("cls");
		
		cout<<"1:View Balance"<<endl;
		cout<<"2:Cash Withdraw"<<endl;
		cout<<"3:Cash Depsoit"<<endl;
		cout<<"4:Transfer Data"<<endl;
		cout<<"5:EXit"<<endl;
	
		cout<<"Enter Choice"<<endl;
		cin>>choice;
	
	
	
	switch(choice)
	{
		case 1:
			cout<<"Your balance is "<<bank.getbalance()<<endl;
			break;
			
		case 2:
			
			cout<<"Your balance is "<<bank.getbalance()<<endl;
			cout<<"Enter amount to withdraw "<<endl;
			cin>>amo;
			cout<<"Enter your Pin"<<endl;
			cin>>pin;
			success=bank.withdraw(amo,pin);
			if(success)
			{
				cout<<"withdraw successfull"<<endl;
			}
			else
			{
				cout<<"insufficient fund or invalid code"<<endl;
			}
			
			break;
			
		case 3:
			cout<<"Enter amount to deposit"<<endl;
			cin>>amo;
			bank.deposit(amo);
			cout<<"Deposit successfull"<<endl;
			break;
		
		case 4:
			cout<<"Enter amount to transfer"<<endl;
			cin>>amo;
			cout<<"Enter your Pin"<<endl;
			cin>>pin;
			success=bank.transfer(amo,bank,pin);
			if(success)
			{
				cout<<"Amount Transfer successfully "<<endl;
			}
			else
			{
				cout<<"Invalid code or Insufficient balance"<<endl;
			}
			break;
		
		case 5:
			cout<<"Thank you for using ATM"<<endl;
			exit(1);
			
		default:
			cout<<"Invalid choice "<<endl;
	}
	
	cout<<"If you want another transaction press Y or y"<<endl;
	cin>>option;
	
	
	}while(option=='Y'|| option=='y');
	

}


