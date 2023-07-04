//Problem Link : https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int r,q;
    cin>>r>>q;
    vector<vector<int>> arr(r);
    
    
    for(int i=0;i<r;i++)
    {
        int n;
        cin>>n;
        arr[i].resize(n);
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        cout<<arr[x][y]<<endl;
    }
    
    return 0;
}
