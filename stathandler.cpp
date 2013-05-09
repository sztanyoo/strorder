#include <iostream>
#include <algorithm>

#include "stathandler.hpp"

using namespace std;

void
StatHandler::addWord( string s )
{
  if( m_statMap.end() != m_statMap.find( s ))
  {
    m_statMap[s]++;
  }
  else
  {
    m_statMap.insert( pair< string, int>(s,1));
  }
}

void elementPrinter( pair<string, int> p)
{
  cout << p.first << ": " << p.second << endl;
}

void
StatHandler::dump()
{
  for_each( m_statMap.begin(), m_statMap.end(), elementPrinter );
}
