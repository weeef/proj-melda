#include <iostream>
#include <string>

class Mob
{
public:
    // Constructor that takes the mob's name and health as arguments
    Mob(const std::string& name, int health) : m_name(name), m_health(health)
    {
    }

    // Get the name of the mob
    std::string getName() const
    {
        return m_name;
    }

    // Get the current health of the mob
    int getHealth() const
    {
        return m_health;
    }

    // Set the current health of the mob
    void setHealth(int health)
    {
        m_health = health;
    }

private:
    std::string m_name;  // The name of the mob
    int m_health;        
};

int main()
{
   
    Mob slime("Slime", 1);

    std::cout << slime.getName() << " has " << slime.getHealth() << " health" << std::endl;

    return 0;
}
