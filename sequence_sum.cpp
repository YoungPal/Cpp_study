#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false); //stdio / iostream syncronhization
	cin.tie(NULL);
	cout.tie(NULL); //stream(buffer)of cin and cout splited

	int N;
	cin >> N;
	int tail=0, head=0; // index_number
	int sum = 0;
	int count = 0;

	vector<int> A(N+1, 0);
	vector<int> B(N+1, 0);
	for (int i = 1; i < N+1; i++) {
		A[i] = i; 
		B[i] = B[i - 1] + A[i]; //Prefix Sum Vector
	}
	//two pointer
	do{
		sum = B[head] - B[tail]; //summary from index_tail to index_head
		if (sum > N) {
			tail++;
		}
		else if (sum == N) {
			count++;
			head++;
			tail++;
		}
		else {
			head++;
		}
	} while (tail != N);

	cout << count;
	
}