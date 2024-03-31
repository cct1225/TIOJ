#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<long long>v;
        for(int i=0;i<n;i++)
        {
            long long num;
            cin>>num;
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
