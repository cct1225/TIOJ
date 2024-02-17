#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m>n) swap(m,n);
    if(n%m==0)  cout<<"Y"<<endl;
    else    cout<<"N"<<endl;
}