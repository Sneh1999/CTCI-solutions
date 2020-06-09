
#include <iostream>
#incluse <string>

bool is_permutation(string s1, string s2){
    if(s1.size() !== s2.size()){
        return false;
    }

    std::vector<char> count(s1.size(),0);
    for(int i =0;i<s1.length();i++){
        int val = s1[i];
        count[val]++;
    }
    for(int i =0;i<s2.length();i++){
        int val = s2[i];
        count[val]--;
        if(count[val] < 0) return false;
    }
    return true;

}
int main(int argc, char** argv){

    string str1 = "hello";
    string str2 = "olleh";
    std::cout << is_premutation(str1,str2) << std::endl;
    return 0;
}
