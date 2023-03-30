#include <bits/stdc++.h>
using namespace std; 

int cnt = 0; 
int n = 8; 
bool a[8][8] = {0}; 
bool col[8] = {0};
bool diag1[15] = {0};
bool diag2[15] = {0};

void search (int y){
		if(y == n){
				cnt++; 
				return; 
		}	
		for(int x = 0; x < n; x++){
				if(col[x] || diag1[x + y] || diag2[x - y + n - 1] || a[y][x]) continue; 
				col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1; 
				search(y + 1); 
				col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0; 
		}
}

int main(){
		ios::sync_with_stdio(false); 
		cin.tie(nullptr); 

		for(int i = 0; i < 8; i++){
				for(int j = 0; j < 8; j++){
						char s; 
						cin >> s; 
						if(s == '.'){
								a[i][j] = 0; 
						}
						else a[i][j] = 1; 
				}
		}
		
		search(0); 
		cout << cnt << "\n"; 

		return 0; 
}
