#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

void CLSMenuSystemDlg::Admin_Setting_B_CLI()
{
	Admin_Setting_Search_CK_V = Search_Setting;
	Admin_Setting_Histroy_CK_V = Histroy_Setting;
	Admin_Setting_Order_CK_V = Order_Setting;
	Admin_Setting_AdminLogin_CK_V = AdminLogin_Setting;
	Admin_Setting_Register_CK_V = Register_Setting;

	UpdateData(FALSE);

	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_UserManage_Window, FALSE);
	Turn_Of_Window(Admin_UserManageMenu_Window, FALSE);
	Turn_Of_Window(Admin_Setting_Window, TRUE);
}

void CLSMenuSystemDlg::Admin_Setting_Save_B_CLI()
{
	LS_Tip_T_V = TEXT("");
	MS_Sql_CS = TEXT("Delete from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	UpdateData(TRUE);
	CString
		Admin_Setting_Seach_Temp_CS,
		Admin_Setting_History_Temp_CS,
		Admin_Setting_Order_Temp_CS,
		Admin_Setting_AdminLogin_Temp_CS,
		Admin_Setting_Register_Temp_CS;
	Admin_Setting_Seach_Temp_CS.Format(_T("%d"), Admin_Setting_Search_CK_V);
	Admin_Setting_History_Temp_CS.Format(_T("%d"), Admin_Setting_Histroy_CK_V);
	Admin_Setting_Order_Temp_CS.Format(_T("%d"), Admin_Setting_Order_CK_V);
	Admin_Setting_AdminLogin_Temp_CS.Format(_T("%d"), Admin_Setting_AdminLogin_CK_V);
	Admin_Setting_Register_Temp_CS.Format(_T("%d"), Admin_Setting_Register_CK_V);
	MS_Sql_CS 
		= TEXT("insert into Setting values('")
		+ Admin_Setting_Seach_Temp_CS + TEXT("','")
		+ Admin_Setting_History_Temp_CS + TEXT("','")
		+ Admin_Setting_Order_Temp_CS + TEXT("','")
		+ Admin_Setting_AdminLogin_Temp_CS + TEXT("','")
		+ Admin_Setting_Register_Temp_CS + TEXT("')");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);

	LS_Tip_T_V = TEXT("已保存设置");

	MS_Sql_CS = TEXT("select Admin_Setting_Search from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Search_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Search")->Value;
	Admin_Setting_Search_CS.TrimRight();
	Search_Setting = _ttoi(Admin_Setting_Search_CS);
	pRecordset.Release();//释放数据库操作集指针

	MS_Sql_CS = TEXT("select Admin_Setting_Histroy from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Histroy_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Histroy")->Value;
	Admin_Setting_Histroy_CS.TrimRight();
	Histroy_Setting = _ttoi(Admin_Setting_Histroy_CS);
	//MessageBox(Admin_Setting_Histroy_CS);
	pRecordset.Release();

	MS_Sql_CS = TEXT("select Admin_Setting_Order from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Order_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Order")->Value;
	Admin_Setting_Order_CS.TrimRight();
	Order_Setting = _ttoi(Admin_Setting_Order_CS);
	//MessageBox(Admin_Setting_Order_CS);
	pRecordset.Release();

	MS_Sql_CS = TEXT("select Admin_Setting_AdminLogin from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_AdminLogin_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_AdminLogin")->Value;
	Admin_Setting_AdminLogin_CS.TrimRight();
	AdminLogin_Setting = _ttoi(Admin_Setting_AdminLogin_CS);
	//MessageBox(Admin_Setting_AdminLogin_CS);
	pRecordset.Release();

	MS_Sql_CS = TEXT("select Admin_Setting_Register from Setting");
	pRecordset = pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	CString Admin_Setting_Register_CS = (TCHAR*)(_bstr_t)pRecordset->GetFields()->GetItem("Admin_Setting_Register")->Value;
	Admin_Setting_Register_CS.TrimRight();
	Register_Setting = _ttoi(Admin_Setting_Register_CS);
	//MessageBox(Admin_Setting_Histroy_CS);
	pRecordset.Release();

	UpdateData(FALSE);
}

void CLSMenuSystemDlg::Admin_Setting_LoginOut_B_CLI()
{
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
	Update_Window(MS_Message_T_Window, TEXT(""));
	Update_Window(MS_User_T_Window, TEXT("请登录"));
	Update_Window(MS_Message_T_Window, TEXT(""));
	UpdateData(FALSE);

	Turn_Of_Window(Admin_Window, FALSE);
	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_OrderMenu_Window, FALSE);
	Turn_Of_Window(Admin_UserManage_Window, FALSE);
	Turn_Of_Window(Admin_Setting_Window, FALSE);

	Turn_Of_Window(Login_Window, TRUE);
}