
HOW TO INSTALL
	Enter next commands in your terminal:
		aclocal
		autoconf
		automake --add-missing
		./configure


HOW TO USE MAKE
	After you successfully finish "HOW TO INSTALL" step you can use next commands:
		make - creates program goodDay in current directory
		make install - creates program goodDay in current directory and install it to
				 /usr/local/bin/, so you could call it from anywhere
		make clean - removes object files and goodDay program from current directory
		make clean-all - delete all files except (h, c, am, ac) extensions and
				 removes program from /usr/local/bin (Possibly you need to enter root password) 


ABOUT PROGRAM AND HOW TO USE IT:
		goodDay program takes 0 or 1 parameter(Your name), and wishing a good day for you =)


In case you'll have any questions - please let me know via email
