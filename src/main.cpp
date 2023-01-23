#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto now = int{ 0 };
	auto bef = int{ 0 };
	auto pre = int{ -1 };
	while (0 < (n--)) {
		int x;
		cin >> x;

		if (pre != x) {
			bef = 2;
			now += bef;
			pre = x;
		}
		else {
			bef *= 2;

			now += bef;
		}

		if (100 <= now) {
			now = 0;
			pre = -1;
			bef = 0;
		}
	}

	cout << now;

	return 0;
}