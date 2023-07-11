#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n, m; cin >> n >> m; 
		multiset<ll> h; 
		for(int i = 0; i < n; i++){
				ll x; cin >> x; 
				h.insert(x);
		}
		for(ll i = 0; i < m; i++){
				ll x; cin >> x;
				auto it = h.lower_bound(x); 
				if(x < *h.cbegin()){
						cout << "-1\n";
				}
				else{
						if(*it == x){
								cout << *it << "\n"; 
								h.erase(it); 
						}
						else{
								if(it != h.cbegin()){
										cout << *(--it) << "\n"; 
										h.erase(it); 
								}
								else{
										cout << "-1\n"; 
								}
						}
				}
		}

		return 0; 
}

