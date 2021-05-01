//#include <iostream>
//using namespace std;
//
//void Bool(int k,int n)
//{
//   char a[n];
//   if(k>n)
//   
//   {
//       for(int m=1;m<=n;m++)
//        cout<<a[m];
//   }
//   else
//   {
//      a[k]='1';
//      Bool(k+1,n);
//      a[k]='0';
//      Bool(k+1,n);
//   }
//}
//int main()
//{
//    int n;
//    cout<<"Enter a number : ";
//    cin>>n;
//    
//    Bool(1,n);
//    return 0;
//}
#include <iostream>

using namespace std;

int boolP(char array[], int k , int n)
{
    if( k > n)
    {
        for(int i=0;i<=n;i++){
            cout << array[i];
        }
    }
    else
    {
    array[k]='T';
    boolP(array,k+1,n);
    array[k]='F';
    boolP(array,k+1,n);

    }
    return 0;

}

int main()
{
    int n;
    char array[5];
    cout<<"Enter Number of boolean variables: "<<endl;
    cin>> n;
    boolP(array,1,n);
}
