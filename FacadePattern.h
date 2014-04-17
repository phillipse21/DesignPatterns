/*"The Facade Pattern hides the complexities of the system by providing an interface to the client
from where the client can access the system on an unified interface. Facade defines a higher-level
interface that makes the subsystem easier to use. For instance making one class method perform a
complex process by calling several other classes"
http://en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Design_Patterns#Bridgehttp://en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Design_Patterns#Bridge*/

//like turning on a computer and having skype, spotify, etc run automatically

#include <iostream>
#include <string>

using namespace std;

class Spotify
{
public:
    void turnOn()
    {
        onOrOff = true;
        cout << "Spotify on" << endl;
    }
    void turnOff()
    {
        onOrOff = false;
        cout << "Spotify off" << endl;
    }
private:
    bool onOrOff;
};

class Skype
{
public:
    void turnOn()
    {
        onOrOff = true;
        cout << "Skype on" << endl;
    }
    void turnOff()
    {
        onOrOff = false;
        cout << "Skype off" << endl;
    }
private:
    bool onOrOff;
};

class OnOff
{
public:
    void turnOn()
    {
        sky.turnOn();
        spot.turnOn();
    }
    void turnOff()
    {
         sky.turnOff();
         spot.turnOff();
    }
private:
    Skype sky;
    Spotify spot;
};
