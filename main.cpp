/* 
 * I2C scanner for Raspberry Pi
 * no warranties of any kind
 * use at your own risk
 * 
 * File:   main.cpp
 * Author: avasilyev
 *
 * Created on November 14, 2015, 5:43 PM
 */

#include <cstdlib>
#include <iostream>
#include "bcm2835.h"

using namespace std;

int main(int argc, char** argv) {


    char received[1];
    int code = 0;
    char reg = 0;
    std::cout << "BCM2835 I2C bus scanner" << endl;
    std::cout << "http://" << endl; 
    std::cout << "Raspberry Pi I2C connection:" << endl; 
    std::cout << "SCL: P1-05" << endl; 
    std::cout << "SDA: P1-03" << endl; 
    bcm2835_init();
    bcm2835_set_debug(0);
    bcm2835_i2c_begin();
    std::cout << "set baud to 100000" << endl; 
    bcm2835_i2c_set_baudrate(100000);   
    std::cout << endl;
    for(int i = 0; i<0x10; i++) {
        std::cout << "\t+" << std::hex << i;
    }    
    std::cout << endl;
    for(int i = 0; i<7; i++) {
        std::cout << std::hex << i*0x10;
        for(int j=0; j<0x10; j++) {
            bcm2835_i2c_setSlaveAddress(i * 0x10 + j);        
            code = bcm2835_i2c_read_register_rs(&reg, received, 1);
            std::cout << "\t" << (code==0 ? "O" : ".");
        }
        std::cout << endl;
    }

    return 0;
}

