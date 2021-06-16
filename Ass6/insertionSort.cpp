#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n) {
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0&& arr[j]>temp) {
            arr[j+1]=arr[j];
            j--;
        }
        
        arr[j+1]=temp;
        cout<<"Step"<<i<<"\n";
        for(int i=0;i<n;i++) 
        cout<<arr[i]<<" ";
        cout<<"\n";
    }
}

int main() {
     int n;
    cin>>n;
    int arr[n];
    cout<<"Before Sorting"<<"\n";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    insertionSort(arr,n);
    cout<<"After Sorting"<<"\n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}