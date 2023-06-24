#include<iostream>

using namespace std ;

int main(){

char button;
   cout<<"Input a character: "<<endl;
   cin>>button;

   switch(button){

   case 'a':
       {
       cout<<" hello "<<endl;
     break;

   }
   case 'b':
    {
       cout<<" hola "<<endl;
     break;

   }
   case 'c':
    {
       cout<<" nihawu"<<endl;
     break;

   }
   case 'd':
    {
       cout<<" mushimushi "<<endl;
     break;

   }
   case 'e':
    {
       cout<<" namaskar "<<endl;
     break;

   }
   case 'f':
    {
       cout<<" salam "<<endl;
     break;

   }


 default:{

    cout<<"i am still learning "<<endl;
   }
   }




return 0;

}
