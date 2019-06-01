#ifndef __HELLO_WORLD_H__
#define __HELLO_WORLD_H__

#include<iostream>
#include<string>
#include<sstream>

void print_string(const std::string &s);

template<typename T>
void CatString(std::string &s, const T &type) {
    std::ostringstream stream;
    stream << type;
    s += stream.str();
}

template<typename T,typename... Args>
void CatString(std::string &s,const T &obj,Args... args) {
    CatString(s, obj);
    CatString(s, args...);
}

#endif

