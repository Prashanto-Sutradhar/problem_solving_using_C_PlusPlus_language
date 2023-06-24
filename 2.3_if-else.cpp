#include<iostream>

using namespace std;

int main()
{
    int saving_amount;

    cin>>saving_amount;

    if(saving_amount>5000)
    {
        cout<<"going to neha with shopping"<<endl;
    }
    else if (saving_amount>2000)
    {
        cout<<"going to Rashmi"<<endl;
    }
    else if(saving_amount>1000)
    {
        cout<<"meet with friends"<<endl;
    }

    else if(saving_amount>10)
    {
        cout<<"sleep in home"<<endl;
    }

    return 0;
}
