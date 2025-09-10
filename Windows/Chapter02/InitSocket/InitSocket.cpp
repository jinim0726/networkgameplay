#include "..\..\Common.h"

int main(int argc, char* argv[])

{

	// 윈속 초기화

	WSADATA wsa;

	if (WSAStartup(0x0202, &wsa) != 0)

		return 1;

	printf("[알림] 윈속 초기화 성공\n");



	printf("Winsock Version: %d.%d\n", LOBYTE(wsa.wVersion), HIBYTE(wsa.wVersion));

	printf("Winsock High Version: %d.%d\n", LOBYTE(wsa.wHighVersion), HIBYTE(wsa.wHighVersion));

	printf("Winsock DLL Description: %s\n", wsa.szDescription);

	printf("Winsock System Status: %s\n", wsa.szSystemStatus);



	// 소켓 생성

	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

	if (sock == INVALID_SOCKET) err_quit("socket()");

	printf("[알림] 소켓 생성 성공\n");



	// 소켓 닫기

	closesocket(sock);



	// 윈속 종료

	WSACleanup();



	system("pause");

	return 0;

}