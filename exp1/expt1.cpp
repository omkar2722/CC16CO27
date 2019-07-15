#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	  int strlen;
	  string str,strl; 
	  cout<<"enter the string "<<endl;
	  cin>>str;
       cout<<"the string length is"<<endl;   
        strl=str;
        while (strl!=0)
        {    
	     strl=strl/10;
         strlen=strlen+1;
	    }
	cout<<strlen;
}
