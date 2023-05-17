#include <iostream>
#include <cmath>
using namespace std;


void task1() {
    int n = 100000;
    int m = 2147483648;
    int c = 1;
    int a = 69069;
    unsigned int x = 0;
    int gr1 = 0, gr2 = 0, gr3 = 0, gr4 = 0, gr5 = 0, gr6 = 0, gr7 = 0, gr8 = 0, gr9 = 0, gr10 = 0;
    unsigned int xn = 15;
    for (int i = 0; i < n; i++) {
        x = (a * xn + c) % m;
        xn = x;
        if (x >= 0 && x < 214748364) {
            gr1++;
        }
        if (x >= 214748364 && x < 429496728) {
            gr2++;
        }
        if (x >= 429496728 && x < 644245092) {
            gr3++;
        }
        if (x >= 644245092 && x < 858993456) {
            gr4++;
        }
        if (x >= 858993456 && x < 1073741820) {
            gr5++;
        }
        if (x >= 1073741820 && x < 1288490184) {
            gr6++;
        }
        if (x >= 1288490184 && x < 1503238548) {
            gr7++;
        }
        if (x >= 1503238548 && x < 1717986912) {
            gr8++;
        }
        if (x >= 1717986912 && x < 1932735276) {
            gr9++;
        }
        if (x >= 1932735276 && x <= 2147483647) {
            gr10++;
        }
    }
    cout << gr1 << endl;
    cout << gr2 << endl;
    cout << gr3 << endl;
    cout << gr4 << endl;
    cout << gr5 << endl;
    cout << gr6 << endl;
    cout << gr7 << endl;
    cout << gr8 << endl;
    cout << gr9 << endl;
    cout << gr10 << endl;
}

void task2() {
    int arr[31];
    int temp[31];
    arr[0] = 1;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 1;
    arr[4] = 0;
    arr[5] = 1;
    arr[6] = 1;
    int p = 7, q = 3, a = 0;
    int gr1 = 0, gr2 = 0, gr3 = 0, gr4 = 0, gr5 = 0, gr6 = 0, gr7 = 0, gr8 = 0, gr9 = 0, gr10 = 0;
    unsigned int x = 0;
    for (int i = 0; i < 100000; i++) {
        x = 0;
        for (int j = 7; j < 31; j++) {
            arr[j] = arr[j - p] ^ arr[j - q];
        }
        for (int j = 0; j < 31; j++) {
            if(arr[j] > 0)
                 x = x +  pow(2, j);
        }
        if (x >= 0 && x < 214748364) {
            gr1++;
        }
        if (x >= 214748364 && x < 429496728) {
            gr2++;
        }
        if (x >= 429496728 && x < 644245092) {
            gr3++;
        }
        if (x >= 644245092 && x < 858993456) {
            gr4++;
        }
        if (x >= 858993456 && x < 1073741820) {
            gr5++;
        }
        if (x >= 1073741820 && x < 1288490184) {
            gr6++;
        }
        if (x >= 1288490184 && x < 1503238548) {
            gr7++;
        }
        if (x >= 1503238548 && x < 1717986912) {
            gr8++;
        }
        if (x >= 1717986912 && x < 1932735276) {
            gr9++;
        }
        if (x >= 1932735276 && x <= 2147483647) {
            gr10++;
        }
        a = 0;
        for (int j = 0; j < 31; j++) {
            temp[j] = arr[j];
        }
        for (int j = 24; j < 31; j++) {
            arr[a] = temp[j];
            a++;
        }
    }
    cout << endl;
    cout << gr1 << endl;
    cout << gr2 << endl;
    cout << gr3 << endl;
    cout << gr4 << endl;
    cout << gr5 << endl;
    cout << gr6 << endl;
    cout << gr7 << endl;
    cout << gr8 << endl;
    cout << gr9 << endl;
    cout << gr10 << endl;
}

int main()
{
    task1();
    task2();
}

