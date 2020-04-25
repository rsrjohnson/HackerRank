//https://www.hackerrank.com/challenges/s10-basic-statistics/problem

#include <cmath>
#include <cstdio>
#include <fstream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;

int main() {
    vector<double> v;

    double mean = 0, median, mode;

    int count[100000] = { 0 };

    int n, k = 0;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> k;

        mean += k;

        count[k - 1]++;
    }

    int m = 0, ind;

    for (int i = 0; i < 100000; i++)
    {
        if (count[i] > m)
        {
            m = count[i];
            ind = i + 1;
        }
        if (count[i] > 0) {
            int t = count[i];
            while (t--)
            {
                v.push_back(i+1);
            }

        }

    }



    cout << setprecision(1) << fixed << mean / (double)n << endl;

    if (n % 2)
    {
        cout << v[n / 2] << endl;
    }
    else {
        cout << (v[n / 2 - 1] + v[n / 2]) / 2 << endl;
    }

    cout << ind << endl;

    return 0;
}
