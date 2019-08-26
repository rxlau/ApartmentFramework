#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <arpa/inet.h>

class LEDStrip {

        std::string address;
        std::string port;
        std::string name;
        int id;

        int length;
        char* data;

        LEDStrip();
        LEDStrip(std::string address, std::string port, int id, int length);

    public:

        void set_led_color(int i, uint8_t r, uint8_t g, uint8_t b);
        void set_led_brightness(int i, uint8_t brightness);
        void set_strip_color(uint8_t r, uint8_t g, uint8_t b);
        void set_brightness(uint8_t brightness);
        void update();

};

