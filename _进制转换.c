//设计一个函数，将十进制数转换成二进制、八进制和十六进制。然后在主函数中读入一个整数，调用函数，输出转换结果。
/* 假设将十进制数57转换为八进制
从右到左写出每列的位值，直到发现位值大于该十进制数的列。这样就先得到
    位值：64   8   1
然后去掉位值为64的列，得到：
    位值：8   1
然后，从左至右进行。57除以8得商为7，余数为1，所以在8这列写下1，然后1除以1商为1，余数为0，所以在1这列写下1.
   位值：     8   1
   符号值： 7   1        所以(57)10=(71)8 */
