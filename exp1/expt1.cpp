#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	   int i; 
	  char str[100];
	  cout<<"enter the string "<<endl;
	  for( i=0;i<100;i++);
	  cin>>str[i];
	 
	 for( i=0;i<100;i++)
	 if((str[i]>64)&&(str[i]<92))
	  cout<<"Alphabet ";
     else if((str[i]>47)&&(str[i]<58))
       cout<<"integer ";
      else if((str[i]>96)&&(str[i]<123))
         cout<<"alphabet ";
       else
         cout<<"special_character "; 
         
}   
