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

    string removeCharacter(char ch) {
        string result = "";
        for (int i = 0; i < str.length(); ++i) {
            if (str[i] != ch) {
                result += str[i];
            }
        }
        return result;
    }
};

int main() {
    StringManipulator sm;
    string input;
    char charToRemove;

    cout << "Enter the string: ";
    getline(cin, input);
    sm.setString(input);

    cout << "Enter the character to remove: ";
    cin >> charToRemove;

    string updatedString = sm.removeCharacter(charToRemove);

    cout << "Updated string: " << updatedString << endl;

    return 0;
}
