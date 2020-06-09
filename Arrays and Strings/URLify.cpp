
#include <iostream>
#incluse <string>


void urlify(string *str, int len){
    int space = 0;
    for(int i =0;i<len;i++){
        if(str[i] == ' ') space++;
    }
    int extendSpace  = len + 2*space;
    int k = extendSpace-1;
    for(int i=len-1;i>=0);i--) {
        if(str[i] != ' '){
            str[k--] = str[i];
        }
        else{
            str[k--] = '0';
            str[k--] = '2';
            str[k--] = '%';
        }
    }

}
int main()
{
    char str[] = "Mr John Smith    ";                       //String with extended length ( true length + 2* spaces)
    std::cout << "Actual string   : " << str << std::endl;
    urlify(str, 13);                                        //Length of "Mr John Smith" = 13
    std::cout << "URLified string : " << str << std::endl;
    return 0;
}
