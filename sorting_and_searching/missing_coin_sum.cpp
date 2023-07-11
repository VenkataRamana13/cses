#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n; cin >> n; 
		ll a[n]; 
		for(auto &i : a){
				cin >> i;
		}
		sort(a, a + n); 
		ll res = 1; 
		for(ll i = 0; i < n and a[i] <= res; i++){
				res += a[i]; 
		}
		cout << res << "\n"; 

		return 0; 
}
