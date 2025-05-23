#ifndef ASSASSIN_H
#define ASSASSIN_H

#include "character.h"

namespace NormalMode {
    class Assassin : public Character {
    private:
        int lethality;

    public:
        static int count;

        Assassin(const std::string& name, int health, int lethality);
        
        void display() const override;

        int attack(Character &person , int value);

        static int getCount() {
            return count;
        }

        ~Assassin();
    };
}

namespace RandomMode {
    class Assassin : public Character {
    private:
        int lethality;

    public:
        static int count;

        Assassin(const std::string& name);
        void display() const override;

        static int getCount() {
            return count;
        }
        int attack(Character &person , int value);

        ~Assassin();
    };
}

#endif // ASSASSIN_H
