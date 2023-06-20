#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

void CLSMenuSystemDlg::Login_Reg_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码

	if (Login_User_ET_IDC.IsWindowVisible())
	{
		//关闭登录界面
		Login_User_ET_IDC.ShowWindow(FALSE);

		Login_Password_ET_IDC.ShowWindow(FALSE);

		Login_LoginUser_B_IDC.ShowWindow(FALSE);

		//开启注册界面
		Reg_User_ET_IDC.ShowWindow(TRUE);

		Reg_Password_ET_IDC.ShowWindow(TRUE);

		Reg_PasswordIdentify_T0_IDC.ShowWindow(TRUE);
		Reg_PasswordIdentify_T1_IDC.ShowWindow(TRUE);
		Reg_PasswordIdentify_ET_IDC.ShowWindow(TRUE);

		Reg_PhoneNumber_T_IDC.ShowWindow(TRUE);
		Reg_PhoneNumber_ET_IDC.ShowWindow(TRUE);

		Reg_Sex_T_IDC.ShowWindow(TRUE);
		Reg_Sex_R0_IDC.ShowWindow(TRUE);
		Reg_Sex_R1_IDC.ShowWindow(TRUE);

		Reg_Perfer_T0_IDC.ShowWindow(TRUE);
		Reg_Perfer_T1_IDC.ShowWindow(TRUE);
		Reg_Perfer_CK0_IDC.ShowWindow(TRUE);
		Reg_Perfer_CK1_IDC.ShowWindow(TRUE);
		Reg_Perfer_CK2_IDC.ShowWindow(TRUE);
		Reg_Perfer_CK3_IDC.ShowWindow(TRUE);

		Reg_RegisterUser_B_IDC.ShowWindow(TRUE);
		Reg_Reset_B_IDC.ShowWindow(TRUE);

		//刷新种类复选框
		unsigned Reg_Perfer_CK0_IDC_Temp_I = Random(10, 0);
		CString Reg_Perfer_CK0_IDC_CS = MS_Perfer_CSA->GetAt(Reg_Perfer_CK0_IDC_Temp_I);
		Reg_Perfer_CK0_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK0_IDC.SetWindowTextW(Reg_Perfer_CK0_IDC_CS);
		Reg_Perfer_CK0_IDC.ShowWindow(TRUE);

		unsigned Reg_Perfer_CK1_IDC_Temp_I = Random(10, 1);
		CString Reg_Perfer_CK1_IDC_CS = MS_Perfer_CSA->GetAt(Reg_Perfer_CK1_IDC_Temp_I);
		Reg_Perfer_CK1_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK1_IDC.SetWindowTextW(Reg_Perfer_CK1_IDC_CS);
		Reg_Perfer_CK1_IDC.ShowWindow(TRUE);

		unsigned Reg_Perfer_CK2_IDC_Temp_I = Random(10, 2);
		CString Reg_Perfer_CK2_IDC_CS = MS_Perfer_CSA->GetAt(Reg_Perfer_CK2_IDC_Temp_I);
		Reg_Perfer_CK2_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK2_IDC.SetWindowTextW(Reg_Perfer_CK2_IDC_CS);
		Reg_Perfer_CK2_IDC.ShowWindow(TRUE);

		unsigned Reg_Perfer_CK3_IDC_Temp_I = Random(10, 3);
		CString Reg_Perfer_CK3_IDC_CS = MS_Perfer_CSA->GetAt(Reg_Perfer_CK3_IDC_Temp_I);
		Reg_Perfer_CK3_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK3_IDC.SetWindowTextW(Reg_Perfer_CK3_IDC_CS);
		Reg_Perfer_CK3_IDC.ShowWindow(TRUE);

	}
	else
	{
		//开启登录界面
		Login_User_ET_IDC.ShowWindow(TRUE);

		Login_Password_ET_IDC.ShowWindow(TRUE);

		Login_LoginUser_B_IDC.ShowWindow(TRUE);

		//关闭注册界面
		Reg_User_ET_IDC.ShowWindow(FALSE);

		Reg_Password_ET_IDC.ShowWindow(FALSE);

		Reg_PasswordIdentify_T0_IDC.ShowWindow(FALSE);
		Reg_PasswordIdentify_T1_IDC.ShowWindow(FALSE);
		Reg_PasswordIdentify_ET_IDC.ShowWindow(FALSE);

		Reg_PhoneNumber_T_IDC.ShowWindow(FALSE);
		Reg_PhoneNumber_ET_IDC.ShowWindow(FALSE);

		Reg_Sex_T_IDC.ShowWindow(FALSE);
		Reg_Sex_R0_IDC.ShowWindow(FALSE);
		Reg_Sex_R1_IDC.ShowWindow(FALSE);

		Reg_Perfer_T0_IDC.ShowWindow(FALSE);
		Reg_Perfer_T1_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK0_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK1_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK2_IDC.ShowWindow(FALSE);
		Reg_Perfer_CK3_IDC.ShowWindow(FALSE);

		Reg_RegisterUser_B_IDC.ShowWindow(FALSE);
		Reg_Reset_B_IDC.ShowWindow(FALSE);
	}
	MS_Message_T_V = "";

	Login_User_ET_V = "";
	Login_Password_ET_V = "";


	Reg_User_ET_V = "";
	Reg_Password_ET_V = "";
	Reg_PasswordIdentify_ET_V = "";
	Reg_PhoneNumber_ET_V = "";
	Update_Window(MS_Message_T_Window, TEXT(""));
	UpdateData(FALSE);
}


void CLSMenuSystemDlg::Login_LoginUser_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);

	std::string Login_User_ET_V_Temp = CT2A(Login_User_ET_V.GetString());

	std::string Login_Password_ET_V_Temp = CT2A(Login_Password_ET_V.GetString());

	CString Login_UserIdentify_Temp_CS;
	std::string Login_UserIdentify_Temp_S;//登录用户
	std::regex Login_IdentifyUser_ET_Acc_Temp_Regex(Login_User_ET_V_Temp);

	CString Login_Password_ET_Acc_Temp_CS;
	std::string Login_Password_ET_Temp_S;
	std::regex Login_Password_ET_Temp_Regex(Login_Password_ET_Temp_S);

	CString Login_PasswordIdentify_Temp_CS;
	std::string Login_PasswordIdentify_Temp_S;
	std::regex Login_PasswordIdentify_ET_Acc_Temp_Regex(Login_Password_ET_V_Temp);

	CString Login_UserIdentify_ET_TempMsg = TEXT("该用户未注册!");
	//CString Login_UserIdentify_ET_TempMsg = TEXT("登录成功!");
	CString Login_PasswordIdentify_ET_TempMsg = TEXT("密码错误!");
	CString Login_AdminPasswordIdentify_ET_TempMsg = TEXT("管理员密码错误!");

	bool Login_Acc_Error_Bool = FALSE;
	bool* Login_Acc_Error_Bool_P = &Login_Acc_Error_Bool;
	
	//开发者设置是否直接管理员登录
	if (AdminLogin_Setting)
	{
		//查询
		pRecordset.CreateInstance(__uuidof(Recordset));
		MS_Sql_CS = TEXT("select * from UserID");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);//将查询结果导入pRecordset数据容器

		while (!pRecordset->adoEOF)
		{
			Login_UserIdentify_Temp_CS = (TCHAR *)(_bstr_t)pRecordset->GetFields()->GetItem("Username")->Value;
			Login_UserIdentify_Temp_S = CT2A(Login_UserIdentify_Temp_CS.GetString());
			if (!Login_UserIdentify_Temp_S.empty())
			{
				Login_UserIdentify_Temp_S.erase(Login_UserIdentify_Temp_S.find_last_not_of(" ") + 1);
			}

			//AfxMessageBox(temp);//以对话框显示所有sname
			//MessageBox(Login_IdentifyUser_Temp_CS);
			//MessageBox(Login_User_ET_V);
			if (std::regex_match(Login_UserIdentify_Temp_S, Login_IdentifyUser_ET_Acc_Temp_Regex) || Login_User_ET_V.Compare(TEXT("Admin")) == 0)
			{
				*Login_Acc_Error_Bool_P = TRUE;
				break;
			}
			else
			{
				MS_Message_T_V = Login_UserIdentify_ET_TempMsg;
				*Login_Acc_Error_Bool_P = FALSE;
			}
			pRecordset->MoveNext();
		}
		if (Login_Acc_Error_Bool)
		{
			MS_Sql_CS = TEXT("select Password from UserID where Username = '") + Login_User_ET_V + TEXT("'");
			//MessageBox(MS_Sql_CS);
			pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
			Login_PasswordIdentify_Temp_CS = (TCHAR *)(_bstr_t)pRecordset->GetFields()->GetItem("Password")->Value;
			Login_PasswordIdentify_Temp_S = CT2A(Login_PasswordIdentify_Temp_CS.GetString());
			if (!Login_PasswordIdentify_Temp_S.empty())
			{
				Login_PasswordIdentify_Temp_S.erase(Login_PasswordIdentify_Temp_S.find_last_not_of(" ") + 1);
			}

			//MessageBox(Login_PasswordIdentify_Temp_CS);
			if (std::regex_match(Login_PasswordIdentify_Temp_S, Login_PasswordIdentify_ET_Acc_Temp_Regex))
			{
				if (Login_User_ET_V.Compare (TEXT ("Admin")) != 0)
				{
					MS_User_CS = Login_User_ET_V;//将登录用户名赋值到全局登录用户名

					Update_Window(MS_Message_T_Window, TEXT("登录成功"));
					Update_Window(MS_User_T_Window, MS_User_CS);

					Turn_Of_Window(Login_Window, FALSE);
					Turn_Of_Window(Register_Window, FALSE);
					Turn_Of_Window(MS_Window, TRUE);

					if (!Search_Setting)
					{
						MS_Search_B_IDC.EnableWindow(FALSE);
					}
					if (!Histroy_Setting)
					{
						MS_History_B_IDC.EnableWindow(FALSE);
					}
					if (!Order_Setting)
					{
						MS_Order_B_IDC.EnableWindow(FALSE);
					}
				}
				else if (Login_User_ET_V.Compare(TEXT("Admin")) == 0)
				{
					if (Login_Password_ET_V.Compare(TEXT("Admin")) == 0)
					{
						MS_User_CS = Login_User_ET_V;

						Update_Window(MS_Message_T_Window, TEXT("欢迎回来, 管理员!"));
						Update_Window(MS_User_T_Window, MS_User_CS);

						Turn_Of_Window(Login_Window, FALSE);
						Turn_Of_Window(Register_Window, FALSE);
						Turn_Of_Window(Admin_Window, TRUE);
					}
					else
					{
						Update_Window(MS_Message_T_Window, Login_AdminPasswordIdentify_ET_TempMsg);
					}
				}
				//MessageBox(TEXT("登录成功"));
			}
			else
			{
				Update_Window(MS_Message_T_Window, Login_PasswordIdentify_ET_TempMsg);
			}
		}
	}
	else
	{
		//直接登录管理员设置
		MS_User_CS = Login_User_ET_V;

		Update_Window(MS_Message_T_Window, TEXT("欢迎回来, 管理员!"));
		Update_Window(MS_User_T_Window, MS_User_CS);

		Turn_Of_Window(Login_Window, FALSE);
		Turn_Of_Window(Register_Window, FALSE);
		Turn_Of_Window(Admin_Window, TRUE);
	}

	UpdateData(FALSE);
}

void CLSMenuSystemDlg::Login_Reset_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Login_User_ET_V = "";
	Login_Password_ET_V = "";
	Reg_User_ET_V = "";
	Reg_Password_ET_V = "";
	Reg_PasswordIdentify_ET_V = "";
	Reg_PhoneNumber_ET_V = "";
	Reg_Perfer_CK0_V = -1;
	Reg_Perfer_CK1_V = -1;
	Reg_Perfer_CK2_V = -1;
	Reg_Perfer_CK3_V = -1;
	UpdateData(FALSE);
}