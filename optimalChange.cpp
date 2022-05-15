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
    /*  Cette fonciton retourne la monaie avec le moins de pieces/billiets possible pour le nombre passer en parametre
    * Prend ne compte les cas tordue
    */
    static bool optimalChange(long s, Change &c)
    {
        c.coin2 = 0;
        c.bill5 = 0;
        c.bill10 = 0;
        while (s > 0)
        {
            if (s % 10 == 0 || (s > 10 && s % 2 != 1))
            {
                long current = s / 10;
                c.bill10 += current;
                s = s % 10;
            }
            else if (s % 5 == 0)
            {
                long current = s / 5;
                c.bill10 += current;
                s = s % 5;
            }
            else if (s > 5 && s % 2 == 1)
            {
                ++c.bill5;
                s -= 5;
            }
            else if (s % 2 == 0)
            {
                long current = s / 2;
                c.coin2 += current;
                s = 0;
            }
            else if (s - 10 > 0)
            {
                ++c.bill10;
                s -= 10;
            }
            else if (s - 5 > 0)
            {
                ++c.bill5;
                s -= 5;
            }
            else if (s - 2 > 0)
            {
                ++c.coin2;
                s -= 2;
            }
            else
                return false;
        }
        return true;
    }
};
