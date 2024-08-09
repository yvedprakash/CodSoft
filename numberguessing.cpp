#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
  int n,j,i;
  srand(time(0));
  i=rand()%100+1;
  int count=0;
  cout<<"enter your no\n";
  cin>>n;
  for(j=1;j<=i;j++)
  {
  if(n==i)
  {
  cout<<"Your Guess Is Correct\n";
  ++count;
break;
}
else if(n>i)
{
cout<<"Enter Small Number:-\n";
cin>>n;
++count;
}
else
{
cout<<"Enter Large Number:-\n";
cin>>n;
++count;
}
}
cout<<"Total Chance Taken:- "<<count;

    return 0;
    }