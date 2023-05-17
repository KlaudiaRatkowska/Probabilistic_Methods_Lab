#include <iostream>

using namespace std;

void task1() {
    int n = 100000;
    double r;
    int arr[100000];
    int rand1 = 0, rand2 = 0, rand3 = 0, rand4 = 4;
    for (int i = 0; i < n; i++) {
        r = (float)rand() / RAND_MAX;
        if (r < 0.2) {
            arr[i] = 1;
            rand1++;
        }
        else if (r < 0.6) {
            arr[i] = 2;
            rand2++;
        }
        else if (r < 0.9) {
            arr[i] = 3;
            rand3++;
        }
        else {
            arr[i] = 4;
            rand4++;
        }
    }
    cout << rand1 << endl;
    cout << rand2 << endl;
    cout << rand3 << endl;
    cout << rand4 << endl;
}

void task2() {
    double r;
    int y = 0;
    int cont[10];
    for (int i = 0; i < 10; i++) {
        cont[i] = 0;
    }
    for (int i = 0; i < 100000; i++) {
        r = (float)rand() / RAND_MAX;
        y = 100 * r + 50;
        if (y < 60)
            cont[0]++;
        else if (y < 70)
            cont[1]++;
        else if (y < 80)
            cont[2]++;
        else if (y < 90)
            cont[3]++;
        else if (y < 100)
            cont[4]++;
        else if (y < 110)
            cont[5]++;
        else if (y < 120)
            cont[6]++;
        else if (y < 130)
            cont[7]++;
        else if (y < 140)
            cont[8]++;
        else if (y < 150)
            cont[9]++;
    }
    for (int i = 0; i < 10; i++) {
        cout << cont[i] << endl;
    }
}

int main()
{
    cout << "Task 1: " << endl;
    task1();
    cout << endl;
    cout << "Task 2: " << endl;
    task2();
}

