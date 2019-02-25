
Debian
====================
This directory contains files used to package BTSd/BTS-qt
for Debian-based Linux systems. If you compile BTSd/BTS-qt yourself, there are some useful files here.

## BTS: URI support ##


BTS-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install BTS-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your BTS-qt binary to `/usr/bin`
and the `../../share/pixmaps/BTS128.png` to `/usr/share/pixmaps`

BTS-qt.protocol (KDE)

