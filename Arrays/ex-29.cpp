#include <iostream>
using namespace std;

void pascalTri(int n) {
    int c[50][50], i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1 - i; ++j)
            cout << " ";  // Use '<<' instead of '>>'
        for (j = 0; j <= i; ++j) {
            if (j == 0 || j == i)
                c[i][j] = 1;
            else
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
            cout << c[i][j] << " ";  // Use '<<' instead of '>>'
        }
        cout << "\n";  // Use '<<' instead of '>>'
    }
}

int main() {
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;
    pascalTri(n);
    return 0;
}
