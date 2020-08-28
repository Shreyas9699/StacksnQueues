/*
Given an input stream of N characters consisting only of lower case alphabets. 
The task is to find the first non repeating character, each time a character is inserted to the stream. 
If no non repeating element is found print -1.
*/


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
        vector<char> vec(n);
        int m;
        for(int i = 0; i<n; i++)
            cin>>vec[i];
        queue<char> q;
        vector<char> fre(26,0);
        for(auto i: vec){
            fre[i-'a']++;
            q.push(i);
            while(!q.empty()){
                if(fre[q.front()-'a']>1) q.pop();
                else{
                    cout<<q.front()<<" ";
                    break;
                }
            }
            if(q.empty()) cout<<"-1 ";
        }
        cout<<endl;
    }
    return 0;
}