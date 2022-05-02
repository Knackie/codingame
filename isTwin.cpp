// C++ implementation below
#include <string>
#include <algorithm>

using namespace std;

class Answer
{
public:
    static bool isTwin(string a, string b) {
        transform(a.begin(), a.end(),a.begin(), ::toupper);
        transform(b.begin(), b.end(),b.begin(), ::toupper);
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        if (a == b)
        {return true;}
        return false;
    }
};
