#include <bits/stdc++.h>
using namespace std; 
 
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
 
    long long n; cin >> n; 
 
    long long sum = n * (n + 1) / 2; 
    long long sum_each = sum / 2; 
    
    if(sum % 2){
        cout << "NO\n"; 
        exit(0);
    }
 
    else {
        bool count[n] = {0}; 
        long long sum_local = 0; 
        for(long long i = n; i >= 1; i--){
            if(sum_local == sum_each){
                cout << "YES\n"; 
                long long cnt = 0; 
                for(long long j = 0; j < n; j++){
                    if(count[j]){
                        cnt++; 
                    }
                }
                cout << cnt << "\n"; 
                for(long long j = 0; j < n; j++){
                    if(count[j]){
                        cout << j + 1 << " "; 
                    }
                }
                cout << "\n"; 
                cout << n - cnt << "\n"; 
                for(long long j = 0; j < n; j++){
                    if(!count[j]){
                        cout << j + 1 << " "; 
                    }
                }
                exit(0);
            }
            else if (sum_local < sum_each){
                if(sum_local + i <= sum_each){
                    count[i - 1] = true;  
                    sum_local += i; 
                    if(sum_local == sum_each){
                        cout << "YES\n"; 
                        long long cnt = 0; 
                        for(long long j = 0; j < n; j++){
                            if(count[j]){
                                cnt++; 
                            }
                        }
                        cout << cnt << "\n"; 
                        for(long long j = 0; j < n; j++){
                            if(count[j]){
                                cout << j + 1 << " "; 
                            }
                        }
                        cout << "\n"; 
                        cout << n - cnt << "\n"; 
                        for(long long j = 0; j < n; j++){
                            if(!count[j]){
                                cout << j + 1 << " "; 
                            }
                        }
                        exit(0);
                    } 
                }
            }
        }
    }
    cout << "NO\n"; 
}
