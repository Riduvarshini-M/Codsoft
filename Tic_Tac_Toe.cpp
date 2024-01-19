#include <iostream>
#include<string>
using namespace std;

char turn='x';
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int flag=0;
int m=0;
int cell;
int r,c;
void display()
{
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t"<<board[0][0]<<"\t"<<board[0][1]<<"\t"<<board[0][2]<<"\n";
    cout<<"\t\t_____|"<<"_____|"<<"_____\n";
    cout<<"\t\t"<<board[1][0]<<"\t"<<board[1][1]<<"\t"<<board[1][2]<<"\n";
    cout<<"\t\t_____|"<<"_____|"<<"_____\n";
    cout<<"\t\t"<<board[2][0]<<"\t"<<board[2][1]<<"\t"<<board[2][2]<<"\n";
    cout<<"\t\t     |"<<"     |\n";
}

void play()
{
    
    if(turn=='x')
        cout<<"Turn x-Cell to be filled: \n";
    else if(turn=='o')
        cout<<"Turn o-Cell to be filled: \n";
    cin>>cell;
    switch(cell)
    {
        case 1: r=0,c=0;
        break;
        case 2: r=0,c=1;
        break;
        case 3: r=0,c=2;
        break;
        case 4: r=1,c=0;
        break;
        case 5: r=1,c=1;
        break;
        case 6: r=1,c=2;
        break;
        case 7: r=2,c=0;
        break;
        case 8: r=2,c=1;
        break;
        case 9: r=2,c=2;
        break;
        default: cout<<"Invalid cell choosed";
    }
    if(turn=='x'&& board[r][c]!='x' && board[r][c]!='o')
    {
        board[r][c]='x';
        turn='o';
        m+=1;
    }
    else if(turn=='o'&& board[r][c]!='x' && board[r][c]!='o')
    {
        board[r][c]='o';
        turn='x';
        m+=1;
    }
    else
    {
        cout<<"The box is already filled\n";
    }
}

void game_over()
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
        {
            cout<<board[i][0]<<" won this match!!";
            flag=1;
        }
    }
    for(int i=0;i<3;i++)
    {
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i])
        {
            cout<<board[0][i]<<" won this match!!";
            flag=1;
        }
    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
    {
        cout<<board[0][0]<<" won this match!!";
        flag=1;
    }
    if (board[0][2]==board[1][1] && board[0][2]==board[2][1])
    {
        cout<<board[0][2]<<" won this match!!";
        flag=1;
    }
    if(m==9 && flag==0)
    {
        cout<<"Match is draw";
        flag=1;
    }
}

int main()
{
    while(1)
    {
        display();
        game_over();
        if(flag!=1)
        {
            play();
        }
        else
        {
            break;
        }
    }
}
