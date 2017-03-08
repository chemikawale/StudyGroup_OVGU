#include <iostream>
using namespace std;

int P1, P2, gameover=0;
char blocknum [10]={'0','1','2','3','4','5','6','7','8','9'};
    
void grid() {   
    cout<<blocknum[1]<<"|"<<blocknum[2]<<"|"<<blocknum[3]<<endl;
    cout<<blocknum[4]<<"|"<<blocknum[5]<<"|"<<blocknum[6]<<endl;
    cout<<blocknum[7]<<"|"<<blocknum[8]<<"|"<<blocknum[9]<<endl<<endl<<endl;
}
 
int CheckUserInput(int i)
{
  if(blocknum[i]!='X' || blocknum[i]!='O') 
   {
         return 1;        
    }
    return 0;
} 
int main()
{
   
   cout<<"Welcome to Tic Tac Toe"<<endl;
   grid();
   
 //  while (gameover==0){
   cout<<"1st Player Enter the block number to place your mark= ";
   cin>>P1;
   if (CheckUserInput(P1))
   {
       blocknum[P1]='X';
   }
    else{
        cout<<"This Place is filled. Please choose another location"<<endl;
        cout<<"1st Player Enter the block number again to place your mark= ";
        cin>>P1;
        
    }    
        grid();
    
  // }
   return 0;
}

