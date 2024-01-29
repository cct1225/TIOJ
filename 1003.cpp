#include<iostream>
using namespace std;
int F(int n)
{
    if(n==0)    return 1;
    else    return  F(n-1)+n;
}
int main()
{
    int n;
    cin>>n;
    cout<<F(n);
}
