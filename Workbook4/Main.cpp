#include <iostream>
#include <format>
#include <string>

void Problem01()
{
    int health{ 30 };
    int enemyCount{ 3 };

    if (health <= 0)
    {
        std::cout << "status: dead \n";
    }

    else if (health < 25)
    {
        std::cout << "status: critical \n";
    }

    else if (enemyCount > 2)
    {
        std::cout << "status: outnumbered \n";

    }

    else
    {
        std::cout << "status: ready \n";
    }
}

void Problem02()
{
    int mana{ 0 };
    int arrows{ 5 };
    bool hasStaff{ true };

    if (mana)
    {
        std::cout << "A: mana\n";
    }

    if (arrows)
    {
        std::cout << "B: arrows\n";
    }

    if (hasStaff == true)
    {
        std::cout << "C: staff\n";
    }

    if (mana == 10)
    {
        std::cout << "D: mana again\n";
    }

    std::cout << std::format("E: mana is {}\n", mana);

    if (arrows > 3)
    { 
        std::cout << "F: plenty of arrows\n";
        std::cout << "G: ready\n";
     }

    if (mana > 5 && arrows > 10)
    {
        std::cout << "H: fully equipped\n";
    }
    else if (mana > 5 || arrows > 10)
    {
        std::cout << "I: partly equipped\n";
    }
}

enum class DamageType {Physical = 0, Fire = 1, Ice = 2, Poison = 3 };
enum class ArmourType { None, Leather, Chain, Plate};


int ApplyResistance(int damage, DamageType type, ArmourType armour)
{
    switch (armour)
    {
    case ArmourType::None:
        return damage;

    case ArmourType::Leather:
        if (type == DamageType::Poison)
        {
            return damage / 2;
        }

        return damage;

    case ArmourType::Chain:
        if (type == DamageType::Physical)
        {
            return damage / 2;
        }
        else if (type == DamageType::Ice)
        {
            return damage * 2;
        }

        return damage;

    case ArmourType::Plate:
        if (type == DamageType::Physical)
        {
            return damage / 2;
        }
        else if (type == DamageType::Fire || type == DamageType::Ice)
        {
            return damage * 2;
        }

        return damage;
    }

        return damage;
}

const char* NameOf(DamageType type)
{
    switch (type)
    {
    case DamageType::Physical:
        return "Physical";
    case DamageType::Fire:
        return "Fire";
    case DamageType::Ice:
        return "Ice";
    case DamageType::Poison:
        return "Poison";
    }

    return "Unknown";
}

void Problem04()
{
    int fireOnPlate = ApplyResistance(20, DamageType::Fire, ArmourType::Plate);
    int physicalOnChain = ApplyResistance(20, DamageType::Physical, ArmourType::Chain);

    std::cout << std::format("20 {} damage against plate becomes {}\n", NameOf(DamageType::Fire), fireOnPlate);
    std::cout << std::format("20 {} damage against chain becomes {}\n", NameOf(DamageType::Physical), physicalOnChain);
}

enum class Command { MoveNorth, MoveSouth, Attack, Wait, Quit };

void HandleCommand(Command command)
{
    switch (command)
    {
    case Command::MoveNorth:
        std::cout << "   You move north.\n";
        break;

    case Command::MoveSouth:
        std::cout << "   You move south.\n";
        break;

    case Command::Attack:
        std::cout << "   You attack!\n";
        break;

    case Command::Wait:
        std::cout << "   You wait.\n";
        break;

    case Command::Quit:
        std::cout << "   You quit the game.\n";
        break;
    }
}

void Problem05()
{
    HandleCommand(Command::MoveNorth);
    HandleCommand(Command::Attack);
    HandleCommand(Command::Quit);
}


int main()
{
    //Problem01();
    //Problem02();
    //Problem04();
    Problem05();
    return 0;
}