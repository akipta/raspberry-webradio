# Name: Makefile
# Project: raspberry pi webradio
# Author: Michael Schwarz
# Creation Date: 2012-08-31
# Copyright: (c) 2012 by Michael Schwarz

OBJ=firmware.o menu.o lcd.o language.o lcd2bmp.o io.o ip.o disk.o screens.o settings.o arraylist.o screen_info.o screen_main.o screen_now_playing.o screen_stations.o screen_usb.o screen_shutdown.o screen_settings.o screen_wifi_scan.o screen_wifi_auth.o screen_wifi_connect.o screen_language.o screen_volume.o screen_shoutcast.o screen_shoutcast_list.o screen_shoutcast_genre.o screen_shoutcast_search.o screen_manage_station.o screen_snooze.o screen_timeout.o keyboard.o download.o fonts/fnt_dejavu.o fonts/fnt_dejavu_9.o fonts/fnt_dejavu_9_b.o fonts/fnt_silkscreen_8.o images/info.o images/playing.o images/playlist.o images/song.o images/station.o images/up.o images/usb.o images/enter.o images/space.o images/numbers.o images/back.o images/upper.o images/lower.o images/settings.o images/wifi.o images/language.o images/volume.o images/shoutcast.o images/edit.o images/load.o images/setter.o images/snooze.o images/reset.o images/shutdown.o images/bglight.o
TARGET=firmware
CFLAGS=-g -Wall -O3 -lwiringPi -lasound -lcurl -lxml2 `xml2-config --cflags`
CC=gcc

all: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(TARGET)

.c.o:
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm *.o images/*.o fonts/*.o firmware


iosim: iosim.c
	gcc iosim.c -lcurses -g -o iosim

