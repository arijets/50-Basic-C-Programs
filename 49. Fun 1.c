#include<stdio.h>
int main(){
//	#ifdef _WIN64
		system("C:\\WINDOWS\\System32\\shutdown -s");
//	#elif _WIN32
		system("C:\\WINDOWS\\System32\\shutdown -s");
//	#elif __linux__
		system("shutdown -P now");
}
