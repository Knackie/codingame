#include <vector>

using namespace std;

class Answer
{
    public:
        /** @return the sum of integers whose index is between n1 and n2​​​​​​‌​​‌‌​​‌‌‌‌​‌​‌​‌‌​​‌​‌​‌ */
        static int calc(const std::vector<int>& array, int n1, int n2) {
            int res = 0;
            for (int i =n1; i < n2+1; i++ )
            {
                res += array[i];
            }
            return res;
        }
};
