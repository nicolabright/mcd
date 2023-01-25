all:    mcd.c
	gcc mcd.c -o mcd.exe
	@ cls
	@ mcd.exe 31415929 278999

clean:
	del mcd.exe 2> nul
