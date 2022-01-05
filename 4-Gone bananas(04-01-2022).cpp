#include<bits/stdc++.h>
using namespace std;
 
 
bool isPrime(int n)
{
    if(n==1)
 
    return true;
 
    for(int i=2;i*i<=(n);i++)
 
        if(n%i==0)
 
        return false;
 
    
 
    return true;
   
}
 
string solve (int n) {
   // Your code goes here
   if(n<=3)
   return "No";
 
   if(isPrime(n))
   return "No";
   else
   return "Yes";
    
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
 
        string out_;
        out_ = solve(N);
        cout << out_;
        cout << "\n";
    }
}
Language: C++14