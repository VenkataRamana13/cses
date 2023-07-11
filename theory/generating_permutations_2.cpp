#include <bits/stdc++.h>
using namespace std; 

int n; 
vector<int> permutation; 

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    cin >> n; 
	for(int i = 1; i <= n; i++){
			permutation.push_back(i); 
	}
	do{
			for(auto i : permutation){
					cout << i << " "; 
			}
			cout << "\n"; 
	}while(next_permutation(permutation.begin(), permutation.end()));

    return 0; 
}

