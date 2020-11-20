#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string str;
    string numbers = "0123456789";
    in >> str;

    int found;
    int count = 0;
    int strl = 0;
    for (int i = 0; i < str.size(); i++) {
        found = -1;
        found = numbers.find(str[i]);
        if (found != -1){
            count++;
        } else {
            if (count == 0) {
                if (strl = 40) {
                    out << endl;
                    strl = 0;
                }
                out << str[i];
                strl++;
            }
            if (count == 1)
                for (int j = 0; j < str[i-1] - '0'; j++) {
                    if (strl = 40) {
                        out << endl;
                        strl = 0;
                    }
                    out << str[i];
                    strl++;
                }
            if (count == 2)
                for (int j = 0; j < ((str[i-2] - '0') * 10 + str[i-1] - '0'); j++) {
                    if (strl = 40) {
                        out << endl;
                        strl = 0;
                    }
                    out << str[i];
                    strl++;
                }
            count = 0;
        }
    }

    return 0;
}
