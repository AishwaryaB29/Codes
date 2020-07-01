import java.util.*;
//Uses a modified Merge-Sort Algorithm to calculate number of inversions
class soln
{
	//Modified Merge method.
	static long merge(int[] arr, int[] left, int[] right) {
    int i = 0, j = 0;
    long count = 0; //Initialize
    while (i < left.length || j < right.length) {  
    	//Loop till all elements in both subarrays are taken
        if (i == left.length) {
            arr[i+j] = right[j];
            j++; //Left subarray was fully traversed
        } else if (j == right.length) {
            arr[i+j] = left[i];
            i++; //Right subarray was fully traversed
        } else if (left[i] <= right[j]) {
            arr[i+j] = left[i];
            i++; //Left element is less than Right element
            //Hence, no inversion. No count increment.               
        } else {
            arr[i+j] = right[j];
            count += left.length-i;
            //Increment count with the number of inversions
            j++;
        }
    }
    return count;
}
	
	
	static long invCount(int[] arr) {
    if (arr.length < 2)
        return 0;
 
    int m = (arr.length + 1) / 2;
    //Split array into 2 subarrays. D n C.
    int left[] = Arrays.copyOfRange(arr, 0, m);
    int right[] = Arrays.copyOfRange(arr, m, arr.length);
 
    return invCount(left) + invCount(right) + merge(arr, left, right);
	}
	
	public static void main (String[] args) {
		
		Scanner sc  = new Scanner(System.in);
		int n = sc.nextInt(); //Input n taken
		int a[] = new int[n];
		for(int i=0;i<n;i++)
			a[i] = sc.nextInt(); //Array of integers taken
			
		System.out.println(invCount(a)); //Function returns long
    }
} 
 
