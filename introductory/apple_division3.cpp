#include <bits/stdc++.h>
using namespace std;

int n;
vector<long long> subset;
long long sum = 0, diff = INT_MAX;

void search(int k, vector<long long>& v){
    if(k == n + 1){
        long long sum_local = 0, sum_local_2 = 0;
        for(auto i : subset){
            sum_local += i;
        }
        sum_local_2 = sum - sum_local;
        diff = min(diff, abs(sum_local - sum_local_2));
    }
    else{
        subset.push_back(v[k - 1]);
        search(k + 1, v);
        subset.pop_back();
        search(k + 1, v);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<long long> v;
    for(int i = 0; i < n; i++){
        long long a; cin >> a;
        sum += a;
        v.push_back(a);
    }

    search(1, v);

    cout << diff << "\n";

    return 0;
}

