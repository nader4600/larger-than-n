#include<iostream>
using namespace std;
void Get(int array[],int size,int n)
{
	cout << "The numbers greater than   "<<n<<" : ";
	for (int i = 0; i < size; i++)
	{
		//cout << array[i]<<"\t";
		if (array[i] > n)
		{
			cout << "\t" << array[i] << "\t";
		}
	}

}
int main()
{
	int array[4] = { 100,21,333,125 }, n;
	cout << "Enter The Value of n " << endl;
	cin >> n;
	Get(array ,4,n);
}
