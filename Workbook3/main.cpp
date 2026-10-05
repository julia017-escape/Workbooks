#include <iostream>
#include <format>
#include <cmath>
#include <limits>

void Problem02()
{
	std::cout << "9 / 2 = " << 9 / 2 << "\n";
	std::cout << "9 % 2 = " << 9 % 2 << "\n";
	std::cout << "9.0 / 2 = " << 9.0 / 2 << "\n";
	std::cout << "9 / 2.0 = " << 9 / 2.0 << "\n";
	std::cout << "-9 / 2 = " << -9 / 2 << "\n";
	std::cout << "-9 % 2 = " << -9 % 2 << "\n";
	std::cout << "9 / 2 * 2 = " << 9 / 2 * 2 << "\n";
	std::cout << "9 * 2 / 2 = " << 9 * 2 / 2 << "\n";
	std::cout << "2 + 3 * 4 - 6 / 2 = " << 2 + 3 * 4 - 6 / 2 << "\n";
	std::cout << "7 > 3 = " << (7 > 3) << "\n";
	std::cout << "1 + 2 > 3 = " << (1 + 2 > 3) << "\n";
	std::cout << "0.1 + 0.2 == 0.3 = " << (0.1 + 0.2 == 0.3) << "\n";
}

void Problem03()
{
	unsigned int stock{ 3u };
	unsigned int purchased{ 5u };
	unsigned int remaining = stock - purchased;
	std::cout << std::format("Stock: {}\n", stock);
	std::cout << std::format("Purchased: {}\n", purchased);
	std::cout << std::format("Remaining: {}\n", remaining);
	std::cout << "Is stock less than purchased? " << (stock < purchased) << "\n";
}

int main()
{
	//Problem02();
	Problem03();
	return 0;
}