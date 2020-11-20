#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string str;
    string arrow;
    string answer1 = ">>-->";
    string answer2 = "<--<<";
    int count = 0;
    in >> str;
    for (int i = 0; i < str.size() - 4; i++)
    {
        arrow = str.substr(i,5);
        if (arrow == answer1 || arrow == answer2)
        {
            count++;
            i += 3;
        }
    }
    out << count;

    return 0;
}
