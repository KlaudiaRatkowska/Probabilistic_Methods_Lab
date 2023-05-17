#include <iostream>
using namespace std;
#define ARR_SIZE 4

void task() {
    int n = 100000;
    double r, f;
    int arr[ARR_SIZE][ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        for (int j = 0; j < ARR_SIZE; j++) {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        r = (float)rand() / RAND_MAX;
        if (r <= 0.15) {
            arr[0][2]++;
        }
        else if (r <= 0.35) {
            f = (float)rand() / RAND_MAX;
            if (f <= 0.75)
                arr[1][0]++;
            else
                arr[1][3]++;
        }
        else if (r <= 0.55) {
            arr[2][0]++;
        }
        else {
            f = (float)rand() / RAND_MAX;
            if (f <= 0.66)
                arr[3][1]++;
            else
                arr[3][3]++;
        }
    }

    for (int i = 0; i < ARR_SIZE; i++) {
        for (int j = 0; j < ARR_SIZE; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    task();
}
