	/*	cout<<(c&b)<<flush;	//0  //1	//0
	cout<<(c>>1&b)<<flush;	//1  //0	//0
	cout<<(c>>2&b)<<flush;	//2  //1	//2
	cout<<(c>>3&b)<<flush;	//3  //1	//3
	a=((a<<3)+(a<<2)+(a<<0));
	cout<<a;*/
#ifndef MULT_H
#define MULT_H
int cbit(int x){
	static int a=0;
	static const int n2=1;
	int nx;
	nx=(x>>a&n2);
	if(a>=32){
	a=0;
	return -1;
	}
	++a;
	return nx;
}
int times(int x){
	static int a=0;
	if(x==-1){
		a=0;
		return 0;
	}
	x=a+1-x;
	++a;
	return x;
}
int mult(int x,int y){
	static const int n1=1;
	int cb=cbit(y);
	if(cb==-1)
		return 0;
	else if(cb==0)
	{
		times(0);
	return mult(x,y);
	}
	x=((x<<times(cb))+mult(x,y));
	times(-1);
	return x;
}
#endif
