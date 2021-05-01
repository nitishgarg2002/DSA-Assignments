[11:00, 24/03/2021] Nitish Garg: 
[11:00, 24/03/2021] Bhavik Thapar: #include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of the array : "<<endl;
	cin>>size;
	int arr1[size+1];
	cout<<"Enter the elements of the array : "<<endl;
	for(int i=0;i<size;i++)
	cin>>arr1[i];
	cout<<"The array you entered is : "<<endl;
	for(int i=0;i<size;i++)
	cout<<arr1[i]<<" ";
	cout<<endl;
	cout<<"The new array is : "<<endl;
	int temp = arr1[size-1];

	for(int i=size-1;i>0;i--)
	{
	  arr1[i]=arr1[i-1]; 
	}
	arr1[0]=temp;	
    for(int i=0;i<size;i++)
    cout<<arr1[i]<<" ";
    return 0;
	
}
