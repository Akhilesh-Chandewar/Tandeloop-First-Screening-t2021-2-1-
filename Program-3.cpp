#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2 == 0){
        n = n - 1;
    }
    int i = 1;
    while(n){
        cout<<i<<" ";
        i = i+2;
        n--;
    }
    return 0;
}