#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void solve(const string& str) {
    int vowels = 0, consonants = 0, whitespaces = 0;

    for (char ch : str) {
        char c = tolower(ch); // convert each character to lowercase
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else if (c >= 'a' && c <= 'z')
            consonants++;
        else if (c == ' ')
            whitespaces++;
    }

    cout << "Vowels: " << vowels << "\n";
    cout << "Consonants: " << consonants << "\n";
    cout << "White Spaces: " << whitespaces << "\n";
}

int main() {
    string str = "Take u forward is Awesome";
    solve(str);
    return 0;
}
