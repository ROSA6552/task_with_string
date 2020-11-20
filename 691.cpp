#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string chars = ("ABCEHKMOPTXY");
    string numbers = ("0123456789");
    string num;

    int found[6], n;
    in >> n;
    string nums[50];
    for (int i = 0; i < n; i++)
        in >> nums[i];

    for (int j = 0; j < n; j++) {
        num = nums[j];

        for (int i = 0; i < 6; i++)
            found[i] = -1;

        found[0] = chars.find(num[0]);
        for (int i = 1; i <= 3; i++) {
            found[i] = numbers.find(num[i]);
        }
        for (int i = 4; i <= 5; i++) {
            found[i] = chars.find(num[i]);
        }

        int success = 0;
        for (int i = 0; i < 6; i++) {
            if (found[i] != -1)
                success += 1;
        }

        if (success == 6)
            out << "Yes" << endl;
        else
            out << "No" << endl;
    }

    return 0;
}
