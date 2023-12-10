#include "types.h"
#include "xmodem.h"


struct xmodem_crc16_protocol_struct
{
    uint8_t header;
    uint8_t block_num;
    uint8_t inverse_block_num;
    uint16_t crc16;
};



/* memory section */
uint8_t *rx_buffer;
uint8_t *tx_buffer;




