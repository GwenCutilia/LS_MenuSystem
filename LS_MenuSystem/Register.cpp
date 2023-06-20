#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

void CLSMenuSystemDlg::Reg_Reset_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
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

	Reg_Perfer_CK0_V = -1;
	Reg_Perfer_CK1_V = -1;
	Reg_Perfer_CK2_V = -1;
	Reg_Perfer_CK3_V = -1;
	UpdateData(FALSE);
}

void CLSMenuSystemDlg::Reg_RegisterUser_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码

	UpdateData(TRUE);

	CString Reg_Sex_R = TEXT("NULL");
	CString Reg_Perfer_CK = TEXT("NULL");
	CString Reg_UserAvatarPath = TEXT("Default");
	CString Reg_Recom_V = TEXT("TRUE");

	CString Reg_Perfer_CK0_IDC_CS;
	CString Reg_Perfer_CK1_IDC_CS;
	CString Reg_Perfer_CK2_IDC_CS;
	CString Reg_Perfer_CK3_IDC_CS;

	std::string Reg_User_ET_V_Temp = CT2A(Reg_User_ET_V.GetString());
	std::string Reg_Password_ET_V_Temp = CT2A(Reg_Password_ET_V.GetString());
	std::string Reg_PasswordIdentify_ET_V_Temp = CT2A(Reg_PasswordIdentify_ET_V.GetString());
	std::string Reg_PhoneNumber_ET_V_Temp = CT2A(Reg_PhoneNumber_ET_V.GetString());

	std::regex Reg_User_ET_V_Regex("[\\w]+");
	std::regex Reg_Password_ET_V_Regex("[\\w]{8}");
	std::regex Reg_PasswordIdentify_ET_V_Regex(Reg_Password_ET_V_Temp);
	std::regex Reg_PhoneNumber_ET_V_Regex("[1]{1}[0-9]{10}");

	std::regex Reg_IdentifyUser_V_Temp_Regex(Reg_User_ET_V_Temp);

	CString MS_Message_T_V_Acc_Msg = TEXT("注册成功!");
	CString Reg_User_ET_V_Acc_Msg = TEXT("用户名为空!");
	CString Reg_UserIdentify_Temp_Acc_Msg = TEXT("用户名重复!");
	CString Reg_Password_ET_V_Acc_Msg = TEXT("密码不合规范!");
	CString Reg_PasswordIdentify_ET_V_Acc_Msg = TEXT("两次密码应该保持一致!");
	CString Reg_PhoneNumber_ET_V_Acc_Msg = TEXT("电话号码不合规范!");
	CString Reg_Sex_R_V_Acc_Msg = TEXT("未选定性别按钮");

	BOOL Reg_Acc_Error_Bool = FALSE;
	BOOL* Reg_Acc_Error_Bool_P = &Reg_Acc_Error_Bool;
	BOOL Reg_IdentifyUser_Flag = FALSE;
	BOOL* Reg_IdentifyUser_Flag_P = &Reg_IdentifyUser_Flag;
	if (Register_Setting)
	{
		//查询
		pRecordset.CreateInstance(__uuidof(Recordset));
		MS_Sql_CS = TEXT("select * from UserID");
		pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);//将查询结果导入pRecordset数据容器

		while (!pRecordset->adoEOF)
		{
			CString Reg_IdentifyUser_Temp_CS = (TCHAR *)(_bstr_t)pRecordset->GetFields()->GetItem("Username")->Value;
			std::string Reg_IdentifyUser_Temp_S = CT2A(Reg_IdentifyUser_Temp_CS.GetString());

			if (!Reg_IdentifyUser_Temp_S.empty())
			{
				Reg_IdentifyUser_Temp_S.erase(Reg_IdentifyUser_Temp_S.find_last_not_of(" ") + 1);
			}

			/*MessageBox(Reg_IdentifyUser_Temp_CS);
			MessageBox(Reg_User_ET_V);*/
			if (!std::regex_match(Reg_IdentifyUser_Temp_S, Reg_IdentifyUser_V_Temp_Regex))
			{
				//MessageBox(TEXT("用户名不重复"));
				*Reg_IdentifyUser_Flag_P = TRUE;
			}
			else
			{
				Update_Window(MS_Message_T_Window, Reg_UserIdentify_Temp_Acc_Msg);
				*Reg_Acc_Error_Bool_P = TRUE;
				*Reg_IdentifyUser_Flag_P = FALSE;
				break;
			}
			pRecordset->MoveNext();
		}

		if (std::regex_match(Reg_User_ET_V_Temp, Reg_User_ET_V_Regex) && Reg_IdentifyUser_Flag)
		{
			if (std::regex_match(Reg_Password_ET_V_Temp, Reg_Password_ET_V_Regex))
			{
				//MessageBox(TEXT("Reg_Userpassword_ET_Acc_tmp for YES"));
				if (std::regex_match(Reg_PasswordIdentify_ET_V_Temp, Reg_PasswordIdentify_ET_V_Regex))
				{
					//MessageBox(TEXT("Reg_Identifypassword_ET_Acc_tmp for YES"));
					if (std::regex_match(Reg_PhoneNumber_ET_V_Temp, Reg_PhoneNumber_ET_V_Regex))
					{
						if (Reg_Sex_R_V == FALSE)
						{
							Reg_Sex_R = TEXT("男性");
						}
						else if (Reg_Sex_R_V == TRUE)
						{
							Reg_Sex_R = TEXT("女性");
						}
						if (Reg_Sex_R_V != -1)
						{
							if (Reg_Perfer_CK0_V || Reg_Perfer_CK1_V || Reg_Perfer_CK2_V || Reg_Perfer_CK3_V)
							{
								Reg_Perfer_CK = TEXT("");//重新初始化种类字符串
								if (Reg_Perfer_CK0_V)
								{
									Reg_Perfer_CK0_IDC.GetWindowTextW(Reg_Perfer_CK0_IDC_CS);
									Reg_Perfer_CK += Reg_Perfer_CK0_IDC_CS + TEXT(" ");
								}
								if (Reg_Perfer_CK1_V)
								{
									Reg_Perfer_CK1_IDC.GetWindowTextW(Reg_Perfer_CK1_IDC_CS);
									Reg_Perfer_CK += Reg_Perfer_CK1_IDC_CS + TEXT(" ");
								}
								if (Reg_Perfer_CK2_V)
								{
									Reg_Perfer_CK2_IDC.GetWindowTextW(Reg_Perfer_CK2_IDC_CS);
									Reg_Perfer_CK += Reg_Perfer_CK2_IDC_CS + TEXT(" ");
								}
								if (Reg_Perfer_CK3_V)
								{
									Reg_Perfer_CK3_IDC.GetWindowTextW(Reg_Perfer_CK3_IDC_CS);
									Reg_Perfer_CK += Reg_Perfer_CK3_IDC_CS + TEXT(" ");
								}
							}

							MS_Sql_CS
								= TEXT("insert into UserID values('")
								+ Reg_User_ET_V + TEXT("','")
								+ Reg_Password_ET_V + TEXT("','")
								+ Reg_PhoneNumber_ET_V + TEXT("','")
								+ Reg_Sex_R + TEXT("','")
								+ Reg_Perfer_CK + TEXT("','")
								+ Reg_UserAvatarPath + TEXT("','")
								+ Reg_Recom_V + TEXT("')");

							pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

							Update_Window(MS_Message_T_Window, MS_Message_T_V_Acc_Msg);

							Turn_Of_Window(Register_Window, FALSE);
							Turn_Of_Window(Login_Window, TRUE);
						}
						else
						{
							Update_Window(MS_Message_T_Window, Reg_Sex_R_V_Acc_Msg);
						}
					}
					else
					{
						Update_Window(MS_Message_T_Window, Reg_PhoneNumber_ET_V_Acc_Msg);
					}
				}
				else
				{
					Update_Window(MS_Message_T_Window, Reg_PasswordIdentify_ET_V_Acc_Msg);
				}
			}
			else
			{
				Update_Window(MS_Message_T_Window, Reg_Password_ET_V_Acc_Msg);
			}
		}
		else if (Reg_IdentifyUser_Flag)
		{
			Update_Window(MS_Message_T_Window, Reg_User_ET_V_Acc_Msg);
		}
	}
	else
	{
		if (Reg_Sex_R_V == FALSE)
		{
			Reg_Sex_R = TEXT("男性");
		}
		else if (Reg_Sex_R_V == TRUE)
		{
			Reg_Sex_R = TEXT("女性");
		}
		if (Reg_Sex_R_V != -1)
		{
			if (Reg_Perfer_CK0_V || Reg_Perfer_CK1_V || Reg_Perfer_CK2_V || Reg_Perfer_CK3_V)
			{
				Reg_Perfer_CK = TEXT("");//重新初始化种类字符串
				if (Reg_Perfer_CK0_V)
				{
					Reg_Perfer_CK0_IDC.GetWindowTextW(Reg_Perfer_CK0_IDC_CS);
					Reg_Perfer_CK += Reg_Perfer_CK0_IDC_CS + TEXT(" ");
				}
				if (Reg_Perfer_CK1_V)
				{
					Reg_Perfer_CK1_IDC.GetWindowTextW(Reg_Perfer_CK1_IDC_CS);
					Reg_Perfer_CK += Reg_Perfer_CK1_IDC_CS + TEXT(" ");
				}
				if (Reg_Perfer_CK2_V)
				{
					Reg_Perfer_CK2_IDC.GetWindowTextW(Reg_Perfer_CK2_IDC_CS);
					Reg_Perfer_CK += Reg_Perfer_CK2_IDC_CS + TEXT(" ");
				}
				if (Reg_Perfer_CK3_V)
				{
					Reg_Perfer_CK3_IDC.GetWindowTextW(Reg_Perfer_CK3_IDC_CS);
					Reg_Perfer_CK += Reg_Perfer_CK3_IDC_CS + TEXT(" ");
				}
			}

			MS_Sql_CS
				= TEXT("insert into UserID values('")
				+ Reg_User_ET_V + TEXT("','")
				+ Reg_Password_ET_V + TEXT("','")
				+ Reg_PhoneNumber_ET_V + TEXT("','")
				+ Reg_Sex_R + TEXT("','")
				+ Reg_Perfer_CK + TEXT("','")
				+ Reg_UserAvatarPath + TEXT("','")
				+ Reg_Recom_V + TEXT("')");

			pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

			Update_Window(MS_Message_T_Window, MS_Message_T_V_Acc_Msg);

			Turn_Of_Window(Register_Window, FALSE);
			Turn_Of_Window(Login_Window, TRUE);
		}
	}
	Reg_User_ET_V = "";
	Reg_Password_ET_V = "";
	Reg_PasswordIdentify_ET_V = "";
	Reg_PhoneNumber_ET_V = "";
	Reg_Sex_R_V = -1;
	Reg_Perfer_CK0_V = -1;
	Reg_Perfer_CK1_V = -1;
	Reg_Perfer_CK2_V = -1;
	Reg_Perfer_CK3_V = -1;
	UpdateData(FALSE);
}