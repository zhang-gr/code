#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string name = "";
    string zl;
    int flag = 0;
	char pd;  
    while(1) 
	{
        cout<<"请输入指令: ";
        getline(cin, zl);
        
        if(zl == "Login") 
		{
            if(flag == 1) 
			{
                cout << "请先退出当前登录" << endl;
                continue;
            }
            cout<<"请输入用户名"<<endl;
            getline(cin, name);
            if(name.length() != 1)
            {
            	cout<<"用户名错误"<<endl;
			}
            else
			{
				pd = name[0];
				if(pd<'A' || pd>'Z')
	            {
	            	cout<<"用户名错误"<<endl; 
				}
				else
				{
					cout<<"登录成功"<<endl;	
					flag = 1;			
				}
			}
        }
        else if(zl == "Exit") 
		{
            if(flag == 0) 
			{
                cout<<"未登录"<<endl;
            } 
			else 
			{
                name = "";
                cout<<"退出登录成功"<<endl;
                flag = 0;
            }
        }
        else if(zl == "Quit") 
		{
            cout<<"退出程序"<<endl;
            break;
        }
        else 
		{
            cout << "错误指令" << endl;
        }
    }
    
    return 0;
}
