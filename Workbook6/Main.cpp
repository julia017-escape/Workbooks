#include <iostream>
#include <format>

void Mystery()
{
    int counter{ 0 };
    static int tally{ 0 };

    ++counter;
    ++tally;

    std::cout << std::format("counter {}, tally {}\n", counter, tally);
}

void Problem02()
{
    int value{ 5 };
    std::cout << std::format("A: {}\n", value);

    {
        int value{ 50 };
        std::cout << std::format("B: {}\n", value);
        value += 5;
        std::cout << std::format("C: {}\n", value);
    }

    std::cout << std::format("D: {}\n", value);

    Mystery();
    Mystery();
    Mystery();
}

int HealPotion(int health)
{
    std::cout << std::format("   You feel better. Health is now {}\n", health);
    return health + 25;
}

void Problem03()
{
    int playerHealth{ 40 };

    std::cout << std::format("Health: {}\n", playerHealth);
    playerHealth = HealPotion(playerHealth);
    std::cout << std::format("Health: {}\n", playerHealth);
}

float PercentageOf(int part, int whole)
{
    return static_cast<float>(part) / whole * 100.0f;
}

void PrintStat(const char* label, int value)
{
    std::cout << std::format("{:>11}: {:>5}\n", label, value);
}

void PrintStat(const char* label, float value)
{
    std::cout << std::format("{:>11}: {:>5.1f}\n", label, value);
}

void PrintSeparator(int width, char symbol = '-')
{
    std::cout << std::format("{:{}<{}}\n", "", symbol, width);
}

void Problem04()
{
    int health{ 40 };
    int maxHealth{ 60 };

    PrintSeparator(20);
    PrintStat("Health", health);
    PrintStat("Max", maxHealth);
    PrintStat("Percent", PercentageOf(health, maxHealth));
    PrintSeparator(20, '=');
}

int main()
{
	//Problem02();
	//Problem03();
	Problem04();
	return 0;
}