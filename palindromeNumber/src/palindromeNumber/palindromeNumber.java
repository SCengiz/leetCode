package palindromeNumber;

import java.util.concurrent.CountDownLatch;

public class palindromeNumber {
	int num_;
	public palindromeNumber(int num) {
		// TODO Auto-generated constructor stub
		this.num_ = num;
	}

	boolean isPalindrome() {
		String intToStr = String.valueOf(this.num_);
		String reverseStr = "";
		int sizeOfString = intToStr.length();
		int count = 0;
		for(int kk = sizeOfString - 1; kk >= 0; --kk) {
			reverseStr += intToStr.charAt(kk);
		}
		for(int kk = 0; kk < sizeOfString/2; kk++) {
			if(intToStr.charAt(kk) == reverseStr.charAt(kk)) {
				count += 1;
			}
		}

		if(count == sizeOfString/2) {
			return true;
		}
		
		return false;
	}	
}
