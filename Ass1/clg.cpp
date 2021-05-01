#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,e,c,po,pm,pk;
	    cin>>n>>e>>c>>po>>pm>>pk;
	    vector<int> sol;
	    vector<int> arr;
	    for(int i=0;i<=n+1;i++)
	    arr.push_back(i);
	    for(int m=0;m<=n;m++){
	        int id1=lower_bound(arr.begin(),arr.end(),(2*n-e-2*m))-arr.begin();
	        int id2=upper_bound(arr.begin(),arr.end(),(c-3*m))- arr.begin()-1;
	        if(id2<id1 || id1==n+1) continue;
	        if(id2==n+1 && id2+3*m>c) continue;
	        int k;
	        if(pk>po) k=(id1<(n-m)? id1:(n-m) );
	        else 
	        k=id2<(n-m) ? id2:(n-m);
	        int o=n-k-m;
	        if(k+2*m>=2*n-e && k+3*m <=c){
	            sol.push_back(po*o+pm*m+pk*k);
	        }
	    }
	    
	    if(sol.size()==0) cout<<-1<<"\n";
	    else
	    {
	        int price=sol[0];
	    
	    for(int i=0;i<sol.size();i++)
	        if(sol[i]<price) price=sol[i];
	    cout<<price<<"\n";
	}
	}
	return 0;
}

