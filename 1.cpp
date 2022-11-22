#include <queue>
#include <iostream>

using namespace std;

int main()
{
	int opinion,item,size;
	int En_count = 0, max=En_count;
	queue<int> q;
	do
	{
		cout << "What Operation Do You Want To Perform? Select Opinion Number. Enter the 0 to Exit." << endl;
		cout << "1. Enqueue()" << endl;
		cout << "2. Dequeue()" << endl;
		cout << "3. IsEmtpy()" << endl;
		cout << "4. IsFull()" << endl;
		cout << "5. Count()" << endl;
		cout << "6. Display()" << endl;
		cout << "7. Clear Screen" << endl << endl;

		cin >> opinion;

		switch (opinion)
		{
		case 1:
		{
			cout << "Enqueue Operation" << endl;
			cout << "Enter an item to Enqueue in the Queue" << endl;
			cin >> item;
			q.push(item);
			En_count++;
			if (En_count>max)
			{
				max = En_count;
			}
			cout << endl << endl << endl;
			break;
		}
		case 2:
		{
			cout << "Dequeue Operation" << endl << endl << endl;
			q.pop();
			En_count--;
			break;
		}
		case 3:
		{
			int check;
			check = q.empty();
			if (check==1)
			{
				cout << "Queue is empty" << endl << endl << endl;
			}
			else
			{
				cout << "Queue is not empty" << endl << endl << endl;
			}
			break;
		}
		case 4:
		{
			if (q.size()>= max)
			{
				cout << "Queue is full" << endl << endl << endl;
			}
			else
			{
				cout << "Queue is not full" << endl << endl << endl;
			}
			break;
		}
		case 5:
		{
			cout << "Count of Queue is: " << q.size() << endl << endl << endl;
			break;
		}
		case 6:
		{
			int s,element;
			s = q.size();

			cout << "Items of Queue:" << endl;
			for (int i = 0; i < s; i++)
			{
				element = q.front();
				cout << element << " ";
				q.pop();
				q.push(element);
			}
			cout << endl << endl << endl;
			break;
		}
		case 7:
		{
			system("cls");
			break;
		}
		default:
			break;
		}
	} while (opinion!=0);
	
}