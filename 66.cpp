#include "iostream"
#include "string"
#include "fstream"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");
    char alf[] = "qwertyuiopasdfghjklzxcvbnmq";
    char c;
    in >> c;
    int i = 0;
    for (; alf[i] != c; i++) {}
    out << alf[i + 1];

    return 0;
}
