#ifndef SPI_H
#define SPI_H

#include <stdint.h>

void spi_init(void);
uint8_t spi_transfer(uint8_t data);

#endif // SPI_H
