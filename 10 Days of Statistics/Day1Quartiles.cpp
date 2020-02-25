#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

double md(vector<double> v, int n);

int main() {
    int count[100] = { 0 }, n, k, t;
    vector <double> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        count[k - 1]++;
    }

    for (int i = 0; i < 100; i++) {
        if (count[i] > 0)
        {
            t = count[i];
            while (t--) {
                v.push_back(i + 1);
            }
        }
    }

    if (n % 2)
    {
        vector<double> v1(v.begin(), v.begin() + n / 2);
        vector<double> v2(v.begin() + n / 2 + 1, v.end());
        double median = md(v, n);
        double iq1 = md(v1, n / 2);
        double iq2 = md(v2, n / 2);
        cout << iq1 << endl;
        cout << median << endl;
        cout << iq2 << endl;
    }
    else
    {
        vector<double> v1(v.begin(), v.begin() + n / 2);
        vector<double> v2(v.begin() + n / 2 , v.end());
        double median = md(v, n);
        double iq1 = md(v1, n / 2);
        double iq2 = md(v2, n / 2);
        cout << iq1 << endl;
        cout << median << endl;
        cout << iq2 << endl;
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
