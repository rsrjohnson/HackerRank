//https://www.hackerrank.com/challenges/s10-weighted-mean/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    double s=0,k,t;
    vector<double> vn;

    int n;

    cin>>n;

    for (int i=0; i<n; i++) {
    cin>>k;
    vn.push_back(k);
    }

    for (int i=0; i<n; i++) {
    cin>>k;
    s+=k;
    t+=k*vn[i];
    }


    cout<<setprecision(1)<<fixed<<t/s;

    return 0;
}
