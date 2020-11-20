#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string list = "abcdefghigklmnopqrstuvwxyz", bin, c;
    cin >> bin;

    int n = 0;
    for (int i = 0; i < bin.size(); i++) {
        if (bin[i] == '0')
            n++;
        else {
            c.append(list.substr(n,1));
            n = 0;
        }
    }

    cout << c;

    return 0;
}
