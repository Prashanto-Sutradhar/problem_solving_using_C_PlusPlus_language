#include<iostream>

using namespace std;

int main()

{   int i=1;
     int j=1;
     int k;

        //1  //1  //2  //2     3       3        4       4
      k=i +  j +  ++i +  ++j +  i++  + j++  +   ++i  + ++j ;
      {

     cout<<i<<" "<<j<<" "<<k<<endl;

      }


    return 0;
}
