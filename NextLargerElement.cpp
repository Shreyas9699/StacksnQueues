//Given an array A of size N having distinct elements,
// the task is to find the next greater element for each element of the array in order of their appearance in the array. 
//If no such element exists, output -1


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i = 0; i<n ; i++) 
            cin>>arr[i];
        vector<long long> ans(n);
        stack<long long> s;
        for(int i = n-1 ; i>=0; i--){
            while(!s.empty() && arr[i]>=s.top()) 
                s.pop();
            ans[i] = s.empty()?-1:s.top();
            s.push(arr[i]);
        }
        for(int i = 0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}