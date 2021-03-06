all: code/recv-server.c code/transfer-client.c
	rm -rf bin tmp
	mkdir bin tmp
	gcc -o bin/recv code/recv-server.c -lbluetooth
	gcc -o bin/transfer code/transfer-client.c -lbluetooth

server: code/recv-server.c
	rm -rf tmp
	mkdir tmp
	gcc -o bin/recv code/recv-server.c -lbluetooth

client: code/transfer-client.c
	gcc -o bin/transfer code/transfer-client.c -lbluetooth
	
