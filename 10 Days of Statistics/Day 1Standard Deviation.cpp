//https://www.hackerrank.com/challenges/s10-standard-deviation/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,t;

    double mean,var,s=0;
    vector<int> v;

    cin>>n;

    for (int i=0; i<n; i++) {
        cin>>t;
        s+=t;
        v.push_back(t);
    }
    
    mean=s/n;
    s=0;

    for (int i=0; i<n; i++) {
        t=v[i];
        s+=(t-mean)*(t-mean);
        
    }

    s=s/n;

    cout<< sqrt(s);

    return 0;
}