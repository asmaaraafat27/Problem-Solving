class Solution {
public:
    int romanToInt(string s) {
        map<char , int> value;
		value['I']=1;
		value['V']=5;
		value['X']=10;
		value['L']=50;
		value['C']=100;
		value['D']=500;
		value['M']=1000;

		map<char, int>::iterator it ;
		it=value.find(s[s.length()-1]);
		int total=0,curr=it->second; //1
		for(int i=s.size()-1;i>=0;i--)
        {
			it=value.find(s[i]);
			if(it->second>=curr)
			{
			    total += it->second;
            }
			else
				total -= it->second;

			curr =it->second;
		}
		return total;
    }
};
