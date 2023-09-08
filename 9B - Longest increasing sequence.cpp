#include <iostream>
using namespace std;

extern "C"
{
	int LngstIncSeq(int* arrayOffset, int arraySize);
}

int main()
{
	int array[] = { 0,1,2,3,4,5,6,7,0,1,2,3,8,7,8,9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12 };
	int arraySize = sizeof(array) / sizeof(array[0]);
	int* arrayOffset = array;
	int longestPiece = LngstIncSeq(arrayOffset, arraySize);
	cout << "Count of the longest increasing sequence of integers = " << longestPiece;
	return 0;
}

/*
Sample Run:
Count of the longest increasing sequence of integers = 13
*/