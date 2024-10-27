#include <iostream>
#include <stack>
#include <string>

int main() {
    int numTestCases;
    std::cin >> numTestCases;

    for (int i = 0; i < numTestCases; ++i) {
        int stringSize;
        std::cin >> stringSize;

        std::string colors;
        std::cin >> colors;

        std::stack<char> colorStack;

        for (char c : colors) {
            if (!colorStack.empty() && colorStack.top() == c) {
                colorStack.pop();
            } else if (!colorStack.empty()) {
                if ((colorStack.top() == 'R' && c == 'B') || (colorStack.top() == 'B' && c == 'R')) {
                    colorStack.pop();
                    if (!colorStack.empty() && colorStack.top() == 'P') {
                        colorStack.pop();
                    } else {
                        colorStack.push('P');
                    }
                } else if ((colorStack.top() == 'R' && c == 'G') || (colorStack.top() == 'G' && c == 'R')) {
                    colorStack.pop();
                    if (!colorStack.empty() && colorStack.top() == 'Y') {
                        colorStack.pop();
                    } else {
                        colorStack.push('Y');
                    }
                } else if ((colorStack.top() == 'B' && c == 'G') || (colorStack.top() == 'G' && c == 'B')) {
                    colorStack.pop();
                    if (!colorStack.empty() && colorStack.top() == 'C') {
                        colorStack.pop();
                    } else {
                        colorStack.push('C');
                    }
                } else {
                    colorStack.push(c);
                }
            } else {
                colorStack.push(c);
            }
        }

        std::string finalColors;
        while (!colorStack.empty()) {
            finalColors = colorStack.top() + finalColors;
            colorStack.pop();
        }

        std::cout << finalColors << std::endl;
    }

    return 0;
}
