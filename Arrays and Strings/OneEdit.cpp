#include <iostream>
#include <string>
#include <cmath>


oneEditAway(std::string s1,std::string s2){

    if(std::abs(s1.length() - s2.length()) > 1) return false;

    int len1 = s1.length();
    int len2 = s2.length();
    std::string smaller = len1 < len2 ? len1 : len2;
    std::string bigger = len1 > len2 ? len1 : len2;
    int i =0;
    int j =0;
    int toggle = 0;
    while( i< smaller && j <bigger){

        if(smaller[i] != bigger[j]){
            if(toggle) return false;
            toggle = 1;
//            case of replace
            if(len1 == len2) i++;
        }
        else{
//            increase i for smaller
            i++;
        }
//         always increase the index of bigger array
        j++;
    }

    return true;
}


void translate( bool result, const std::string str1, const std::string str2 )
{
    if (result == true ) {
        std::cout << str1 << " and " << str2 << " are one edit away\n";
    } else {
        std::cout << str1 << " and " << str2 << " are not one edit away\n";
    }
}

int main()
{
    translate ( oneEditAway("pale", "ple"), "pale", "ple" );
    translate ( oneEditAway("pales", "pale"), "pales", "pale" );
    translate ( oneEditAway("pale", "pales"), "pale", "pales" );
    translate ( oneEditAway("pale", "bale"), "pale", "bale" );
    translate ( oneEditAway("pale", "bake"), "pale", "bake" );
    return 0;

}