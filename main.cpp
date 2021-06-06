#include <iostream>

bool LeftBracket(std::string& s){
    int i = 0;
    i = s.find("(");
    int k = 0;
    k = s.find(")");
    if(i < k)
    {
      //  std::cout << "true" << std::endl;
        return true;
    }
    else {
        //std::cout << "false" << std::endl;
        return false;
    }
}

bool RightBracket(std::string& s){
    size_t i;
    i = s.find_last_of(")");
    size_t k;
    k = s.find_last_of("(");
    if(i > k)
    {
        //std::cout << "true" << std::endl;
        return true;
    }
    else {
        //std::cout << "false" << std::endl;
        return false;
    }
}
bool isRight(std::string& s) {
    int len = s.length();
        int counter1 = 0;
        int counter2 = 0;

        for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            counter1++;
        }
        if (s[i] == ')') {
            counter2++;
        }
    }
    if ((counter1 == counter2) && RightBracket(s) && LeftBracket(s)) {
        std::cout << "true" << std::endl;
        return true;
    } else {
        std::cout << "false" << std::endl;
        return false;
    }

}


int main() {
    std::string right = "(dhb()hdk)";
    std::string wrong = ")((dhhd(djjd)(";
    isRight(right);
    isRight(wrong);
    return 0;
}
