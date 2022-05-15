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
    *
    *   Lors de mes tests, les deux fonctions semblait avoir plus ou moins le meme temps d'execution
    *   sans qu'aucune ne se démarque a 100% des tests
    */
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

    /**
     * @brief La meme fonction mais en utilisant la facilité du : long a = 1.99; a == 1
     * 
     */
    static bool optimalChange2(long s, Change& c)
    {
        if (s < 0)
            return false;

        long current = s % 10;
        c.bill10 = s / 10;
        c.bill5 = current / 5;
        current = current % 5;
        c.coin2 = current / 2;

        return (current % 2 == 0);
    }
};
