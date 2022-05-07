#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*	The getnthbit function retrive the bit at the given position
*	For Example 50 coded on a char (1 byte) is 0011 0010
*	The bit at it's 2 position will be 1, the bit at the 3 position will be 0
*
*	The algo is simple , we swift all bits to the right, to get at first position the bit we want
*	Then we apply a binary mask of ... 0001 to our number, to only keep the bit at first position
*	And we display it
*
*	Example : 50 on a char, we want the bit at 2
*	0011 0010 we swift of (n-1) so 1 : 0011 0010 -> 0001 1001
*	we apply the mask  0000 0001 & 0001 1001  -> 0000 0001
*	we display it
*/
int main()
{
	int num, n;

	cout << "Enter number\n";

	cin >> num;

	cout << "Enter bit number you wish to obtain\n";
	
	cin >> n;

	cout << "Answer:" << (1 &(num >> (n - 1)));
}
