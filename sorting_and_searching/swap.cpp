#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

void swap(ll *arr, ll pos1, ll pos2){
		ll temp = arr[pos1]; 
		arr[pos1] = arr[pos2]; 
		arr[pos2] = temp; 
}

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n, m; cin >> n >> m; 
		ll x[n]; 
		for(ll i = 0; i < n; i++){
				ll a; cin >> a; 
				x[a - 1] = i; 
		}
		for(auto i : x){
				cout << i << " "; 
		}
		cout << "\n";
		for(ll j = 0; j < m; j++){
				ll a, b; cin >> a >> b; 
				swap(x, a - 1, b - 1);
				for(auto i : x){
						cout << i << " "; 
				}
				cout << "\n";  
		}
		return 0; 
}


