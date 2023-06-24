#include<iostream>
using namespace std;
int main()

{


    int n1,n2;

    cout<<"input two number : "<<endl;

    cin>>n1>>n2;

     char op;

     cout<<"input a oparator :"<<endl;
     cin>>op;

     switch(op){

     case '+':{
      cout<<n1+n2<<endl;
      break;
     }
      case '-':{
      cout<<n1-n2<<endl;
      break;
     }
      case '*':{
      cout<<n1*n2<<endl;
      break;
     }
      case '/':{
      cout<<n1+n2<<endl;
      break;

      }


     default :{

     cout<<"i am still learning "<<endl;

     }


     }




    return 0;

     }
