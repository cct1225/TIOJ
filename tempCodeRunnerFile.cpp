#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(b>a) swap(a,b);
    cout<<a;
}