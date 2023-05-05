#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);  // Input the string with spaces

    // Replace spaces with hyphens ("-")
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
    str=str.append(".cpp");
    cout << "Modified string: " << str << endl;
    return 0;
}
