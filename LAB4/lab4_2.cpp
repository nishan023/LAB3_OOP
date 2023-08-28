#include <iostream>
using namespace std;

class Fruit
{
protected:
    int fruits;

public:
    Fruit(int count = 0)
    {
        fruits = count;
    }
    void add_fruit(int count)
    {
        fruits += count;
    }
    int get_fruit_count()
    {
        return fruits;
    }
};

class Apples : public Fruit
{
private:
    int apples;

public:
    Apples(int count = 0) : Fruit(count)
    {
        apples = count;
    }
    void add_apples(int count)
    {
        apples += count;
        add_fruit(count);
    }
    int get_apple_count()
    {
        return apples;
    }
};

class Mangoes : public Fruit
{
private:
    int mangoes;

public:
    Mangoes(int count = 0) : Fruit(count)
    {
        mangoes = count;
    }
    void add_mangoes(int count)
    {
        mangoes += count;
        add_fruit(count);
    }
    int get_mango_count()
    {
        return mangoes;
    }
};

int main()
{
    Fruit basket(8);
    Apples apples(5);
    Mangoes mangoes(3);

    cout << "Apples: " << apples.get_apple_count() << endl;
    cout << "Mangoes: " << mangoes.get_mango_count() << endl;
    cout << "Total fruits: " << basket.get_fruit_count() << endl;

    return 0;
}
