#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string s1, s2;
    string chars = "QWERTYUIOPASDFGHJKLZXCVBNM";
    in >> s1 >> s2;
    int list1[26];
    for (int i = 0; i < 26; i++)
        list1[i] = 0;
    int list2[26];
    for (int i = 0; i < 26; i++)
        list2[i] = 0;

    int found;
    bool flag = true;

    if (s1.size() == s2.size()) {
        for (int i = 0; i < s1.size(); i++) {
            found = chars.find(s1[i]);
            if (found != -1)
                list1[found]++;
            found = chars.find(s2[i]);
            if (found != -1)
                list2[found]++;
        }
        for (int i = 0; i < 26; i++) {
            if (list1[i] != list2[i]) {
                flag = false;
                break;
            }
        }

        /*
        for (int i = 0; i < 26; i++) {
            cout << chars[i] << ": " << list1[i] << "   ";
            cout << chars[i] << ": " << list2[i] << '\n';
        }
        */

        if (flag)
            out << "YES";
        else
            out << "NO";
    } else
        out << "NO";

    return 0;
}
