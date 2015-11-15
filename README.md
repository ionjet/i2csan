# i2csan
Simple I2C bus scanner tool for Raspberry Pi
based on [Broadcom BCM 2835 library by Mike McCauley](http://www.airspayce.com/mikem/bcm2835/index.html)

Since i2cdetect doesn't work on RPi 2 out of the box I needed a tool to scan I2C bus.

Here is a sample output that shows the presence of devices at 0x50 and 0x68:

	BCM2835 I2C bus scanner
	https://github.com/gitstrah/i2csan
	Raspberry Pi I2C connection:
	SCL: P1-05
	SDA: P1-03
	set baud to 100000

	        +0      +1      +2      +3      +4      +5      +6      +7      +8      +9      +a      +b      +c      +d      +e      +f
	0       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .
	10      .       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .
	20      .       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .
	30      .       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .
	40      .       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .
	50      O       .       .       .       .       .       .       .       .       .       .       .       .       .       .       .
	60      .       .       .       .       .       .       .       .       O       .       .       .       .       .       .       .
