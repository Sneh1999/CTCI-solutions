
#include <set>
#include <string>
#include <iostream>

std::set<char> chars(std::string s){
    std::set<char> char_set;
    for(char &c : s){
        char_set.insert(c);
    }
    return char_set;
}
// to not be able to have a data structure you can sort the string and then check every adjacent string
bool is_unique(std::string s){
//    we create sets to have one to one mapping in c++
// Sets are containers that store unique elements following a specific order.
    std::set<char> characters = chars(s);
    return characters.size() == s.size();
}

int main(int argc, char** argv){
    std::cout << is_unique("haha") << std::endl;
    std::cout << is_unique("defg") << std::endl;
    return 0;
}
