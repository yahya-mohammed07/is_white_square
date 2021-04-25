#include <iostream>
#include <string>
#include <cctype>

bool is_white( const std::string& m_str ) {
    if ( !std::isalpha( m_str.at(0) ) || m_str.size() > 2 ) { throw 1; }
    //                  a-> 97-96 .
    return ( ((m_str.at(0)-'0'-96)) + (m_str.at(1)-'0') ) & 1; // if sum is odd then return true
    // a1 = 1+1 = 2 false
    // a2 = 1+2 = 3 true
}

auto main() ->int
{
    const std::string coordinates { "h3" };
    std::cout << std::boolalpha << is_white( coordinates ) << '\n';
}
