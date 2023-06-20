#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

void CLSMenuSystemDlg::MS_Seting_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码

	//电话号码数据获取
	CString MS_Seting_PhoneNumber_ET_Temp_CS;
	std::string MS_Seting_PhoneNumber_ET_Temp_S;
	MS_Sql_CS = TEXT("select PhoneNumber from UserID where Username = '") + MS_User_CS + TEXT("'");
	//MessageBox(strsql);
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Seting_PhoneNumber_ET_Temp_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("PhoneNumber")->Value;
	MS_Seting_PhoneNumber_ET_Temp_S = CT2A(MS_Seting_PhoneNumber_ET_Temp_CS.GetString());
	if (!MS_Seting_PhoneNumber_ET_Temp_S.empty())
	{
		MS_Seting_PhoneNumber_ET_Temp_S.erase(MS_Seting_PhoneNumber_ET_Temp_S.find_last_not_of(" ") + 1);
	}
	MS_Seting_PhoneNumber_ET_Temp_CS = CA2T(MS_Seting_PhoneNumber_ET_Temp_S.c_str());


	//文件路径数据获取
	CString MS_Seting_UserAvatarPath_ET_Temp_CS;
	std::string MS_Seting_UserAvatarPath_ET_Temp_S;
	MS_Sql_CS = TEXT("select UserAvatarPath from UserID where Username = '") + MS_User_CS + TEXT("'");
	//MessageBox(MS_Sql_CS);
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Seting_UserAvatarPath_ET_Temp_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("UserAvatarPath")->Value;
	MS_Seting_UserAvatarPath_ET_Temp_S = CT2A(MS_Seting_UserAvatarPath_ET_Temp_CS.GetString());
	if (!MS_Seting_UserAvatarPath_ET_Temp_S.empty())
	{
		MS_Seting_UserAvatarPath_ET_Temp_S.erase(MS_Seting_UserAvatarPath_ET_Temp_S.find_last_not_of(" ") + 1);
	}
	MS_Seting_UserAvatarPath_ET_Temp_CS = CA2T(MS_Seting_UserAvatarPath_ET_Temp_S.c_str());

	CString MS_Seting_UserAvatarPathIdentify_ET_Temp_CS = TEXT("Default");
	std::string MS_Seting_UserAvatarPathIdentify_ET_Temp_S = CT2A(MS_Seting_UserAvatarPathIdentify_ET_Temp_CS.GetString());
	std::regex Login_UserAvatarPathIdentify_ET_Acc_Temp_Regex(MS_Seting_UserAvatarPathIdentify_ET_Temp_S);
	if (std::regex_match(MS_Seting_UserAvatarPath_ET_Temp_S, Login_UserAvatarPathIdentify_ET_Acc_Temp_Regex))
	{
		MS_Seting_UserAvatarPath_ET_Temp_CS = TEXT("未设置头像");
	}

	//性别数据获取
	CString MS_Seting_Sex_R_Temp_CS;
	std::string MS_Seting_Sex_R_Temp_S;
	MS_Sql_CS = TEXT("select Recom from UserID where Username = '") + MS_User_CS + TEXT("'");
	//MessageBox(MS_Sql_CS);
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Seting_Sex_R_Temp_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Recom")->Value;
	MS_Seting_Sex_R_Temp_S = CT2A(MS_Seting_Sex_R_Temp_CS.GetString());
	if (!MS_Seting_Sex_R_Temp_S.empty())
	{
		MS_Seting_Sex_R_Temp_S.erase(MS_Seting_Sex_R_Temp_S.find_last_not_of(" ") + 1);
	}
	MS_Seting_Sex_R_Temp_CS = CA2T(MS_Seting_Sex_R_Temp_S.c_str());

	CString MS_Seting_SexIdentify_R_Temp_CS = TEXT("男性");
	std::string MS_Seting_SexIdentify_R_Temp_S = CT2A(MS_Seting_SexIdentify_R_Temp_CS.GetString());
	std::regex Login_SexIdentify_R_Acc_Temp_Regex(MS_Seting_SexIdentify_R_Temp_S);
	if (std::regex_match(MS_Seting_Sex_R_Temp_S, Login_SexIdentify_R_Acc_Temp_Regex))
	{
		MS_Seting_Sex_R_V = 0;
	}
	else
	{
		MS_Seting_Sex_R_V = 1;
	}

	//每日推荐开关设置获取
	CString MS_Seting_Recom_R_Temp_CS;
	std::string MS_Seting_Recom_R_Temp_S;
	MS_Sql_CS = TEXT("select Recom from UserID where Username = '") + MS_User_CS + TEXT("'");
	//MessageBox(MS_Sql_CS);
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Seting_Recom_R_Temp_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Recom")->Value;
	MS_Seting_Recom_R_Temp_S = CT2A(MS_Seting_Recom_R_Temp_CS.GetString());
	if (!MS_Seting_Recom_R_Temp_S.empty())
	{
		MS_Seting_Recom_R_Temp_S.erase(MS_Seting_Recom_R_Temp_S.find_last_not_of(" ") + 1);
	}
	MS_Seting_Recom_R_Temp_CS = CA2T(MS_Seting_Recom_R_Temp_S.c_str());

	CString MS_Seting_RecomIdentify_R_Temp_CS = TEXT("TRUE");
	std::string MS_Seting_RecomIdentify_R_Temp_S = CT2A(MS_Seting_RecomIdentify_R_Temp_CS.GetString());
	std::regex Login_RecomIdentify_R_Acc_Temp_Regex(MS_Seting_RecomIdentify_R_Temp_S);
	if (std::regex_match(MS_Seting_Recom_R_Temp_S, Login_RecomIdentify_R_Acc_Temp_Regex))
	{
		MS_Seting_Recom_R_V = 0;
	}
	else
	{
		MS_Seting_Recom_R_V = 1;
	}

	MS_Seting_UserLogin_T_V = MS_User_CS;
	MS_Seting_Password_ET_V = Login_Password_ET_V;
	MS_Seting_PhoneNumber_ET_V = MS_Seting_PhoneNumber_ET_Temp_CS;
	MS_Seting_UserAvatarPath_ET_V = MS_Seting_UserAvatarPath_ET_Temp_CS;
	MS_DayRecom_T_V = TEXT("");
	MS_DayRecom_T_IDC.ShowWindow(FALSE);
	MS_DayRecom_T_V = TEXT("设置界面");
	UpdateData(FALSE);
	MS_DayRecom_T_IDC.ShowWindow(TRUE);

	Turn_Of_Window(MS_Search_Window, FALSE);
	Turn_Of_Window(MS_SearchMenu_Window, FALSE);
	Turn_Of_Window(MS_History_Window, FALSE);
	Turn_Of_Window(MS_HistoryMenu_Window, FALSE);
	Turn_Of_Window(MS_Order_Window, FALSE);
	Turn_Of_Window(MS_Order_Menu_Window, FALSE);
	Turn_Of_Window(MS_Order_MenuImagePitch_Window, FALSE);
	Turn_Of_Window(MS_Order_Shopping_Window, FALSE);
	Turn_Of_Window(MS_Order_ShoppingMenu_Window, FALSE);
	Turn_Of_Window(MS_Seting_Window, TRUE);
}

void CLSMenuSystemDlg::MS_Seting_SaveInfo_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	UpdateData(TRUE);

	MS_Sql_CS =
		TEXT("update UserID set Password = '")
		+ MS_Seting_Password_ET_V
		+ TEXT("' where Username = '")
		+ MS_User_CS
		+ TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	MS_Sql_CS =
		TEXT("update UserID set PhoneNumber = '")
		+ MS_Seting_PhoneNumber_ET_V
		+ TEXT("' where Username = '")
		+ MS_User_CS
		+ TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	CString MS_Seting_Sex_R_Temp_CS;
	CString MS_Seting_Sex_R0_Temp_CS = TEXT("男性");
	CString MS_Seting_Sex_R1_Temp_CS = TEXT("女性");
	if (MS_Seting_Sex_R_V == FALSE)
	{
		MS_Seting_Sex_R_Temp_CS = MS_Seting_Sex_R0_Temp_CS;
	}
	else if (MS_Seting_Sex_R_V == TRUE)
	{
		MS_Seting_Sex_R_Temp_CS = MS_Seting_Sex_R1_Temp_CS;
	}
	MS_Sql_CS =
		TEXT("update UserID set Sex = '")
		+ MS_Seting_Sex_R_Temp_CS
		+ TEXT("' where Username = '")
		+ MS_User_CS
		+ TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	CString MS_Seting_UserAvatarPath_ET_Temp_CS = TEXT("未设置头像");
	std::string MS_Seting_UserAvatarPath_ET_Temp_S = CT2A(MS_Seting_UserAvatarPath_ET_Temp_CS.GetString());
	std::regex MS_Seting_UserAvatarPath_ET_Temp_Regex(MS_Seting_UserAvatarPath_ET_Temp_S);
	std::string	MS_Seting_UserAvatarPath_ET_V_S = CT2A(MS_Seting_UserAvatarPath_ET_V.GetString());
	if (std::regex_match(MS_Seting_UserAvatarPath_ET_V_S, MS_Seting_UserAvatarPath_ET_Temp_Regex))
	{
		MS_Seting_UserAvatarPath_ET_Temp_CS = TEXT("Default");
	}
	else
	{
		MS_Seting_UserAvatarPath_ET_Temp_CS = MS_Seting_UserAvatarPath_ET_V;
	}
	MS_Sql_CS =
		TEXT("update UserID set UserAvatarPath = '")
		+ MS_Seting_UserAvatarPath_ET_Temp_CS
		+ TEXT("' where Username = '")
		+ MS_User_CS
		+ TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	CString MS_Seting_Recom_R_Temp_CS;
	CString MS_Seting_Recom_R0_Temp_CS = TEXT("TRUE");
	CString MS_Seting_Recom_R1_Temp_CS = TEXT("FALSE");
	if (MS_Seting_Recom_R_V == FALSE)
	{
		MS_Seting_Recom_R_Temp_CS = MS_Seting_Recom_R0_Temp_CS;
	}
	else if (MS_Seting_Recom_R_V == TRUE)
	{
		MS_Seting_Recom_R_Temp_CS = MS_Seting_Recom_R1_Temp_CS;
	}
	MS_Sql_CS =
		TEXT("update UserID set Recom = '")
		+ MS_Seting_Recom_R_Temp_CS
		+ TEXT("' where Username = '")
		+ MS_User_CS
		+ TEXT("'");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
}

void CLSMenuSystemDlg::MS_Seting_Logout_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	Login_User_ET_V = "";
	Login_Password_ET_V = "";
	Reg_User_ET_V = "";
	Reg_Password_ET_V = "";
	Reg_PasswordIdentify_ET_V = "";
	Reg_PhoneNumber_ET_V = "";
	MS_Seting_UserLogin_T_V = "";
	MS_Seting_Password_ET_V = "";
	MS_Seting_PhoneNumber_ET_V = "";
	MS_Seting_Sex_R_V = -1;
	Reg_Sex_R_V = -1;
	MS_Seting_UserAvatarPath_ET_V = "";
	MS_Seting_Recom_R_V = -1;

	Update_Window(MS_User_T_Window, TEXT("请登录"));
	Update_Window(MS_Message_T_Window, TEXT(""));

	Turn_Of_Window(MS_Seting_Window, FALSE);
	Turn_Of_Window(MS_Window, FALSE);
	Turn_Of_Window(Login_Window, TRUE);

	UpdateData(FALSE);
}
