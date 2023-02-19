#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the values of array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;

    sort(arr.begin(), arr.end(), greater<int>());

    map<int,int> mp;
    for(int i=0; i<n; i++){
        if(x < 1){
            break;
        }
        else{
            if(x < arr[i]){
                continue;
            }
            else{
                mp[arr[i]]++;
                x -= arr[i];
                i--;
            }
        }
    }

    map<int,int> :: iterator it;
    for(it = mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    return 0;
}