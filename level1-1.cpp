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
        cout<<"������ָ��: ";
        getline(cin, zl);
        
        if(zl == "Login") 
		{
            if(flag == 1) 
			{
                cout << "�����˳���ǰ��¼" << endl;
                continue;
            }
            cout<<"�������û���"<<endl;
            getline(cin, name);
            if(name.length() != 1)
            {
            	cout<<"�û�������"<<endl;
			}
            else
			{
				pd = name[0];
				if(pd<'A' || pd>'Z')
	            {
	            	cout<<"�û�������"<<endl; 
				}
				else
				{
					cout<<"��¼�ɹ�"<<endl;	
					flag = 1;			
				}
			}
        }
        else if(zl == "Exit") 
		{
            if(flag == 0) 
			{
                cout<<"δ��¼"<<endl;
            } 
			else 
			{
                name = "";
                cout<<"�˳���¼�ɹ�"<<endl;
                flag = 0;
            }
        }
        else if(zl == "Quit") 
		{
            cout<<"�˳�����"<<endl;
            break;
        }
        else 
		{
            cout << "����ָ��" << endl;
        }
    }
    
    return 0;
}
