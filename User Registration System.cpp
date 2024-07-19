#include<iostream>
#include<string>
#include<vector>
using namespace std;

class user{
	private:
		string username,password;
		
	public:
		user(string name,string pass)
		{
			username=name;
			password=pass;
			
		}
		
		
		string getusername()
		{
			return username;
			
		}
		
		string getpassword()
		{
			return password;
			
		}
	
};

class usermanager{
	private:
		vector<user> users;
	
	public:
		void register_user()
		{
			string username,password;
			
			cout<<"\t\tEnter username: ";
			cin>>username;
			cout<<endl;
			
			cout<<"\t\tEnter password: ";
			cin>>password;
			cout<<endl;
			
			cout<<"\t\t*User Register successfully*"<<endl;
			
			user newuser(username,password);
			
			users.push_back(newuser);
		}
		
		bool loginuser(string name,string pass)
		{
			for(int i=0;i<users.size();i++)
			{
				if(users[i].getusername()==name && users[i].getpassword()==pass)
				{
					cout<<"\t\t*Login Successfully*"<<endl;
					
					return true;
					
				}
				
				
			}
			
			cout<<"\t\tInvalid Username or Password"<<endl;
			
			return false;
			
			
		}
		
		void showuser()
		{
			cout<<"\t\t---Users List---"<<endl;
			
			for(int i=0;i<users.size();i++)
			{
				
				cout<<"\t\t"<<users[i].getusername()<<endl;
				
				
			}
			
			
		}
		
		void searchuser(string name)
		{
			for(int i=0;i<users.size();i++)
			{
				if(users[i].getusername()==name)
				{
					cout<<"\t\tUser Found"<<endl;
				}
				
				
			}
			
			
		}
		
		void deleteuser(string name)
		{
			for(int i=0;i<users.size();i++)
			{
				if(users[i].getusername()==name)
				{
					users.erase(users.begin() + i);
					
					cout<<"\t\t*User Remove Successfully*"<<endl;
					
				}
				
			}
			
			
		}
		
};


main()
{
	usermanager usermanage;
	
	int choice;
	
	char option;
	
	do{
		
		system("cls");
		
		cout<<"\n\n\t\t1.Register User "<<endl;
		cout<<"\t\t2.Login"<<endl;
		cout<<"\t\t3.Show User List"<<endl;
		cout<<"\t\t4.Search User"<<endl;
		cout<<"\t\t5.Delete User"<<endl;
		cout<<"\t\t6.Exit"<<endl;
	
		cout<<"\n\t\tEnter Choice: ";
		cin>>choice;
		cout<<endl;
	
		switch(choice)
		{
			case 1:{
				usermanage.register_user();		
				
				break;
			}
				
		
			case 2:{
				string username,password;
				
				cout<<"\t\tEnter username: ";
				cin>>username;
				cout<<endl;
			
				cout<<"\t\tEnter password: ";
				cin>>password;
				cout<<endl;
			
				usermanage.loginuser(username,password);
				
				
				break;
			}
				
				
			case 3:{
				usermanage.showuser();
				break;
			}
				
			case 4:{
				string username;
				cout<<"\t\tEnter username: ";
				cin>>username;
				cout<<endl;
				
				usermanage.searchuser(username);
				break;
			}	
					
			case 5:{
				string username;
				cout<<"\t\tEnter username: ";
				cin>>username;
				cout<<endl;
				usermanage.deleteuser(username);
				break;
			}		
			
			case 6:{
				exit(1);
				
			}
			
			default:
				cout<<"\t\tInvalid Choice"<<endl;
		
		}
	
	
	
	
	
		cout<<"\t\tDo you want to continue press Y or y ";
		cin>>option;
		cout<<endl;
		
	}while(option=='Y' || option=='y');
	
	
	
	
	
	
	
}


