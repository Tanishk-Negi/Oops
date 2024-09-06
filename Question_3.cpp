#include <iostream>
#include <string>
using namespace std;

class StringManipulator {
private:
    string str;

public:
    void setString(string s) {
        str = s;
    }

    string getString() {
        return str;
    }

    string findNonRepeatingCharacters() {
        int freq[256] = {0};
        string result = "";

        for (char ch : str) {
            freq[ch]++;
        }

        for (char ch : str) {
            if (freq[ch] == 1) {
                result += ch;
                result += " ";
            }
        }

        return result;
    }
};

int main() {
    StringManipulator sm;
    string input;

    cout << "Enter the string: ";
    getline(cin, input);
    sm.setString(input);

    string nonRepeatingChars = sm.findNonRepeatingCharacters();

    cout << "Non-repeating characters: " << nonRepeatingChars << endl;

    return 0;
}
