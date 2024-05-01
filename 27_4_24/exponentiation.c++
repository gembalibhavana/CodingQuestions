#include <bits/stdc++.h>


using namespace std;
using lli=long long int;
int binaryExp(lli a,lli b,lli c)
{
    
    
    lli x=a;
    lli ans=1;
    while(b!=0){
        if(b%2==1){
            ans=(ans*x)%c;
        }
        x=(x*x)%c;
        b=b/2;
    }
  
    return ans;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<binaryExp(a,b,1e9+7)<<endl;
    return 0;
}
