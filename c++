#include <iostream>
using namespace std;

int main() 
{
    string n,pas;
    cout<<"nama ";
    cin>>n;
    cout<<"password ";
    cin>>pas;
    if(n=="rizky"&&pas=="4444")
    {
        cout<<"anda adalah rizky";
    }
    else if(n=="nalen"&&pas=="1111")
    {
        cout<<"anda adalah nalen";
    }
    else
    {
        cout<<"anda bukan rizky bukan nalen";
    }


    return 0;
}
