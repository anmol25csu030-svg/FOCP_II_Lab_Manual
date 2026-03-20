#include<iostream>
using namespace std;

int main()
{
   int score1 ,score2,  score3;

   cout<<"player 1 score"<<endl;
   cin>>score1;

    cout<<"player 2 score"<<endl;
 cin>>score2;

      cout<<"player 3"<<endl;
   cin>>score3;

   if(score1>score2  && score1>score3)
   {
      cout<<"Player1 winner";
   }
   else if( score2>score1 &&  score2>score3 )
   {
    cout<<"Player2 winner";
   }
   else if(score3>score1 && score3>score2)
   {
        cout<<"Player3 winner";
   }
   else
   {
      cout<<"match is draw";
   }

   return 0;
}