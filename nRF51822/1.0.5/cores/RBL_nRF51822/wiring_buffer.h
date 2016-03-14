
#ifndef WIRING_BUFFER_H_
#define WIRING_BUFFER_H_


#define SERIAL_BUFFER_MAX_SIZE 1024

class Buffer
{
	public:
		uint16_t RX_buff[SERIAL_BUFFER_MAX_SIZE];
		uint16_t rx_Head;
		uint16_t rx_Tail;

	public:
		Buffer(void);

		void store_char(uint8_t c);
};


#endif
