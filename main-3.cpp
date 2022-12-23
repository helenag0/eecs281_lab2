
//identifier: 1CAEF3A0FEDD0DEC26BA9808C69D4D22A9962768
#include <deque>
#include <iostream>

using namespace std;

deque<char> brackets;

// not balanced: ( { ) }

//bool isBalanced() {
//    string line;
//    while(getline(cin, line)) {
//        for(uint32_t i = 0; i < line.size(); i++) {
//            if ((line[i] == '(' || line[i] == '['
//                 || line[i] == '{')) {
//                brackets.push_front(line[i]);
//            }
//            else if ((brackets.empty() == false) &&
//                    ((brackets.front() == '(' && line[i] == ')') ||
//                    (brackets.front() == '[' && line[i] == ']') ||
//                    (brackets.front() == '{' && line[i] == '}'))){
//                brackets.pop_front();
//
//            }
//            else {
//                continue;
//            }
//        }
//
//    }
//    if(brackets.empty() == true) {
//        return true;
//    }
//    else {
//        return false;
//    }
//
//}

bool isBalanced() {
    char newVal;
    uint32_t i = 0;
    while(cin >> newVal) {
        if ((newVal == '(' || newVal == '[' || newVal == '{')) {
                brackets.push_front(newVal);
        }
        else if ((!brackets.empty()) &&
                 ((brackets.front() == '(' && newVal == ')') ||
                  (brackets.front() == '[' && newVal == ']') ||
                  (brackets.front() == '{' && newVal == '}'))){
            brackets.pop_front();
            
        }
        else {
            i++;
            
        }
    }
        
    if(brackets.empty() == true) {
        return true;
    }
    return false;
    
}

int main() {
    if (isBalanced() == true) {
        cout << "Balanced" << endl;
    }
    else {
        cout << "Not balanced" << endl;
    }
}
