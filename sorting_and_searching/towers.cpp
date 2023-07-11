#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n; cin >> n; 
		ll a[n]; cin >> a[0];  
		ll cnt = 1, prev = a[0];
		for(int i = 1; i < n; i++){
				cin >> a[i]; 
				if(a[i] >= prev){
						prev = a[i]; 	
						cnt++;
				}
		}
		cout << cnt << "\n";

		return 0; 
}
