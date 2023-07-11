#include <bits/stdc++.h>
using namespace std; 

int n; 
vector<int> permutation; 

void search(bool *chosen){
    if(permutation.size() == n){				
        for(auto i : permutation){
            cout << i << " "; 
        }
        cout << "\n"; 
        cout.flush(); // Flush the output stream
    }
    else{
        for(int i = 1; i <= n; i++){
            if(chosen[i]) continue; 
            chosen[i] = true; 
            permutation.push_back(i); 
            search(chosen); 
            chosen[i] = false; 
            permutation.pop_back();
        }
    }
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 

    cin >> n; 
    bool chosen[n] = {false}; 
    search(chosen); 

    return 0; 
}

