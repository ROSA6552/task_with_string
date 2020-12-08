#include "iostream"
#include "fstream"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    int pal;
    int r1, r2, p2;
    in >> pal;
    r1 = pal % 10;
    r2 = pal % 100 / 10;
    pal /= 100;
    p2 = r1 * 10 + r2;
    if (pal == p2)
        out << "YES";
    else
        out << "NO";

    return 0;
}
