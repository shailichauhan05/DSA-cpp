#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-i-1);ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
return 0;
} 


//OutPut
//5
// ABCDE
// ABCD
// ABC
// AB
// A