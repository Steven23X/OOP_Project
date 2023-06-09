#ifndef _TF_STRING_HPP
#define _TF_STRING_HPP

#include <iostream>
#include <memory>
#include "../TechFlow.hpp"

class TF_String
{
    /// Private Variables:
    std::unique_ptr<char[]> str;

public:
    /// Constructors:
    TF_String();
    TF_String(const char *s);
    TF_String(const TF_String &other);
    TF_String(TF_String &&other) noexcept;

    /// Destructor:
    ~TF_String();

    /// Operators:
    void operator=(const TF_String &op2);
    TF_String &operator=(TF_String &&other) noexcept;
    friend std::istream &operator>>(std::istream &in, TF_String &s);
    friend std::ostream &operator<<(std::ostream &out, const TF_String &s);

    /// Methods:
    int str_length(const char *s);
    void str_copy(char *dest, const char *src);
};

#endif