// gfg problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//permute two arrays sum every pair greater equal to k
// condition - a[i] + b[i] >= k, yes otherwise NO.
string permutetwoArrays(vector<int>&v, vector<int>& v1, int k){
    //sort v in ascending
    sort(v.begin(), v.end());
    //sort v1 in descending
    sort(v1.rbegin(), v1.rend());
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v1.size(); j++){
            if(v[i] + v[j] >= k){
                return "No";
            }
        }
    }
    return "Yes";
}

//using array

bool isPossible(int a[], int b[], int n, int k)
{
    // Sort the array a[] in increasing order.
    sort(a, a + n);

    // Sort the array b[] in decreasing order.
    sort(b, b + n, greater<int>());

    // Checking condition on each index.
    for (int i = 0; i < n; i++)
        if (a[i] + b[i] < k)
            return false;

    return true;
}

int main(){

    int n,m,k;
    cin>>n>>m;
    vector<int> v(n);
    vector<int> v1(m);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    for(int j = 0; j<m; j++){
        cin>>v1[j];
    }
    cin>>k;

    cout<<permutetwoArrays(v,v1,k);





    return 0;
}


