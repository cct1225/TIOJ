#include <iostream>
using namespace std;
int main(){
    int a,b=1;
    cin>>a;
    while(a>=b*2){
            b*=2;
    }
    cout<<(a-b)*2+1;
    return 0;
}