AUTOMAKE_OPTIONS = foreign
bin_PROGRAMS = goodDay
goodDay_SOURCES = main.c func.c func.h
clean-all:
	@./test.sh
	@echo "Sudo removing package from /user/local/bin and cleaning current directory"
	@sudo rm /usr/local/bin/${PACKAGE_NAME}
