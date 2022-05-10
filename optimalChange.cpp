#include <cmath>

using namespace std;

// Do not modify the Change​​​​​​‌​​‌‌​​‌‌‌‌​‌​‌​‌‌​​‌​‌​‌ structure
typedef struct {
    long coin2;
    long bill5;
    long bill10;
} Change;

class Answer
{
public:
    static bool optimalChange(long s, Change &c)
    {
        c.coin2 = 0;
        c.bill5 = 0;
        c.bill10 = 0;
        while (s > 0)
        {

        if (s%10==0)
        {
            int b = s/10;
            c.bill10+=b;
            s=b;
        }
        else if (s%5==0)
        {
            int b = s/5;
            c.bill5+=b;
            s=b;
        }
        else if (s%2==0)
        {
            int ci = s/2;
            c.coin2+=ci;
            s=ci;
        }
        else if (s - 10 > 0)
        {
           
            c.bill10++;
            s-=10;
        }
        else if (s - 5 > 0)
        {
           
            c.bill5++;
            s-=5;
        }
        else if (s - 2 > 0)
        {
           
            c.coin2++;
            s-=2;
        }
        else 
        {
            return false;
        }
        }
        return false;
    }
};
