#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator=1; //Initializing the bool variable terminator to satisfy conditional jump
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
