#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,m;
    while(cin>>m>>n)
    {
        if(m==0&&n==0)  break;
        if(m>n) swap(m,n);
        cout<<m*(m+1)*(2*m+1)/6 + (n-m)*m*(m+1)/2 <<endl;
    }
    
}
// refer to https://www.geeksforgeeks.org/count-number-of-squares-in-a-rectangle/