#include "iostream"
#include "fstream"
#include "string"

using namespace std;


bool palin (string s) {
    bool flag = true;
    for (int i = 0; i < (s.size() / 2); i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string str;
    string solve = "NO SOLUTION";
    in >> str;

    if (palin(str)){
        if (!palin(str.substr(0, str.size()-1)))
            solve = str.substr(0, str.size()-1);
    } else
        solve = str;

    out << solve;

    return 0;
}
