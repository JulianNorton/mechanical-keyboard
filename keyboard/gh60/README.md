GH60 keyboard firmware
======================
DIY compact keyboard designed and run by komar007 and Geekhack community.

- Both Rev.A and Rev.B PCB are supported by one firmware binary(issue #64)

## GH60 Resources
- [KOMAR's project page](http://blog.komar.be/projects/gh60-programmable-keyboard/)
- [Prototyping](http://geekhack.org/index.php?topic=34959.0)
- [Rev.A PCB test](http://geekhack.org/index.php?topic=37570.0)
- [Rev.B PCB test](http://geekhack.org/index.php?topic=50685.0)
- [Group buy](http://geekhack.org/index.php?topic=41464.0)


## Build
Move to this directory then just run `make` like:

    $ make

Use `make -f Makefile.pjrc` if you want to use PJRC stack but I find no reason to do so now.


## Keymap
Several version of keymap are available in advance but you are recommended to define your favorite layout yourself. To define your own keymap create file named `keymap_<name>.c` and see keymap document(you can find in top README.md) and existent keymap files.

To build firmware binary hex file with a certain keymap just do `make` with `KEYMAP` option like:

    $ make KEYMAP=[poker|poker_set|poker_bit|plain|hasu|spacefn|hhkb|<name>]
