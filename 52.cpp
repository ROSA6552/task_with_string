#include "iostream"
#include "fstream"
#include "cmath"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int tkt;
    int c[6];
    in >> tkt;
    for (int i = 1; i <= 6; i++) {
        c[i - 1] = tkt % (int)pow(10, i) / (int)pow(10, i-1);
        cout << c[i - 1] << endl;
    }
    if (c[0] + c[1] + c[2] == c[3] + c[4] + c[5])
        out << "YES";
    else
        out << "NO";

    return 0;
}
