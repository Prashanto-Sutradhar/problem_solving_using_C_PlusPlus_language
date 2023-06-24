#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){

  int n;
 cin>>n;

 int sum=0,orgenaln=n;

  while(n>0){

    int lastdigite=n%10;
     n=n/10;

    sum+= pow(lastdigite,3);



  }

  if(sum==orgenaln){

    cout<<"Armstrong Number"<<endl;
  }
  else{

    cout<<"Not Armstrong Number"<<endl;
  }


return 0;
}
