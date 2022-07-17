class Solution {
public:
    int countBinarySubstrings(string s) {
       int n=s.size();
	int flag,z,o;
	int ans=0;
	if(s[0]=='0'){flag=1;z=1;o=0;}
	else
	{flag=0;z=0;o=1;}
	for(int i=1;i<n;i++)
	{   
		if(s[i]==s[i-1])
		{
		    
			if(s[i]=='1')
			{   
				o+=1;
				if(flag==0 && o<=z)
				ans+=1;
				
			}
			else
			{
				z+=1;
				if(flag==1 && z<=o)
				ans+=1;
				
			}
			//cout<<s[i]<<" "<<o<<" "<<z<<endl;
		}
		else
		{
		    //cout<<"here"<<endl;
			ans+=1;
			if(flag==1)
			flag=0;
			else
			flag=1;
			
			if(s[i]=='0')
			z=1;
			else
			o=1;
		}
	}
	return ans;


    }
};