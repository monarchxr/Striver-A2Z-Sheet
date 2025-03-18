#include<bits/stdc++.h>
using namespace std;

void Insertionsort(vector<int> &arr){
    
    int n = arr.size();
    
    for (int i = 0; i <= n - 1; i++){
        
        int j = i;

        while (j>0 && arr[j-1] > arr[j]){
            
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;

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

    Insertionsort(v);

    cout << "After sorting: " << endl;

    for(int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
}







    