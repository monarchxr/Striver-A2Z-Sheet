#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    vector<int> hash(26,0);

    for(int i = 0; i<s.size(); i++){

        hash[s[i]-'a']++;  //only if whole string is in lowercase, else use v[s[i]]++

    }

    //making queries

    int q;
    cin >> q;

    while(q--){
        char z;

        cin >> z;

        cout << hash[z-'a'] << endl;
    }
}