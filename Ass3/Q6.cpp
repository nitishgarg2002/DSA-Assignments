 #include<iostream>

 using namespace std;  
 int n1=0,n2=1,n3; 
void fibonacci(int n){    
         
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         cout<<n3<<" ";  
         fibonacci(n-1);    
    }
}    
int main(){    
    int n;    
    cin>>n;      
    cout<<0<<" "<<1<<" ";  
    fibonacci(n-2);   
  return 0;  
 }    
