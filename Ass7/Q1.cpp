#include<bits/stdc++.h>
using namespace std;

struct MyHash{
    int Bucket;
    list<int> *table;
    MyHash(int b) {
        Bucket=b;
        table=new list<int> [Bucket];
        
    }
    int hash(int key) {
            return key%Bucket;
        }
        bool search(int key) {
            int i=hash(key);
            for(auto x:table[i])
            if(x==key){
                cout<<"Key found at"<<key<<"\n"; 
            return true;
            }
else {
    cout<<"Key not found";
 return false;
}
           
        }
        void insert(int key) {
            int i=hash(key);
            table[i].push_back(key);
            cout<<"Inserted at "<<key<<"\n";
        }
        void remove(int key) {
            int i=hash(key);
            table[i].remove(key);
            cout<<"Key removed from"<<key<<"\n";
        }
};
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
int main() {
    
    MyHash h1(3);
    h1.insert(10);
    h1.insert(20);
    h1.insert(30);
  
   cout<<endl;
   cout<<h1.search(10)<<"\n";
   h1.remove(30);
   cout<<endl;
}

