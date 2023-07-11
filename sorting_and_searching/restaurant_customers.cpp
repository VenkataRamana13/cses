#include <bits/stdc++.h>
using namespace std; 

using ll = long long; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		ll n; cin >> n; 
		multiset<pair<ll, bool>> time; 
		ll cnt = 0, Max = 0;
		for(ll i = 0; i < n; i++){
				ll arr, dep; 
				cin >> arr >> dep; 
				time.insert({arr, 1}); 
				time.insert({dep, 0});
		}	
		for(auto it : time){
				if(it.second == 0){
						cnt--; 
				}
				else{
						cnt++; 
				}
				Max = max(Max, cnt);	
		}	
		cout << Max << "\n";

		return 0; 
}
