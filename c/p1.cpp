//given array of integers, check if target sum 't' is possible or not and print the elements that make up the sum
//eg: a[] = {1,2,3,4,5}, target (t)= 7
//output: 2 5 (alternatively - 3 4)

#include<bits/stdc++.h>
using namespace std;

void checkSum(int a[], int n, int t){
    bool table[n+1][t+1];
    for(int j=1;j<=t;j++){
        table[0][j] = false;
    }
    for(int i=0;i<=n;i++){
        table[i][0] = true;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=t;j++){
            if(j < a[i-1]){
                table[i][j] = table[i-1][j];
            }
            else{
                table[i][j] = table[i-1][j] || table[i-1][j-a[i-1]];
            }
        }
    }
    if(!table[n][t]){
        cout << "Not possible" << endl;
    }
    else{
        vector<int> ans;
        while(n >0 && t>0){
            while(table[n][t]){
                n--;
            }
            if(table[n][t-a[n-1]]){
                ans.push_back(a[n-1]);
                t -= a[n-1];
            }
        }

        for(auto i:ans){
            cout << i << " ";
        }
    }
}

int main(){
    int n, t;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "target: ";
    cin >> t;

    checkSum(a, n, t);
}
