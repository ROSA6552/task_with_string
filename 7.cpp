#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    string a, b, c;
    cin >> a >> b >> c;
    if (a.size() > b.size()) {
        if (a.size() > c.size())
            cout << a;
        else if (c.size() > a.size())
            cout << c;
        else if (a == c)
            cout << a;
        else {
            for (int i = 0; i < a.size(); i++) {
                if (a[i] - '0' > c[i] - '0') {
                    cout << a;
                    break;
                }
                if (c[i] - '0' > a[i] - '0') {
                    cout << c;
                    break;
                }

            }
        }
    }
    else if (b.size() > a.size()) {
        if (b.size() > c.size())
            cout << b;
        else if (c.size() > b.size())
            cout << c;
        else if (b == c)
            cout << b;
        else {
            for (int i = 0; i < b.size(); i++) {
                if (b[i] - '0' > c[i] - '0') {
                    cout << b;
                    break;
                }
                if (c[i] - '0' > b[i] - '0') {
                    cout << c;
                    break;
                }
            }
        }
    }
    else if (a == b)
        cout << a;
    else {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] - '0' > b[i] - '0') {
                cout << a;
                break;
            }
            if (b[i] - '0' > a[i] - '0') {
                cout << b;
                break;
            }
        }
    }

    return 0;
}
