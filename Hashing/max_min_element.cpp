#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n){

    vector<bool> visited(n, 0);

    int maxfreq = 0;
    int minfreq = n;

    int maxele = 0, minele = 0;

    for(int i = 0; i<n; i++){

        if(visited[i]==1){
            continue;
        }

        int count = 1;

        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                visited[j]=1;
                count++;
            }
        }

        if(count > maxfreq){
            maxfreq = count;
            maxele = arr[i];
        }

        if(count < minfreq){
            minfreq = count;
            minele = arr[i];
        }
    }

    cout << "Highest frequency element: " << maxele << "\n";
    cout << "Lowest frequency element: " << minele << "\n";
}

int main(){

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: " << endl;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    frequency(arr,n);

}