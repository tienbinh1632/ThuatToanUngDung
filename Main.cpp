#include <iostream>
using namespace std;

int main()
{
	int A[6] = { -2,11,-4,13,-5,2 };
	int n = size(A);
	int max = A[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int s = 0;
			for (int k = i; k < j; k++)
				s = s + A[k]; 
		
			if (max < s)
				max = s;
		}
	}
	cout <<max<<endl;
	system("pause");
	return 0;
}
