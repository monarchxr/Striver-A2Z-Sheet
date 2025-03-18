#include<bits/stdc++.h>
using namespace std;

void Bubblesort(vector<int>& arr){
    
    int n = arr.size();
    
    for(int i = 0; i<n-1; i++){
        
        int swapped = 0;
        
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                
                swapped = 1;
            }
        }
        
        if(swapped = 0){
            break;
        }
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

    Bubblesort(v);

    cout << "After sorting: " << endl;

    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
}