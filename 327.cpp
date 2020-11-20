#include "iostream"
#include "fstream"
#include "cmath"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, tkt;
    int c[6];
    in >> n;
    for (int j = 0; j < n; j++) {
        in >> tkt;

        for (int i = 1; i <= 6; i++) {
            c[i - 1] = tkt % (int)pow(10, i) / (int)pow(10, i - 1);
        }

        if ((c[0] + c[1] + c[2] == c[3] + c[4] + c[5] - 1) (c[0] + c[1] + c[2] == c[3] + c[4] + c[5] + 1) && (c[5] != 9 || c[4] != 9 || c[3] != 9)
            out << "YES" << endl;
        else
            out << "NO" << endl;
    }

    return 0;
}
