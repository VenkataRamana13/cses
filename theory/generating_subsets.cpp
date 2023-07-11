#include <bits/stdc++.h>
using namespace std; 

int n; 
vector<int> sub;

void subsets(int k){
		if(k == n + 1){
				for(auto i : sub){
						cout << i << " "; 
				}
				cout << "\n";
		}
		else{
				sub.push_back(k); 
				subsets(k + 1); 
				sub.pop_back(); 
				subsets(k + 1); 
		}
}

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		cin >> n; 
		subsets(1); 

		return 0; 
}
