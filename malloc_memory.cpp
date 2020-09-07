/*
 * 栈区(stack)：
 *      存放函数的参数值、局部变量的值等 
 *      由编译器自动分配和释放
 *      其操作方式类似于数据结构中的栈
 * 堆区(heap)：
 *      一般由程序员分配和释放，若程序员不释放，程序结束时可能由操作系统回收
 *      分配方式类似于链表
 *      注意它与数据结构中的堆是两回事 
 * 全局区（静态区）(static)：
 *      全局变量和静态变量的存储是放在一起的
 *      初始化的全局变量和静态变量在一块区域，未初始化的全局变量和未初始化的静态变量在相邻的另一块区域
 *      程序结束后由系统释放
 * 文字常量区：
 *      常量字符串就是放在这里
 *      程序结束后由系统释放
 * 程序代码区：
 *      存放函数体的二进制代码
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std; 

int a = 0; //全局初始化区
char *p1;  //全局未初始化区

int main()
{
  int b; //栈
  char s[] = "abc"; //栈
  char *p2; //栈
  const char *p3 = "123456"; //123456在常量区， p3 在栈上
  static int c = 0; //全局（静态）初始化区
  p1 = (char*)malloc(10); //分配10字节在堆区
  p2 = (char*)malloc(20); //分配20字节在堆区
  strcpy(p1, "123456"); //123456在常量区，编译器可能优化与 p3 指向的同一位置
  std::cout << "value = " << p1 << '\n';


   char *str;
 
   /* 最初的内存分配 */
   str = (char *) malloc(15);
   strcpy(str, "runoob");
   printf("String = %s,  Address = %p\n", str, str);
 
   /* 重新分配内存 */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %p\n", str, str);
 
   /* 释放已分配的内存 */
   free(str);
 
   return(0);
}