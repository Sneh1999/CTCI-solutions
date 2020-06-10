
#include <iostream>

int getChar(char c){
    int res = -1;
    if(c >= 'a' && c <='z'){
        res = c - 'a';
    }
    else if(c >= 'A' && c <='Z'){
        res = c -'A'
    }
    return res;
}
isPermutationOfPallindrome2(std::string str ){

    int odd =0;
    vector<int> frq(str.length(),0);
    for(int i = 0;i<str.length();i++){
            int idx = getChar(str[i]);
            if(idx != -1){
                frq[idx]++;
                if(frq[idx] % 2){
                    odd++;
                }
                else{
                   odd--;
                }
            }
    }
    return odd <=1;

}

int main()
{
    std::string str("Tact Coa");
    std::cout << "Does \"" << str << "\"  has a string whose permutation is a palindrome? "
              << "( 1 for true, 0 for false ) : ";
    std::cout << "Approach 2:" << isPermutationOfPallindrome2( str ) << std::endl;


    std::string str1("A big Cat");
    std::cout << "Does \"" << str1 << "\" has a string whose permutation is a palindrome? "
              << "( 1 for true, 0 for false ) : ";
    std::cout << "Approach 2:" << isPermutationOfPallindrome2( str1 ) << std::endl;


    std::string str2("Aba cbc");
    std::cout << "Does \"" << str2 << "\" has a string whose permutation is a pallindrome? "
              << "( 1 for true, 0 for false ) : ";
    std::cout << "Approach 2:" << isPermutationOfPallindrome2( str2 ) << std::endl;
    return 0;
}