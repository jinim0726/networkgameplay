#include "..\..\Common.h"

int main(int argc, char* argv[])

{

	// ���� �ʱ�ȭ

	WSADATA wsa;

	if (WSAStartup(0x0202, &wsa) != 0)

		return 1;

	printf("[�˸�] ���� �ʱ�ȭ ����\n");



	printf("Winsock Version: %d.%d\n", LOBYTE(wsa.wVersion), HIBYTE(wsa.wVersion));

	printf("Winsock High Version: %d.%d\n", LOBYTE(wsa.wHighVersion), HIBYTE(wsa.wHighVersion));

	printf("Winsock DLL Description: %s\n", wsa.szDescription);

	printf("Winsock System Status: %s\n", wsa.szSystemStatus);



	// ���� ����

	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

	if (sock == INVALID_SOCKET) err_quit("socket()");

	printf("[�˸�] ���� ���� ����\n");



	// ���� �ݱ�

	closesocket(sock);



	// ���� ����

	WSACleanup();



	system("pause");

	return 0;

}