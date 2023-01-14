///variadic template
//parameter pack
//fold expression
#include <iostream>
#include <string>

//implements a python-style print function
template<typename... Types>
void print(Types... args)
{
    //C++ 17 fold expression.
    //folding over a comma
    ((std::cout << args << " "), ...);
}


void Printf(const char* s)
{
    std::cout << s;
}
//implements a C-style printf.
template<typename T, typename... Types>
void Printf(const char* s,T first, Types... rest)
{
    while(*s != '\0')
    {
        if(*s == '%')
        {
            std::cout << first;
            Printf(s + 1,rest...);
            return;
        }
        std::cout << *s;
        s++;
    }
}

int main()
{
    print("hello", 4,644);
    std::cout << std::endl;
    Printf("hi this is % and %","hyunjae", 35);
    return 0;
}
