#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    n %= 4;
    puts((n == 0 || n == 3) ? "0" : "1");

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long num;
    cin >> num;
    long long sum = (num * (num + 1) / 2) * 1ll;
    cout << (1 & sum) << endl;
    return 0;
}
*/
