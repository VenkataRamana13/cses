#include <bits/stdc++.h>
using namespace std; 

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		string str; cin >> str; 
		sort(str.begin(), str.end()); 
		vector<string> ans; 

		do{
			ans.push_back(str); 
		}while(next_permutation(str.begin(), str.end())); 
		
		cout << int(ans.size()) << "\n"; 
		for(auto i : ans){
				cout << i << "\n"; 
		}

		return 0; 
}
