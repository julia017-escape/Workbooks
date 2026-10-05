#include <iostream>
#include <format>

struct CarSetup
{
    int frontWing{ 0 };
    int rearWing{ 0 };
    int gearRatio{ 0 };
    int brakeBias{ 0 };
    int tyrePressure{ 0 };
    float rideHeight{ 0.0f };
};

void Adjust(int value)
{
    value += 100;
}

void AdjustRef(int& value)
{
    value += 100;
}

void Problem02()
{
    int downforce{ 10 };
    int& alias{ downforce };

    std::cout << std::format("A: {} {}\n", downforce, alias);

    alias = 25;
    std::cout << std::format("B: {} {}\n", downforce, alias);

    int other{ 99 };
    alias = other;
    std::cout << std::format("C: {} {} {}\n", downforce, alias, other);

    other = 7;
    std::cout << std::format("D: {} {} {}\n", downforce, alias, other);

    Adjust(downforce);
    std::cout << std::format("E: {}\n", downforce);

    AdjustRef(downforce);
    std::cout << std::format("F: {}\n", downforce);

    const int& view{ downforce };
    downforce = 3;
    std::cout << std::format("G: {}\n", view);
}

int main()
{
	Problem02();
	return 0;
}