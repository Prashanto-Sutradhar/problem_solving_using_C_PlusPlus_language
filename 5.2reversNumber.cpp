#include<bits/stdc++.h>

using namespace std;

int main(){
    int num,remainder,reversnumber=0;

    cin>>num;

    while(num>0){

            remainder=num%10;
            num=num/10;

            reversnumber=(reversnumber*10)+remainder;
    }
    cout<<"reversnumber"<<endl<< reversnumber <<endl;


return 0;

}

 /*

 {
 int n;
 int revers=0;

 cin>>n;

 while(n>0){

        int lasdigit=n%10;

        revers=(revers*10)+lasdigit;

        n=n/10;

 }


 cout<<revers<<endl;

 }


     */
