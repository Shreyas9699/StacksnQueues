/*
Given an expression string exp. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” and 'not balanced' for exp = “[(])”
*/


#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    stack <char> stk;
    char x;
    for(auto i: s){
        if( i=='(' || i=='{' || i == '['){
            stk.push(i);
            continue;
        }
        
        if(stk.empty()) return false;
        
        switch(i){
            case ')':
            x = stk.top(); 
            stk.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
            case '}': 
            x = stk.top(); 
            stk.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
  
            case ']':
            x = stk.top(); 
            stk.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
            }
    }
    return stk.empty();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        if(check(s)) cout<<"balanced"<<endl;
        else cout<<"not balanced"<<endl;
    }
    return 0;
}