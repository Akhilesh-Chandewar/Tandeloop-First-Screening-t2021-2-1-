#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    while(n){
        int num;
        cin>>num;
        arr.push_back(num);
        n--;
    }
    map<int,int> mp;
    int count = 0;
    for(int i=1;i<=9;i++){
        count = 0;
        for(auto it:arr){
            if(it%i == 0){
                count++;
            }
        }
        mp.insert({i,count});
    }
    cout<<"{";
    for(auto it:mp){
        cout<<it.first<<": "<<it.second<<", ";
    }
    cout<<"}";
}
