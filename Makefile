nexos.o:
	gcc -c src/*.c -Iinclude -o lib/nexos.o -static

libnexos.a: nexos.o
	ar rcs lib/libnexos.a lib/nexos.o

testapp: libnexos.a
	gcc -g test/main.c -Iinclude -Llib -lnexos -o build/test.exe