int main() {
  int a;
  int b;
  int c;
  int d;
  a = 0;
  b = 0;
  c = -2;
  d = 54;
  while (a < 10) {
    print(a);
    while (b < 10) {
      print(b);
      b = b + 1;
    }
    a = a + 1;
    b = 0;
  }
}

/*
0
0
1
2
3
4
5
6
7
8
9
1
0
1
2
3
4
5
6
7
8
9
2
0
1
2
3
4
5
6
7
8
9
3
0
1
2
3
4
5
6
7
8
9
4
0
1
2
3
4
5
6
7
8
9
5
0
1
2
3
4
5
6
7
8
9
6
0
1
2
3
4
5
6
7
8
9
7
0
1
2
3
4
5
6
7
8
9
8
0
1
2
3
4
5
6
7
8
9
9
0
1
2
3
4
5
6
7
8
9
*/