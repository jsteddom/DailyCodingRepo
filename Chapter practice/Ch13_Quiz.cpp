#include <iostream>
#include <string>

/*
This was my solution to the first quesiton in LearnCPP's chapter 13 quiz. After succssfully compiling and matching the output,
I realized looking at their sample solution I could have nested my enum inside of my struct and avoid an unscoped enum.


*/



enum monsters {
    Ogre,
    Dragon,
    Orc,
    Spider,
    Slime
};

constexpr std::string_view getMonsterName(monsters monster)
{
    switch (monster)
    {
    case Ogre: return "Ogre";
    case Dragon:   return "Dragon";
    case Orc:  return "Orc";
    case Spider: return "Spider";
    case Slime: return "Slime";
    default:    return "???";
    }
}

struct Monster {
    monsters monsterType {monsters::Slime};
    std::string monsterName {"Blob"};
    double monsterHealth { 100 };
};

void printMonster(const Monster& myMonster) {
    std::cout << "This " << getMonsterName(myMonster.monsterType) << " is named " << myMonster.monsterName << " and has " << 
        myMonster.monsterHealth << " health" << std::endl;
}

int main() {
    Monster monOne {monsters::Ogre, "Torg", 145};
    Monster monTwo {monsters::Slime, "Blurp", 23};
    printMonster(monOne);
    printMonster(monTwo);
    return 0;
}