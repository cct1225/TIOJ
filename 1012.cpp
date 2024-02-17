#include<iostream>
#include<stack>
#include<vector>
#define Y yes
#define N no
using namespace std;
int main()
{
    int n,contain;
    stack<int>station;
    stack<int>maintain;
    int ans[100];
    cin>>n>>contain;
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }
    while(1)
    {
        int record=0;
        for(int i=0;i<n;i++)
        {
            station.push(i+1);
            if(station.top()==ans[record])
            {
                record++;
                station.pop();
            }
            else
            {
                
            }
        }
    
    


    }
}