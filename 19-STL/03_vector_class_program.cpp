#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int quantity;
public:
    Item(string n=" ",float p=0.0f,int q=0)
    {
        name=n;
        price=p;
        quantity=q;
        cout<<"Item added"<<endl;
    }
    string getName()
    {
        return name;
    }
    float getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    friend ofstream& operator<<(ofstream &f1,Item &i1);
    friend ifstream& operator>>(ifstream &f2,Item &i2);
    ~Item()
    {
        cout<<"Class destroyed"<<endl;
    }
};

ofstream& operator<<(ofstream &f1,Item &i1)
{
    f1<<i1.name<<endl;
    f1<<i1.price<<endl;
    f1<<i1.quantity<<endl;
    return f1;
}

ifstream& operator>>(ifstream &f2,Item &i2)
{
    f2>>i2.name;
    f2>>i2.price;
    f2>>i2.quantity;
    return f2;
}

int main()
{
    int n;
    cout<<"Enter number of items u want to input = ";
    cin>>n;

    vector<Item> list;
    cout<<"Enter all items : "<<endl;
    for(int i=0;i<n;i++)
    {
        string name;
        float price;
        int quantity;
        cout<<"Enter item "<<i+1<<" name, price and quantity = ";
        cin>>name>>price>>quantity;
        list.push_back(Item(name, price, quantity));
    }

    ofstream f1("grocery.txt");
    vector<Item>::iterator itr;
    {
        for (itr=list.begin();itr!=list.end();itr++)
            f1<<*itr;
    }
    f1.close();

    Item i;
    ifstream f2("grocery.txt");

    cout << "\n--- Data Read From File ---\n"<<endl;
    for(int j = 0; j < n; j++)
    {
        f2>>i;
        cout<<"Name = "<<i.getName()<<endl;
        cout<<"Price = "<<i.getPrice()<<endl;
        cout<<"Quantity = "<<i.getQuantity()<<endl<<endl;
    }
    f2.close();

    return 0;
}