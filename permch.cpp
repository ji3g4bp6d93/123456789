#include <iostream>
#include <string.h>
#include <stdio.h>


void Permutations (char *a, const int k, const int m)
{ // 產生a[k], …, a[m] 的所有排列
	int i;
	char t;
	if (k == m) //輸出排列
	{
		for (i =0; i <=m; i++) printf("%c", a[i]);
		printf("\n");
	}
	else // a [k : m] 還有超過一種以上的排列，遞迴產生它們
		for (i = k ; i <= m ; i++)
		{
			t = a[k]; a[k] = a[i]; a[i] = t;
			Permutations(a, k+1, m) ;
			t = a[k]; a[k] = a[i]; a[i] = t;
		}
}


main() {
	char str[4];
	strcpy(str, "wesy");
	Permutations(str, 0, 3);
}

