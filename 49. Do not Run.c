#include<stdio.h>
int main(){
	#ifdef_WIN64
		system("C:\\WINDOWS\\System32\\shutdown -s");
	#elif_WIN32
		system("C:\\WINDOWS\\System32\\shutdown -s");
	#elif__linux__
		system("shutdown -P now");
}
