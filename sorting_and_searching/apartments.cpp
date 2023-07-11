#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n, m, k; cin >> n >> m >> k; 
		ll a[n], b[m]; 

		for(auto &i : a){
				cin >> i; 
		}
		sort(a, a + n); 

		for(auto &i : b){
				cin >> i; 
		}
		sort(b, b + m); 

		ll a_pos = 0, cnt = 0; 

		for(ll i = 0; i < m; i++){
				for(ll j = a_pos; j < n; j++){
						if(b[i] >= (a[j] - k) and b[i] <= (a[j] + k)){
								cnt++; 
								a_pos = j + 1; 
								break; 
						}
						else if(b[i] < a[j] - k){
								break; 
						}
				}
		}

		cout << cnt << "\n"; 

		return 0; 
}
