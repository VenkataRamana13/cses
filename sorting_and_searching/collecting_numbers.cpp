#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n; cin >> n; 
		ll x[n]; 
		for(ll i = 0; i < n; i++){
				ll a; cin >> a; 
				x[a - 1] = i; 
		}
		ll cnt = 1;
		for(ll i = 1; i < n; i++){
				if(x[i] > x[i - 1]){
						continue; 
				}
				else{
						cnt++;
				}
		}
		cout << cnt << "\n"; 

		return 0; 
}
