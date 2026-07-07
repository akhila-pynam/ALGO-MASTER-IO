#include <bits/stdc++.h>
using namespace std;

int logarth(int n, vector<int>& arr, int target){
    
    int left = 0;
    int right = n-1;

    int cnt = 0;

    while(left <= right){

        int mid = (left+right)/2;
        // 0 + 15 / 2 = 7 
        // mid = nums[7] = 23
         
        if(arr[mid] <= target){
            cnt++;
            left = mid + 1;
        }    

        else right = mid - 1;

    }

    return cnt;
}

int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int logAns = logarth(n, arr, target);
    cout << logAns;

    return 0;

}


// INPUT :

// 16
// 2 5 8 11 14 17 20 23 26 29 32 35 38 41 44 47
// 35

// OUTPUT : 2 ( completed in 2 steps )

// // log2(n) = ? ( total steps )  -> log2(16) = 4 ( fewer steps left ), Therefore TC : log_2(n) or log_10(n) => simply log n 