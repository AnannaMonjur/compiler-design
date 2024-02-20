#include <iostream>
#include <string>

using namespace std;

bool isValidVariableName(const string& name) {

    if (name.empty()) {
        cout << "Variable name cannot be empty.\n";
        return false;
    }


    if (!(name[0] >= 'a' && name[0] <= 'z') && !(name[0] >= 'A' && name[0] <= 'Z') && name[0] != '_') {
        cout << "Variable name must start with a letter or underscore.\n";
        return false;
    }


    for (char c : name) {

        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_')) {
            cout << "Invalid character in variable name: '" << c << "'\n";
            return false;
        }
    }


    if (name == "int" || name == "char" || name == "double" || name == "float" || name == "if" ||
        name == "else" || name == "while" || name == "for" || name == "return" || name == "class") {
        cout << "The name '" << name << "' is a reserved keyword.\n";
        return false;
    }


    return true;
}

int main() {
    string input;
    cout << "Enter a variable name: ";
    cin >> input;

    if (isValidVariableName(input)) {
        cout << "The name '" << input << "' is a valid variable name. "<<endl;
    }
    else
    {
        cout<<"\n";
        cout<<"The name '" << input << "' is  not a valid variable name. "<<endl;
    }
}
