#include<iostream>
using namespace std;
int main()
{
    char arr[3][3];
    char ans;
    do{
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]='*';
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"|\t    "<<arr[i][j]<<"\t\t";
        }
        cout<<"|";
        cout<<endl<<endl;
    }
    cout<<"Press Enter To Start The Game\n";
    cin.ignore();
        int i=1;
        char ch;
        int row=0,col=0,winner=-1;
        while(i<=9)
        {
            if(i%2==0)
            {
                cout<<"Player-2 Turn\n";
                ch='O';
            }
            else
            {
                cout<<"Player-1 Turn\n";
                ch='X';
            }
           while(1)
           {
             cout<<"Enter Row Number-: ";
            cin>>row;
            cout<<"\nEnter Col Number-: ";
            cin>>col;
            if(arr[row-1][col-1]!='*' || (row<1 && row>3) || (col<1 && col>3))
            {
                cout<<"Please Enter Valid Moves\n";
            }
            else
            break;
           }
            arr[row-1][col-1]=ch;
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<"|\t    "<<arr[i][j]<<"\t\t";
                }
                cout<<"|";
                cout<<endl<<endl;
            }
            if(arr[0][0]==ch && arr[0][1]==ch && arr[0][2]==ch)
            {
                winner=i%2;
                break;
            }
            else if(arr[1][0]==ch && arr[1][1]==ch && arr[1][2]==ch)
            {
                winner=i%2;
                break;
            }
             else if(arr[2][0]==ch && arr[2][1]==ch && arr[2][2]==ch)
            {
                winner=i%2;
                break;
            }
             else if(arr[0][0]==ch && arr[1][0]==ch && arr[2][0]==ch)
            {
                winner=i%2;
                break;
            }
             else if(arr[0][1]==ch && arr[1][1]==ch && arr[2][1]==ch)
             {
                winner=i%2;
                break;
            }
             else if(arr[0][2]==ch && arr[1][2]==ch && arr[2][2]==ch)
            {
                winner=i%2;
                break;
            }
             else if(arr[0][0]==ch && arr[1][1]==ch && arr[2][2]==ch)
            {
                winner=i%2;
                break;
            }
             else if(arr[0][2]==ch && arr[1][1]==ch && arr[2][0]==ch)
            {
                winner=i%2;
                break;
            }
             else
            i++;
        }
        if(winner==1)
        cout<<"Player 1 Is Winner\n";
        else if(winner==0)
        cout<<"Player 2 Is Winner\n";
        else
        cout<<"Game Draw\n";
        cout<<"Do You Want To Play Again Press y To Continue Or n To Stop -: ";
        cin>>ans;
    }
    while(ans=='y');
    return 0;
}