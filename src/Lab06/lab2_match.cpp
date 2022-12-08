#include "lab2_match.hpp"

char* match(char* s, char ch){
    char* ps = s;
    while(*ps != 0)
    {
        if (*ps == ch)
        {
            return ps;
        }
        ps++;
    }
    return 0;
}
