#include<iostream>
#include<iomanip>
using namespace std;

class digital{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		digital(int h,int m,int s)
		{
			hours=h;
			minutes=m;
			seconds=s;
			
		
		}
	
			void displaytime()
			{
				
					
				cout<<setfill('0')<<setw(2)<<hours<<":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds<<" ";
					
				if(hours>=12)
				{
					cout<<"PM";
				}
				else
				{
					cout<<"AM";
				}
				
			}
}; 

int main()
{
	int hour;
	int minute;
	int second;
	
	cout<<"Enter Hours "<<endl;
	cin>>hour;
	
	cout<<"Enter Minutes "<<endl;
	cin>>minute;
	
	cout<<"Enter Seconds "<<endl;
	cin>>second;
	
	digital time(hour,minute,second);
	
	time.displaytime();
}
