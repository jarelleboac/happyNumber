class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # now set a string equal to this broken up number (casting)
        # a new list is assigned to variable string, 
        #and list contains the items of the iterable string 
        # casting it to a list will naturally break on each character:
        
        self = [int(x) for x in str(n)]
        
        for i in string:
            for j in string:
                temp_i = i^2
                temp_j = j^2
                sum = temp_i + temp_j
                if(sum != 1):
                    isHappy(self, sum)
                else:
                    
