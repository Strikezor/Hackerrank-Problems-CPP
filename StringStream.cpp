#include <sstream>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> ans;
    stringstream s(str);
    int i;
    char ch;
    
    while(s>>i)
    {
        ans.push_back(i);
        s>>ch;
    }
    
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
