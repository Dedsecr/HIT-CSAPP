/*
在链接器工作过程中，将foo6.c中的main()函数视为强符号；将bar6.c中未初始化的main变量视为弱符号。
则p2()中对main的引用即是对main()函数的引用。
程序开始时进入foo6.c中的main()函数，然后进入p2()函数，在p2()函数中调用printf()打印main()函数的地址。
*/