#include <iostream>
#include <string.h>
#include <stdio.h>


void Permutations (char *a, const int k, const int m)
{ // ����a[k], �K, a[m] ���Ҧ��ƦC
	int i;
	char t;
	if (k == m) //��X�ƦC
	{
		for (i =0; i <=m; i++) printf("%c", a[i]);
		printf("\n");
	}
	else // a [k : m] �٦��W�L�@�إH�W���ƦC�A���j���ͥ���
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

