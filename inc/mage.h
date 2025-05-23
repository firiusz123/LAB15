#ifndef MAGE_H
#define MAGE_H

#include "character.h"

namespace NormalMode {
    class Mage : public Character {
    private:
        int mana;

    public:
        Mage(const std::string& name, int health, int mana);
        void display() const override;

        // Static method for returning default mana value
        static  int getDefaultMana() {
            return 100;  // You can modify this default value as needed
        }

        ~Mage();
    };
}

namespace RandomMode {
    class Mage : public Character {
    private:
        int mana;

    public:
        Mage(const std::string& name);
        void display() const override;

        ~Mage();
    };
}

#endif // MAGE_H
