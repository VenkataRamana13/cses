#include <bits/stdc++.h>
using namespace std; 

void grey_code(vector<vector<bool>> v, int k, int n){
	int size = int(v.size()); 
	if(k == n){
			for(int i = 0; i < size; i++){
					for(int j = 0; j < k; j++){
							cout << v[i][j]; 
					}
					cout << "\n"; 
			}
			return; 
	}
	vector<vector<bool>> v_rev; 
	reverse_copy(v.begin(), v.end(), back_inserter(v_rev)); 
	for(int i = 0; i < size; i++){
			v.push_back(v_rev[i]); 
	}
	for(int i = 0; i < size; i++){
			v[i].push_back(0); 
	}
	for(int i = size; i < 2 * size; i++){
			v[i].push_back(1); 
	}
	return grey_code(v, k + 1, n);
}

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		int n; cin >> n; 
		vector<vector<bool>> v; 		
		v.push_back({0}); 
		v.push_back({1}); 
		grey_code(v, 1, n); 		

		return 0; 
}
