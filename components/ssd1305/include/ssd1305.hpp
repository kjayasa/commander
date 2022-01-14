#ifndef __SSD1305_HPP
#define __SSD1305_HPP

#include "ssd1305.h"

#ifdef __cplusplus

//TODO: string view

class Ssd1305
{

private:
    
    ssd_1305_device_handle_t m_hDev;

public:
    Ssd1305(ssd_1305_device_config_t *config);

    void setPixel( uint8_t x, uint8_t y, uint8_t val);
    void clear_framebuffer( uint8_t fillColor);
    void draw_bitmap( uint8_t x, uint8_t y, const bitmap_image *pImage, draw_orintation orintation, transfer_mode transferMode);
    void draw_text( const char *string, uint8_t x, uint8_t y, const font *pFont, draw_orintation orintation, transfer_mode transferMode);
    void send_buffer();
};

#endif

#endif
