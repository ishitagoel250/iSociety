#include <iostream>
using namespace std;

class admin{
    string username[100];
    string password[100];
    public:
};

class user{
    string name[];
    string email;
    string 
};

class tower{
    int towers;
    public:
    void get_tower(){
        cout<<"Enter the number of towers: ";
        cin>>towers;
    }
};

class floor: public tower{
    int floors;
    public:
    void get_floor(){
        cout<<"Enter the number of floors: ";
        cin>>floors;
    }
};

class apartment: public floor,tower{
    int apartments;
public:
    void get_apartments(){
        cout<<"Enter the number of apartments per floor: ";
        cin>>apartments;
    }
};

class bills{
    int electricity,water,gas;
    public:
};

class amenities{
    int park,hall,gym,pool,club_house;
    public:
};

int main(){
    cout<<"***** iSociety *****"<<endl;
}