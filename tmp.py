class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        positive = (dividend < 0) is (divisor < 0)
        dividend, divisor = abs(dividend), abs(divisor)
        res = 0
        while dividend >= divisor:
            i_times_of_divisor, i = divisor, 1
            while dividend >= i_times_of_divisor:
                dividend -= i_times_of_divisor
                res += i
                i <<= 1
                i_times_of_divisor <<= 1
        if not positive:
            res = -res
        return min(max(res, -2**31), 2**31-1)
        