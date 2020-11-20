#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string str;
    string chars = "QWERTYUIOPASDFGHJKLZXCVBNM";
    in >> str;
    str.append("A");
    bool flag = true;
    int dif = 0;
    int index = 0;
    int found;

    found = chars.find(str[0]);
    if (found != -1) {
            for (int i = 1; i < str.size(); i++) {
                found = chars.find(str[i]);
                if (found != -1) {
                    dif = i - index;
                    index = i;
                }

                if (dif > 4 || dif == 1) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                out << "Yes";
            else
                out << "No";
    } else
        out << "No";
    return 0;
}
