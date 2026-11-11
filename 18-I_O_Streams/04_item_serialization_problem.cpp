#include <iostream>
#include <fstream>
#include <string>
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
    friend ofstream & operator<<(ofstream &outfile,Item &s1);
    friend ifstream & operator>>(ifstream &infile,Item &s2);
};

ofstream & operator<<(ofstream &outfile,Item &s1)
{
    outfile<<s1.name<<endl;
    outfile<<s1.price<<endl;
    outfile<<s1.quantity<<endl;
    return outfile;
}
ifstream & operator>>(ifstream &infile,Item &s2)
{
    infile>>s2.name;
    infile>>s2.price;
    infile>>s2.quantity;
    return infile;
}

int main()
{
    Item s1("iPhone18",100000,10);
    ofstream outfile("Item.txt");
    outfile<<s1;
    outfile.close();

    Item s2;
    ifstream infile("Item.txt");
    infile>>s2;
    infile.close();

    cout<<"---Data Read From File---"<<endl;
    cout<<"Name = "<<s2.getName()<<endl;
    cout<<"Price = "<<s2.getPrice()<<endl;
    cout<<"Quantity = "<<s2.getQuantity()<<endl;

    return 0;
}