//https://www.hackerrank.com/challenges/s10-interquartile-range/problem

#include <cmath>
#include <cstdio>
#include <ios>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;


double md(vector<double> v, int n);

int main() {
    int n, k, t;
    vector <double> v,hold;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        hold.push_back(k);
    }

    k=0;
    for (int i = 0; i < n; i++) {
        
        cin>>t;
        k+=t;
        while (t--)
        {
            v.push_back(hold[i]);
        }            
        
    }

    sort(v.begin(), v.end());
    n=k;
    if (n % 2)
    {
        vector<double> v1(v.begin(), v.begin() + n / 2);
        vector<double> v2(v.begin() + n / 2 + 1, v.end());
        
        double iq1 = md(v1, n / 2);
        double iq2 = md(v2, n / 2);
        cout <<fixed <<setprecision(1) <<iq2-iq1 << endl;
        
    }
    else
    {
        vector<double> v1(v.begin(), v.begin() + n / 2);
        vector<double> v2(v.begin() + n / 2 , v.end());
        
        double iq1 = md(v1, n / 2);
        double iq2 = md(v2, n / 2);
        cout <<fixed<<setprecision(1)<< iq2-iq1 << endl;
    }
    
    return 0;
}

double md(vector<double> v, int n)
{
    if (n % 2)
    {
        return v[n / 2];
    }
    else {
        return (v[n / 2 - 1] + v[n / 2]) / 2;
    }
}
