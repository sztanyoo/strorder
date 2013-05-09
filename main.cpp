#include <iostream>
#include <fstream>

#include "stathandler.hpp"

using namespace std;

int main()
{

  StatHandler statHandler;

  string line;
  ifstream infile;
  infile.open( "input.txt" );

  while( !infile.eof() )
  {
    getline( infile, line );

    size_t i = -1;
    size_t j = line.find(" ", 0);
    while( j != string::npos )
    {
      statHandler.addWord( line.substr( i+1,j-i-1 ) );
      i = j;
      j = line.find(" ",i+1);
      if( j == string::npos )
      {
        statHandler.addWord( line.substr( i+1 ) );
      }
    }

  }


  statHandler.dump();

  return 0;

}
