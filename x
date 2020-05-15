p=k/n;
		if(k%n!=0){cout << "Case #" << x << ": " << "IMPOSSIBLE" << endl;continue;}
		else
		{
		  
		  string s="";
		  for(int i=1;i<=n;i++){if(i!=p)s+=(char)(i+48);}
		  vector<vector<int>> a(n,vector<int>(n));
		  for(int i=0;i<n;i++)
		   {  r=0;
			   for(int j=0;j<n;j++)
			   { if(i==j)a[i][j]=p;
				 else
				   { a[i][j]=(int)(s[r++]-48);}
			   }
			  s=s[n-2]+s;
			  s.erase(n-1);
		  }
		  
