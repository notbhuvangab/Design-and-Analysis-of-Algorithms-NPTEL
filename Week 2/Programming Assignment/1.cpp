#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int strToNum(string s,map<char,int> mp);
int mostFrequent(vector<int> arr,int n) { 
    sort(arr.begin(),arr.end()); 
  
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  
    return res; 
} 

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m;
    cin>>m;

    vector<string> str(m);
    map<char,int> mp;
    vector<int> vec;
    mp['a'] = 2;
    mp['b'] = 2;
    mp['c'] = 2;
    mp['d'] = 3;
    mp['e'] = 3;
    mp['f'] = 3;
    mp['g'] = 4;
    mp['h'] = 4;
    mp['i'] = 4;
    mp['j'] = 5;
    mp['k'] = 5;
    mp['l'] = 5;
    mp['m'] = 6;
    mp['n'] = 6;
    mp['o'] = 6;
    mp['p'] = 7;
    mp['q'] = 7;
    mp['r'] = 7;
    mp['s'] = 7;
    mp['t'] = 8;
    mp['u'] = 8;
    mp['v'] = 8;
    mp['w'] = 9;
    mp['x'] = 9;
    mp['y'] = 9;
    mp['z'] = 9;
    
    
    for(int i=0;i<m;i++){
        cin>>str[i];
    }

    for(int i=0;i<m;i++){
        vec.push_back(strToNum(str[i],mp));
    }

    cout<<mostFrequent(vec,m)<<"\n";
    
}

int strToNum(string s,map<char,int> mp){
    int num = 0;
    for(int i=0;i<s.length();i++){
        num = num*10 + mp[s[i]];
    }
    return num;
}
