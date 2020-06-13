
#include <iostream>
#include <string>

std::string compress(std::string str){
    int count = 1;
    std::string out = "";
    if(str.length() <2){
        return str;
    }

    for(int i =1;i<str.length();i++){
        if(str[i] == str[i-1]){
            count++;
        }
        else{
            out += str[i-1];
            out += std::to_string(count);
            count = 1;
        }
        if(out.length() >= str.length()) return str;
    }
    out += str[str.length() - 1];
    out += std::to_string(count);
    if(out.length() >= str.length()) return str;
    return out;
}

int main()
{
    std::string str, out;
    std::cout << "Enter a string:\n";
    std::cin >> str;

    out = compress(str);
    if (str.compare(out)) {
        std::cout << str << " can be compressed to " << out << std::endl;
    } else {
        std::cout << str << " can not be compressed\n";
    }
    return 0;
}