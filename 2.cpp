#include <queue>
#include<stack>
#include <iostream>

using namespace std;

bool palindrome(string);
int main()
{
	string item;
	int check;
	cout << "Entre a expression: ";
	cin >> item;

	check = palindrome(item);
	if (check==0)
	{
		cout << "Is not a palindrome." << endl;
	}
	else
	{
		cout << "Is a palindrome." << endl;
	}
}
bool palindrome(string item)
{
	queue<char> q;
	stack<char> s;
	int i = 0;

	while (item[i] != '\0')
	{
		if (item[i] >= 65 && item[i] <= 90)
		{
			item[i] = item[i] + 32;
			s.push(item[i]);
			q.push(item[i]);
			i++;
		}
		else if (item[i] >= 97 && item[i] <= 122)
		{
			s.push(item[i]);
			q.push(item[i]);
			i++;
		}
		else if (isdigit(item[i]))
		{
			s.push(item[i]);
			q.push(item[i]);
			i++;
		}
		else
		{
			i++;
		}
	}

	while (!s.empty())
	{
		if (s.top() != q.front())
		{
			return false;
		}
		q.pop();
		s.pop();
	}
	return true;
}