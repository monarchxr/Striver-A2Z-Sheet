#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
    
    int n = arr.size();
    
    for(int i = 0;i<n-1; i++){
        int mindex = i;
        
        for(int j = i+1; j<n; j++){
            
            if(arr[j] < arr[mindex]){
                mindex = j;
            }
        }
        
        int temp = arr[mindex];
        arr[mindex] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n,0);

    cout << "Enter elements: " << endl;

    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    cout << "Before sorting: " << endl;

    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }

    cout << "\n";

    selectionSort(v);

    cout << "After sorting: " << endl;

    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
}