#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	struct ch *charactop;
	struct integer *integertop;
	char rd, op;
	int i=0, op1, op2;
	charactop=cclearstack();
	integertop=iclearstack();
	integertop=iclearstack();
	while(1)
	{
		rd=argv[1][i++];
		switch(rd)
		{
			case '+':
			case '-':
			case '/';
			case '*': while ((charactop->data !='(')&&(!cemptystack(charactop)))
			{
				if(priority(rd)>priority(charactop->data))
				break;
				else
				{
					charactop=cpop(charactop, &op);
					integertop=ipop(integertop, &op2);
					integertop=ipop(integerop, eval(op, op1, op2));
				}
			}
			charactop=cpush(charactop,rd);
			break;
			case '(': charactop =cpush(charactop,rd);
			break;
			case ')': integertop=ipop(integertop, &op2);
					integertop=ipop(integertop,&op1);
					charactop cpop(charactop, &op);
					while(op!='(')
					{
integertop = ipop(integertop, &op2);
integertop = ipop(integertop, &op1);
}
}
break;
case '\0': while (!= cemptystack(charactop))
{
charactop = cpop(charactop, &op);
integertop = ipop(integertop, &op2);
integertop = ipop(integertop, &op1);
integertop = ipush(integertop, eval(op, op1, op2);
}
integertop = ipop(integertop, &op1);
printf("\n The final solution is: %d", op1);
return 0;
default: integertop = ipush(integertop, rd - '0');
}
}
}
int eval(char op, int op1, int op2)
{
switch (op)
{
case '+': return op1 + op2;
case '-': return op1 - op2;
case '/': return op1 / op2;
case '*': return op1 * op2;
}
}
int priority (char op)
{
switch(op)
{
case '^':
case '$': return 3;
case '*':
case '/': return 2;
case '+':
case '-': return 1;
}
}
