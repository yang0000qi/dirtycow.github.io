/*************************************************************************
	> File Name: copyonwrite.cpp
	> Author: 
	> Mail: 
	> Created Time: 2016年10月31日 星期一 18时19分56秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main(int argc, char **argv)
{
	string sa = "Copy on write";
	string sb = sa;
	string sc = sb;
	printf("sa char buffer address: 0x%08X\n", sa.c_str());
	printf("sb char buffer address: 0x%08X\n", sb.c_str());
	printf("sc char buffer address: 0x%08X\n", sc.c_str());
 
	sc = "Now writing...";
	printf("After writing sc:\n");
	printf("sa char buffer address: 0x%08X\n", sa.c_str());
	printf("sb char buffer address: 0x%08X\n", sb.c_str());
	printf("sc char buffer address: 0x%08X\n", sc.c_str());
 
	return 0;
}
