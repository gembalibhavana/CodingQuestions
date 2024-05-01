#include<bits/stdc++.h>
using namespace std;

int main(){

  long long a;
  cin>>a;
  cout<<__builtin_popcount(a)<<endl;
    
  cout<<__builtin_clz(a)<<endl;
  
  cout<<__builtin_ctz(a)<<endl;
}