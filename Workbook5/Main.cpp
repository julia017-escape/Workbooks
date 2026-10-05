#include <iostream>
#include <format>

void Problem02()
{
    for (int i = 0; i < 4; ++i)
    {
        std::cout << std::format("A{} ", i);
    }
    std::cout << "\n";

    int j{ 0 };
    do
    {
        std::cout << std::format("B{} ", j);
        ++j;
    } while (j < 0);
    std::cout << "\n";

    int k{ 0 };
    while (k < 0)
    {
        std::cout << std::format("C{} ", k);
        ++k;
    }
    std::cout << "\n";

    for (int m = 0; m < 6; ++m)
    {
        if (m == 2)
        {
            continue;
        }

        if (m == 4)
        {
            break;
        }

        std::cout << std::format("D{} ", m);
    }
    std::cout << "\n";

    for (int p = 0; p < 3; ++p)
    {
        for (int q = 0; q < 2; ++q)
        {
            std::cout << std::format("E{}{} ", p, q);
        }
    }
    std::cout << "\n";
}

constexpr int RoomWidth{ 12 };
constexpr int RoomHeight{ 6 };
constexpr int DoorY{ RoomHeight / 2 };

void Problem04()
{ 
    for (int y = 0; y < RoomHeight; ++y)
    {
        for (int x = 0; x < RoomWidth; ++x)
        {
            if (x == 0 || y == 0 || x == RoomWidth - 1 || y == RoomHeight - 1)
            {
                std::cout << '#';
            }
            else
            {
                std::cout << '.';
            }
        }

        std::cout << "\n";
    }

    for (int y = 0; y < RoomHeight; ++y)
    {
        for (int x = 0; x < RoomWidth; ++x)
        {
			if (x == 0 && y == DoorY)
			{
				std::cout << '+';
			}
			else if (x == 0 || y == 0 || x == RoomWidth - 1 || y == RoomHeight - 1)
            {
                std::cout << '#';
            }
            else
            {
                std::cout << '.';
            }
        }

        std::cout << "\n";
    }

    for (int x = 0; x < RoomWidth; ++x)
    {
        std::cout << std::format("{:>3}", 0 * RoomWidth + x);
    }
    std::cout << "\n";

    std::cout << std::format("door index: {}\n", DoorY * RoomWidth + 0);
}

int main()
{
	//Problem02();
	Problem04();
	return 0;
}