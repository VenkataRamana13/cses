#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n, x; cin >> n >> x; 

		ll a[n]; 
		for(auto &i : a){
				cin >> i; 
		}		

		sort(a, a + n); 

		ll cnt = 0, j_pos = n - 1; 

		bool b[n] = {false}; 

		for(ll i = 0; i < n; i++){
				if(b[i] == true) break; 
				for(ll j = j_pos; j > i; j--){
						if(a[i] + a[j] <= x){
								b[j] = true; 
								b[i] = true; 
								cnt++; 	
								j_pos = j - 1; 
								break; 
						}
						else{
								if(a[j] > x) b[j] = true; 
								else{
										cnt++; 
										b[j] = true;
								}
						}
				}
				if(a[i] <= x and b[i] == false){
						cnt++; 
				}	
		}

		cout << cnt << "\n"; 

		return 0; 
}
