// normal method one
int mod(int a, int b, int c){  
    int i, ans = 1;  
    for (i = 0; i < b; i++)  
        ans = (ans * a) % c;    //在这里对c取余是为了防止数据溢出  
    return ans;  
}

// quick method one
int quickMod(int a, int b, int c)  
{  
    int ans = 1;  
    while (b)  
    {  
  
        if (b % 2 == 1)  
            ans = (ans * a) % c;  
        b /= 2;  
        a = (a * a) % c;  
    }  
    return ans;  
}

// quick method two
int quickMod(int a, int b, int n)
{
	int ans = 1;
	while (b)
	{  
		if (b & 0x1)<span style="white-space:pre">	</span>//如果二进制位为1
			ans = ans * a % n;
		a = a * a % n;
		b >>= 1;<span style="white-space:pre">	</span>//b向又移1位
	}
	return ans;
}
