#include <iostream>
#include <format>
#include <limits>
#include <cstdint>

constexpr int MaximumShields{ 120 };
constexpr int MaximumHull{ 200 };
//void Problem01()
//{
//	int currentShields{ 73 };
//	int currentHull{ 150 };
//	float shieldPercent = static_cast<float>(currentShields) / MaximumShields *
//		100.0f;
//	float hullPercent = static_cast<float>(currentHull) / MaximumHull * 100.0f;
//	std::cout << std::format("Shields {:.1f}% Hull {:.1f}%\n", shieldPercent,
//		hullPercent);
//}

//void Problem02()
//{
//	int shieldStrength{ 0 };
//	float enginePower{ 2.5f };
//	bool weaponsArmed{ true };
//	int hullPlating{ 46 };
//	char shipClass{ 'F' };
//	std::cout << std::format("shields {}, engines {}, armed {}, plating {}, class {}\n",
//		shieldStrength, enginePower, weaponsArmed,
//		hullPlating, shipClass);
//}

//void Problem04()
//{
//	std::cout << std::format("Size of bool: {}, {}\n", sizeof(bool), std::numeric_limits<bool>::max());
//	std::cout << std::format("Size of char: {}, {}\n", sizeof(char), std::numeric_limits<char>::max());
//	std::cout << std::format("Size of int: {}, {}\n", sizeof(int), std::numeric_limits<int>::max());
//	std::cout << std::format("Size of float: {}, {}\n", sizeof(float), std::numeric_limits<float>::max());
//	std::cout << std::format("Size of long long: {}, {}\n", sizeof(long long), std::numeric_limits<long long>::max());
//	std::cout << std::format("Size of short: {}, {}\n", sizeof(short), std::numeric_limits<short>::max());
//	std::cout << std::format("Size of std::uint8_t: {}, {}\n", sizeof(std::uint8_t), std::numeric_limits<std::uint8_t>::max());
//	std::cout << std::format("Size of std::int32_t: {}, {}\n", sizeof(std::int32_t), std::numeric_limits<std::int32_t>::max());
//}

void Problem05()
{
	int currentShields{ 73 };
	int maximumShields{ 120 };
	float fraction = static_cast<float>(currentShields) / maximumShields;
	float percentage = fraction * 100.0f;
	std::cout << std::format("Shields at {:.1f}%\n", percentage);
}

int main()
{
	//Problem01();
	//Problem02();
	//Problem04();
	Problem05();
	return 0;
}