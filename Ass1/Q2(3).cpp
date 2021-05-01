#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
void printUnion(int arr1[], int arr2[], int m, int n) 
{ 
  int i = 0, j = 0; 
  while (i < m && j < n) 
  { 
    if (arr1[i] < arr2[j]) 
       cout << arr1[i++] << " "; 
      
    else if (arr2[j] < arr1[i]) 
       cout << arr2[j++] << " "; 
      
    else
    { 
       cout << arr2[j++] << " "; 
       i++; 
    } 
  } 
  
  /* Print remaining elements of the larger array */
  while(i < m) 
     cout << arr1[i++] << " "; 
  
  while(j < n) 
    cout << arr2[j++] << " "; 
} 
void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
	
int main() {
		int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++)
	cin>>arr1[i];
	for(int i=0;i<m;i++)
	cin>>arr2[i];
	printUnion(arr1,arr2,n,m);
	intersection(arr1,arr2,n,m);
}
