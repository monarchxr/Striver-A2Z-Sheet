#include<bits/stdc++.h>
using namespace std;
//input array = [1,2,1,3,2]
//queries = [1,3,4,2,10]

int main(){
    int n;
    cin >> n;

    //making input vector

    vector<int> v(n,0);

    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int sz = *max_element(v.begin(), v.end());

    //making hash vector

    vector<int> hash(sz,0);

    for(int i = 0; i<n; i++){
        hash[v[i]]++;
    }

    //making queries

    int q;
    cin >> q;

    while(q--){
        int z;

        cin >> z;

        if(z>sz){
            cout << 0 << endl;
            continue;
        }

        cout << hash[z] << endl;
    }
}