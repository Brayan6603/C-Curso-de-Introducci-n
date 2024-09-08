#include <iostream>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int P = 0; // Triángulos con lados impares
    int Q = 0; // Triángulos con lados pares

    for (int a = M; a <= N; a += 1) {
        for (int b = a; b <= N; b += 2) {
            for (int c = b; c <= N; c += 2) {
                if (a + b > c) {
                    if ((a + b + c) % 2 == 1) {
                        P++;
                    } else {
                        Q++;
                    }
                }
            }
        }
    }

    cout << P << " " << Q << endl;

    return 0;
}