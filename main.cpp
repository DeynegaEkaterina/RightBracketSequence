#include <iostream>
#include <vector>



bool isRight(std::string& s) {
    int len = s.length();
    std::vector<size_t> v;
    std::vector<size_t> v2;

    for (int k = 0; k < len; k++) {
        if (s[k] == '(') {
            v.push_back(k);
        }else  if (s[k] == ')') {
            v2.push_back(k);
        }
    }
    if(v.size() == v2.size()) {
        for (int i = 0; i < v.size(); i++) {
            if(!(v[i] < v2[i])){
                std::cout << "false";
                return false;
        }
        }

    }
    std::cout << "true";
    return true;
}


int main() {
    std::string right = "tt())(()";
    std::string wrong = ")((dhhd(djjd)(";
    isRight(right);

    return 0;
}
