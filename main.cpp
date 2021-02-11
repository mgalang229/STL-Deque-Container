#include <bits/stdc++.h>

using namespace std;

int main() {
	int x;
	deque<int> iDeque;
	cout << "I will now enqueue items...\n";
	for (x = 2; x < 8; x += 2) {
		cout << "Pushing " << x << endl;
		iDeque.push_back(x);
	}
	cout << "I will now dequeue items...\n";
	for (x = 2; x < 8; x += 2) {
		cout << "Popping " << iDeque.front() << endl;
		iDeque.pop_front();
	}
	return 0;
}
