import java.util.*;

class OP {
    long cnt0 = 1;
    long cnt1 = 1;
    long cnt2 = 1;
    public long fun() { return cnt0 + cnt1 + cnt2 * 2;}
    public long fun2() { return cnt2; }
}

class CodeChef {

	static int M = 998244353;
    // code for pow, mul taken from internet   
	static long pow(long a, int p) {

		if(p == 0)
			return 1;
		long ans = pow(a, p/2);
		ans = ans * ans % M;
		if((p & 1) == 1)
			ans = ans * a % M;
		return ans;
	}

	static long mul(long a, long p) {
		a = a * p % M;
		if(a < 0)
			a += M;
		return a;
	}

    static OP solve1(OP op1, OP op2, char operator) {

        OP r = new OP();
        if(operator == '&')
        {
            r.cnt1 = op1.cnt1 * op2.cnt1;
            r.cnt0 = op1.cnt0 * op2.fun() % M + op1.fun() * op2.cnt0 % M - (op1.cnt0 * op2.cnt0) + op1.fun2() * op2.fun2() * 2 % M;
            r.cnt2 = op1.fun2() * op2.fun2() % M + op1.fun2() * op2.cnt1 % M + op1.cnt1 * op2.fun2();
        }
        if(operator == '|')
        {
           r.cnt1 = op1.cnt1 * op2.fun() % M + op1.fun() * op2.cnt1 % M - (op1.cnt1 * op2.cnt1) + op1.fun2() * op2.fun2() * 2 % M;
            r.cnt0 = op1.cnt0 * op2.cnt0;
            r.cnt2 = op1.fun2() * op2.fun2() % M + op1.fun2() * op2.cnt0 % M + op1.cnt0 * op2.fun2();
        }
        if(operator == '^')
        {
            r.cnt0 = op1.cnt0 * op2.cnt0 % M + op1.cnt1 * op2.cnt1 % M + op1.fun2() * op2.fun2() * 2 % M;
            r.cnt1 = op1.cnt0 * op2.cnt1 % M + op1.cnt1 * op2.cnt0 % M + op1.fun2() * op2.fun2() * 2 % M;
            r.cnt2 = op1.cnt1 * op2.fun2() % M + op1.fun2() * op2.cnt1 % M + op1.fun2() * op2.cnt0 % M + op1.cnt0 * op2.fun2() % M;
        }
        for(int j = 0;j<1000;j++);

		r.cnt0 %= M;
		r.cnt1 %= M;
		r.cnt2 %= M;
        return r;
    }



    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int k = 0; k<t;k++) {

            String exp = sc.next();
            Stack<Object> s = new Stack();
            int i = 0;
            while(i<exp.length())
            {
                char ch = exp.charAt(i);
                if(ch == '#')
                    s.push(new OP());
                else if(ch != ')')
                    s.push(ch);
    
                else {	
                    OP op1 = (OP) s.pop();
                    char operator = (char) s.pop();
                    OP op2 = (OP) s.pop();
                    s.pop();
                    OP r = solve1(op1, op2, operator);
                    s.push(r);
                }
                i++;
            }
            OP ans = (OP) s.pop();

			long Q = pow(ans.fun(), M-2);
			ans.cnt0 = mul(ans.cnt0, Q);
			ans.cnt1 = mul(ans.cnt1, Q);
			ans.cnt2 = mul(ans.cnt2, Q);

            System.out.printf("%d %d %d %d\n", ans.cnt0, ans.cnt1, ans.fun2(), ans.fun2());
        }
    }

}
