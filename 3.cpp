#include <queue>
#include <iostream>

using namespace std;

int main()
{
	int range, item, min;
	queue<int> q,sq,tq;

	cout << "Please Enter the Number of Elements: ";
	cin >> range;
	cout << "Please Enter element in Queue" << endl;

	for (int i = 0; i < range; i++)
	{
		cin >> item;
		q.push(item);
		tq.push(item);
	}
	while (!tq.empty())
	{
		min = tq.front();
		for (int i = 0; i < tq.size(); i++)
		{
			int temp = tq.front();
			if (temp < min)
			{
				min = tq.front();
			}
			else
			{
				tq.pop();
				tq.push(temp);
			}
		}
		for (int i = 0; i < tq.size(); i++)
		{
			if (tq.front()==min)
			{
				sq.push(tq.front());
				tq.pop();
			}
			else
			{
				tq.push(tq.front());
				tq.pop();
			}
		}
	}
	cout << "Original Queue" << endl;
	for (int i = 0; i < range; i++)
	{
		cout << q.front() << " ";
		q.push(q.front());
		q.pop();
	}
	cout << endl << endl;
	
	cout << "Sorted Queue" << endl;
	for (int i = 0; i < range; i++)
	{
		cout << sq.front() << " ";
		sq.push(sq.front());
		sq.pop();
	}
}
