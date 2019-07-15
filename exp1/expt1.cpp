#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	   int i,n; 
	  char str[100];
	  cout<<"enter the string "<<endl;
	  for( i=0;i<100;i++);
	  {
		  cin>>str[i];
          n=i;
	  }           	 
	 for( i=0;i<n+1;i++)
	 {if((int(str[i])>63)&&(int(str[i])<91))
	  cout<<"alphabet ";
     else if((int(str[i])>47)&&(int(str[i])<58))
       cout<<"integer ";
      else if(int((str[i])>96)&&(int(str[i])<123))
         cout<<"alphabet ";
      else if((int(str[i])>32)&&(int(str[i])<48)) 
         cout<<"special_character "; 
      }   
}   
