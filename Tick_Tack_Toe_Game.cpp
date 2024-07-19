//Saim Azhar F2022266136
//Faiz Azhar F2022266054
//Feroz Butt F2022266057




#include<iostream>
using namespace std;
bool draw = false;
char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,col;
void display_pattern()
{
	cout<<system("cls");
	cout<<" \t\t\t\t\t\tWELCOME TO GAME "<<endl;                                                       //For Display
	cout<<"\tT i c k  T a c k  T o e"<<endl;
	cout<<endl;
	cout<<" PLAYER 1[X]"<<endl;
	cout<<" PLAYER 2[O]"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t      |     |      "<<endl;
	cout<<"\t\t   "<<arr[0][0]<<"  |  "<<arr[0][1]<<"  |   "<<arr[0][2]<<"  "<<endl;                  //For printing numbers
	cout<<"\t\t______|_____|______"<<endl;
	cout<<"\t\t      |     |      "<<endl;
	cout<<"\t\t   "<<arr[1][0]<<"  |  "<<arr[1][1]<<"  |   "<<arr[1][2]<<"  "<<endl;
	cout<<"\t\t______|_____|______"<<endl;
	cout<<"\t\t      |     |      "<<endl;
	cout<<"\t\t   "<<arr[2][0]<<"  |  "<<arr[2][1]<<"  |   "<<arr[2][2]<<"  "<<endl;
	cout<<"\t\t      |     |      "<<endl;
	
	
}
void player_1turn()
{
	
	
	if(turn == 'X')                                         //For changing turns
	{
	cout<<" PLAYER1 [X] TURN:-";
    }
    else if(turn == 'O')
	{
	cout<<" PLAYER2 [O] TURN:-";
    }
    int choice;
	cin>>choice;
	switch(choice)                                          //For selecting box
	{
		case 1: row = 0; col = 0; break;
		case 2: row = 0; col = 1; break;
		case 3: row = 0; col = 2; break;
		case 4: row = 1; col = 0; break;
		case 5: row = 1; col = 1; break;
		case 6: row = 1; col = 2; break;
		case 7: row = 2; col = 0; break;
		case 8: row = 2; col = 1; break;
		case 9: row = 2; col = 2; break;
		
		 
		default:
		cout<<"Invalid choice\n"<<endl;
		break;
	}
	if(turn=='X'&& arr[row][col]!='X' && arr[row][col]!='O')
	{
		arr[row][col]= 'X';
		turn = 'O';
	} 
	else if(turn =='O'&& arr[row][col]!='X' && arr[row][col]!='O')
	{
		arr[row][col]= 'O';
		turn = 'X';
	}
	else 
    {
    	cout<<"box already filled!! \n please try again!! \n\n";
    	player_1turn();
	}
	display_pattern;  
}
bool end()
{ 
      
	for(int i=0;i<3;i++)
	{
		if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] || arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i])
		{
			return false;
		}
	}
	if(arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] || arr[0][2] ==arr[1][1]  && arr[0][0] == arr[2][0])
	{
		return false;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j] != 'X' && arr[i][j] != 'O' )
			{
				return true;
			}
		}
	}
	
	draw = true;
	return false;
}

int main()
{
	int choice;
	
	while(end())
	{
	display_pattern();
	player_1turn(); 
	end();
	}
	if(turn =='O' && draw == false)
	{
		cout<<" HURRAH ! PLAYER1 [X] WINS!!"<<endl;
		
	}
	
	else if(turn =='X' && draw == false)
	{
		cout<<" HURRAH ! PLAYER2 [O] WINS!! "<<endl;
		
	}
	else 
	{
		cout<<" GAME DRAW!! "<<endl;
	}
}
