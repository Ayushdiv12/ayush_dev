#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    // Take input of a string containing numeric digits and question marks
    cout << "Enter a string containing numeric digits and question marks: ";
    getline(cin, input);

    // Initialize variables to store the sum of digits and the count of question marks
    int sumOfDigits = 0;
    int questionMarkCount = 0;

    // Iterate through each character in the input string
    for (char ch : input) {
        // Check if the character is a digit
        if (isdigit(ch)) {
            // Convert the character to an integer and add it to the sumOfDigits
            sumOfDigits += ch - '0';
        } else if (ch == '?') {
            // If the character is a question mark, increment the questionMarkCount
            questionMarkCount++;
        }
    }

    // Output the results
    cout << "You entered: " << input << endl;
    cout << "Sum of digits: " << sumOfDigits << endl;
    cout << "Number of question marks: " << questionMarkCount << endl;

    return 0;
}
