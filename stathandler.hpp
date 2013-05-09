#ifndef STATHANDLER_HPP
#define STATHANDLER_HPP

#include <unordered_map>
#include <string>

class StatHandler
{
    std::unordered_map< std::string, int > m_statMap;

  public:
    void addWord( std::string s );
    void dump();
};

#endif
