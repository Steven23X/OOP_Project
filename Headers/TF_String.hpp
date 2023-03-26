#ifndef _TF_STRING_HPP
#define _TF_STRING_HPP

#include <iostream>
#include "TF_String.hpp"

class TF_String
{
    /// Private Variables:
    char *str;

public:
    /// Constructors:
    TF_String();
    TF_String(const char *s);
    TF_String(TF_String &a);

    /// Destructor:
    ~TF_String();

    /// Operators:
    void operator=(TF_String &op2);
    friend std::istream &operator>>(std::istream &in, TF_String &s);
    friend std::ostream &operator<<(std::ostream &out, const TF_String &s);

    /// Methods:
    int str_length(const char *s);
    void str_copy(char *dest, const char *src);
};

#endif