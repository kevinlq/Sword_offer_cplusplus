## [home](../README.md)

## Solution2

**主要考察字符串的操作**

>C/C++中每个字符串都以字符'\0'作为结尾.所以每个字符串都会有一个额外字符开销，操作时稍不留神就会越界,比如

```C
char str[10];
strcpy(str,"0123456789");
```
声明了长度为10的字符数组，然后将字符串"0123456789"复制到数组中，这个字符串看起来只有10个字符，但实际上末尾还有一个'\0'，
所以这样复制时会造成越界错误


字符串测试

```C
	char str1[] = "hello world";
	char str2[] = "hello world";

	char *str3 = "hello world";
	char *str4 = "hello world";

	if (str1 == str2)
		cout << "str1 and str2 are same.\n";
	else
		cout << "str1 and str2 are not same.\n";

	if (str3 == str4)
		cout << "str3 and str4 are same.\n";
	else
		cout << "str3 and str4 are not same.\n";
```
输出结果:

```C
str1 and str2 are not same.
str3 and str4 are same.
```
