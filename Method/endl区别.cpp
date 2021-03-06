/*
在c++ 中，终端输出换行时，用cout << ...... << endl 与 “\n”都可以，这是初级的认识。
但二者有小小的区别，用endl时会刷新缓冲区，使得栈中的东西刷新一次，但用“\n”不会刷新，它只会换行，盏内数据没有变化。
但一般情况，二者的这点区别是很小的，在大的程序中可能会用到。
建议用endl来换行.endl除了写’\n’进外，还调用flush函数，刷新缓冲区，把缓冲区里的数据写入文件或屏幕.考虑效率就用’\n’.
cout << endl;
除了往输出流中插入一个’\n’还有刷新输出流的作用.cout << endl;等价于 : cout << ‘\n’ << flush;
在没有必要刷新输出流的时候应尽量使用cout << ‘\n’, 过多的endl是影响程序执行效率低下的因素之一.
*/