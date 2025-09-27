#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream file;
    file.open("data.txt");
    
	string js[110];    
    string zs[110];  
    string line;
	
	int cnt = 0;       
    
    while(getline(file, line)) 
	{
        if(line.length() == 0) 
		{
            continue;
        }
        
		int mh = 0;
        int pos = -1;
        
		for(int i = 0; i < line.length(); ++i) 
		{
            if(line[i] == ':')
			{
                mh = 1;
                pos = i;
                break;
            }
        }
        
        if(mh == 0)
        {
        	continue;
		}
		
		string j = "";
		for(int i=0;i<pos;++i)
		{
			j = j + line[i];
		}
		
		string z = "";
		for(int i=pos+1;i<line.length();++i)
		{
			z = z + line[i];
		}
		
		js[cnt] = j;
        zs[cnt] = z;
        cnt++;
	}
    file.close();
    
    string ask;
    
	while(1)
    {
    	getline(cin,ask);
		int found = 0;
		if(ask == "Quit")
    	{
    		break;
		}
    	
        for(int i=0;i<cnt;i++) 
		{
            if(js[i] == ask) 
			{
                cout<<zs[i]<<endl;
                found = 1;
                break;
            }
        }
        
		if(found == 0)
		{
            cout<<"Error"<<endl;
        }
	}
	return 0;
}
