#include "iostream"
#include "fstream"
#include "string"

using namespace std;

int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");

	string chars = ("ABCDEFGHIGKLMNOPQRSTUVWXYZ");
	string str;
	string frag;
	int den = -1;
	in >> str >> frag;

    cout << chars.find(frag[0]) << endl << (chars.find(frag[0]) + 25) << endl;
	for (int j = chars.find(frag[0]); j < (chars.find(frag[0]) + 25); j++) {
        for (int i = 0; i < str.size() - frag.size(); i++) {
            if (frag == str.substr(i, frag.size())) {
                den = j%26 - chars.find(frag[0]);
                break;
            }
		}

        cout << j%26<< ": ";
		if (j >= 26) j %= 26;
        for (int i = 0; i < frag.size(); i++) {
            frag[i] = chars[chars.find(frag[i])+j%26];
            cout << frag[i] << " ";
        }
        cout << ": " << frag << endl;

        if (den != -1)
            break;
	}

    cout << den;

	return 0;
}
