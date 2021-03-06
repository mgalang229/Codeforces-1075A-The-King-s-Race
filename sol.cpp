#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, x, y;
	cin >> n >> x >> y;
	// calculate the total distance of the white king from the target cell
	long long white_king_distance = (x - 1) + (y - 1);
	// calculate the total distance of the black king from the target cell
	long long black_king_distance = (n - x) + (n - y);
	if (white_king_distance == black_king_distance || white_king_distance < black_king_distance) {
		// the white king wins if its distance from the target cell
		// is less than or equal than the distance of the black king from the target cell
		cout << "White";
	} else {
		// otherwise, the black king wins
		cout << "Black";
	}
	cout << '\n';
	return 0;
}
