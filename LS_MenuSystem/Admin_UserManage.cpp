#include "pch.h"
#include "framework.h"
#include "LS_MenuSystem.h"
#include "LS_MenuSystemDlg.h"
#include "afxdialogex.h" 

void CLSMenuSystemDlg::Admin_UserManage_B_CLI()
{
	// TODO: 在此添加控件通知处理程序代码
	//CString Admin_UserManage_User_Temp = MS_User_CS;

	CString Admin_UserManage_Username_Temp_Sql = TEXT("select Username from UserID");
	_RecordsetPtr  Admin_UserManage_Username_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_UserManage_Username_Temp_Sql), NULL, adCmdText);
	CString Admin_UserManage_Username_Temp_CS;

	CString Admin_UserManage_Password_Temp_Sql = TEXT("select Password from UserID");
	_RecordsetPtr  Admin_UserManage_Password_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_UserManage_Password_Temp_Sql), NULL, adCmdText);
	CString Admin_UserManage_Password_Temp_CS;

	CString Admin_UserManage_Phonenumber_Temp_Sql = TEXT("select PhoneNumber from UserID");
	_RecordsetPtr  Admin_UserManage_Phonenumber_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_UserManage_Phonenumber_Temp_Sql), NULL, adCmdText);
	CString Admin_UserManage_Phonenumber_Temp_CS;

	CString Admin_UserManage_Sex_Temp_Sql = TEXT("select Sex from UserID");
	_RecordsetPtr  Admin_UserManage_Sex_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_UserManage_Sex_Temp_Sql), NULL, adCmdText);
	CString Admin_UserManage_Sex_Temp_CS;

	CString Admin_UserManage_Perfer_Temp_Sql = TEXT("select Perfer from UserID");
	_RecordsetPtr  Admin_UserManage_Perfer_Temp_RP = pMyConnect->Execute(_bstr_t(Admin_UserManage_Perfer_Temp_Sql), NULL, adCmdText);
	CString Admin_UserManage_Perfer_Temp_CS;
	Turn_Of_Window(Admin_UserManageMenu_Window, FALSE);
	for (int i = 0; i <= 9 && (!Admin_UserManage_Username_Temp_RP->adoEOF); i++)
	{
		Admin_UserManage_Username_Temp_CS = (TCHAR*)(_bstr_t)Admin_UserManage_Username_Temp_RP->GetFields()->GetItem("Username")->Value;
		Admin_UserManage_Username_Temp_CS.TrimRight();

		Admin_UserManage_Password_Temp_CS = (TCHAR*)(_bstr_t)Admin_UserManage_Password_Temp_RP->GetFields()->GetItem("Password")->Value;
		Admin_UserManage_Password_Temp_CS.TrimRight();

		Admin_UserManage_Phonenumber_Temp_CS = (TCHAR*)(_bstr_t)Admin_UserManage_Phonenumber_Temp_RP->GetFields()->GetItem("PhoneNumber")->Value;
		Admin_UserManage_Phonenumber_Temp_CS.TrimRight();

		Admin_UserManage_Sex_Temp_CS = (TCHAR*)(_bstr_t)Admin_UserManage_Sex_Temp_RP->GetFields()->GetItem("Sex")->Value;
		Admin_UserManage_Sex_Temp_CS.TrimRight();

		Admin_UserManage_Perfer_Temp_CS = (TCHAR*)(_bstr_t)Admin_UserManage_Perfer_Temp_RP->GetFields()->GetItem("Perfer")->Value;
		Admin_UserManage_Perfer_Temp_CS.TrimRight();
		if (i == 0)
		{
			Admin_UserManage_Username_T0_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET0_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET0_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET0_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET0_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B0_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T0_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET0_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET0_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET0_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET0_IDC.ShowWindow(TRUE); 
		}
		if (i == 1)
		{
			Admin_UserManage_Username_T1_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET1_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET1_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET1_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET1_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B1_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T1_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET1_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET1_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET1_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET1_IDC.ShowWindow(TRUE); 
		}
		if (i == 2)
		{
			Admin_UserManage_Username_T2_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET2_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET2_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET2_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET2_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B2_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T2_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET2_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET2_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET2_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET2_IDC.ShowWindow(TRUE); 
		}
		if (i == 3)
		{
			Admin_UserManage_Username_T3_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET3_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET3_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET3_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET3_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B3_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T3_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET3_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET3_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET3_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET3_IDC.ShowWindow(TRUE); 
		}
		if (i == 4)
		{
			Admin_UserManage_Username_T4_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET4_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET4_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET4_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET4_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B4_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T4_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET4_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET4_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET4_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET4_IDC.ShowWindow(TRUE); 
		}
		if (i == 5)
		{
			Admin_UserManage_Username_T5_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET5_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET5_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET5_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET5_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B5_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T5_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET5_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET5_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET5_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET5_IDC.ShowWindow(TRUE); 
		}
		if (i == 6)
		{
			Admin_UserManage_Username_T6_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET6_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET6_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET6_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET6_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B6_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T6_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET6_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET6_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET6_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET6_IDC.ShowWindow(TRUE); 
		}
		if (i == 7)
		{
			Admin_UserManage_Username_T7_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET7_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET7_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET7_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET7_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B7_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T7_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET7_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET7_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET7_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET7_IDC.ShowWindow(TRUE); 
		}
		if (i == 8)
		{
			Admin_UserManage_Username_T8_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET8_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET8_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET8_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET8_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B8_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T8_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET8_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET8_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET8_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET8_IDC.ShowWindow(TRUE); 
		}
		if (i == 9)
		{
			Admin_UserManage_Username_T9_V = Admin_UserManage_Username_Temp_CS;
			Admin_UserManage_Password_ET9_V = Admin_UserManage_Password_Temp_CS;
			Admin_UserManage_PhoneNumber_ET9_V = Admin_UserManage_Phonenumber_Temp_CS;
			Admin_UserManage_Sex_ET9_V = Admin_UserManage_Sex_Temp_CS;
			Admin_UserManage_Perfer_ET9_V = Admin_UserManage_Perfer_Temp_CS;
			UpdateData(FALSE);
			Admin_UserManage_Delete_B9_IDC.ShowWindow(TRUE);
			Admin_UserManage_Username_T9_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Password_ET9_IDC.ShowWindow(TRUE); 
			Admin_UserManage_PhoneNumber_ET9_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Sex_ET9_IDC.ShowWindow(TRUE); 
			Admin_UserManage_Perfer_ET9_IDC.ShowWindow(TRUE); 
		}
		Admin_UserManage_Username_Temp_RP->MoveNext();
		Admin_UserManage_Password_Temp_RP->MoveNext();
		Admin_UserManage_Phonenumber_Temp_RP->MoveNext();
		Admin_UserManage_Sex_Temp_RP->MoveNext();
		Admin_UserManage_Perfer_Temp_RP->MoveNext();
	}

	Turn_Of_Window(Admin_Order_Window, FALSE);
	Turn_Of_Window(Admin_OrderMenu_Window, FALSE);
	//Turn_Of_Window(Admin_UserManageMenu_Window, FALSE);
	Turn_Of_Window(Admin_UserManage_Window, TRUE);
	Turn_Of_Window(Admin_Setting_Window, FALSE);
}

void CLSMenuSystemDlg::Admin_UserManage_Delete_B0_CLI()
{
	CString Admin_UserManage_Username_Temp_Sql = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T0_V;
	pMyConnect->Execute(_bstr_t(Admin_UserManage_Username_Temp_Sql), NULL, adCmdText);
	Admin_UserManage_Delete_B0_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B0_CLI_Function()
{

	Admin_UserManage_Username_T0_V = Admin_UserManage_Username_T1_V;
	Admin_UserManage_Password_ET0_V = Admin_UserManage_Password_ET1_V;
	Admin_UserManage_PhoneNumber_ET0_V = Admin_UserManage_PhoneNumber_ET1_V;
	Admin_UserManage_Sex_ET0_V = Admin_UserManage_Sex_ET1_V;
	Admin_UserManage_Perfer_ET0_V = Admin_UserManage_Perfer_ET1_V;
	Admin_UserManage_Delete_B1_CLI_Function();
	UpdateData(FALSE);
}

void CLSMenuSystemDlg::Admin_UserManage_Delete_B1_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T1_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B1_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B2_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T2_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B2_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B3_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T3_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B3_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B4_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T4_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B4_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B5_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T5_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B5_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B6_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T6_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B6_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B7_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T7_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B7_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B8_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T8_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B8_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B9_CLI()
{
	MS_Sql_CS = TEXT("Delete from UserID Where") + Admin_UserManage_Username_T9_V;
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	Admin_UserManage_Delete_B9_CLI_Function();
}

void CLSMenuSystemDlg::Admin_UserManage_Delete_B1_CLI_Function()
{
	Admin_UserManage_Username_T1_V = Admin_UserManage_Username_T2_V;
	Admin_UserManage_Password_ET1_V = Admin_UserManage_Password_ET2_V;
	Admin_UserManage_PhoneNumber_ET1_V = Admin_UserManage_PhoneNumber_ET2_V;
	Admin_UserManage_Sex_ET1_V = Admin_UserManage_Sex_ET2_V;
	Admin_UserManage_Perfer_ET1_V = Admin_UserManage_Perfer_ET2_V;
	Admin_UserManage_Delete_B2_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B2_CLI_Function()
{
	Admin_UserManage_Username_T2_V = Admin_UserManage_Username_T3_V;
	Admin_UserManage_Password_ET2_V = Admin_UserManage_Password_ET3_V;
	Admin_UserManage_PhoneNumber_ET2_V = Admin_UserManage_PhoneNumber_ET3_V;
	Admin_UserManage_Sex_ET2_V = Admin_UserManage_Sex_ET3_V;
	Admin_UserManage_Perfer_ET2_V = Admin_UserManage_Perfer_ET3_V;
	Admin_UserManage_Delete_B3_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B3_CLI_Function()
{
	Admin_UserManage_Username_T3_V = Admin_UserManage_Username_T4_V;
	Admin_UserManage_Password_ET3_V = Admin_UserManage_Password_ET4_V;
	Admin_UserManage_PhoneNumber_ET3_V = Admin_UserManage_PhoneNumber_ET4_V;
	Admin_UserManage_Sex_ET3_V = Admin_UserManage_Sex_ET4_V;
	Admin_UserManage_Perfer_ET3_V = Admin_UserManage_Perfer_ET4_V;
	Admin_UserManage_Delete_B4_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B4_CLI_Function()
{
	Admin_UserManage_Username_T4_V = Admin_UserManage_Username_T5_V;
	Admin_UserManage_Password_ET4_V = Admin_UserManage_Password_ET5_V;
	Admin_UserManage_PhoneNumber_ET4_V = Admin_UserManage_PhoneNumber_ET5_V;
	Admin_UserManage_Sex_ET4_V = Admin_UserManage_Sex_ET5_V;
	Admin_UserManage_Perfer_ET4_V = Admin_UserManage_Perfer_ET5_V;
	Admin_UserManage_Delete_B5_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B5_CLI_Function()
{
	Admin_UserManage_Username_T5_V = Admin_UserManage_Username_T6_V;
	Admin_UserManage_Password_ET5_V = Admin_UserManage_Password_ET6_V;
	Admin_UserManage_PhoneNumber_ET5_V = Admin_UserManage_PhoneNumber_ET6_V;
	Admin_UserManage_Sex_ET5_V = Admin_UserManage_Sex_ET6_V;
	Admin_UserManage_Perfer_ET5_V = Admin_UserManage_Perfer_ET6_V;
	Admin_UserManage_Delete_B6_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B6_CLI_Function()
{
	Admin_UserManage_Username_T6_V = Admin_UserManage_Username_T7_V;
	Admin_UserManage_Password_ET6_V = Admin_UserManage_Password_ET7_V;
	Admin_UserManage_PhoneNumber_ET6_V = Admin_UserManage_PhoneNumber_ET7_V;
	Admin_UserManage_Sex_ET6_V = Admin_UserManage_Sex_ET7_V;
	Admin_UserManage_Perfer_ET6_V = Admin_UserManage_Perfer_ET7_V;
	Admin_UserManage_Delete_B7_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B7_CLI_Function()
{
	Admin_UserManage_Username_T7_V = Admin_UserManage_Username_T8_V;
	Admin_UserManage_Password_ET7_V = Admin_UserManage_Password_ET8_V;
	Admin_UserManage_PhoneNumber_ET7_V = Admin_UserManage_PhoneNumber_ET8_V;
	Admin_UserManage_Sex_ET7_V = Admin_UserManage_Sex_ET8_V;
	Admin_UserManage_Perfer_ET7_V = Admin_UserManage_Perfer_ET8_V;
	Admin_UserManage_Delete_B8_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B8_CLI_Function()
{
	Admin_UserManage_Username_T8_V = Admin_UserManage_Username_T9_V;
	Admin_UserManage_Password_ET8_V = Admin_UserManage_Password_ET9_V;
	Admin_UserManage_PhoneNumber_ET8_V = Admin_UserManage_PhoneNumber_ET9_V;
	Admin_UserManage_Sex_ET8_V = Admin_UserManage_Sex_ET9_V;
	Admin_UserManage_Perfer_ET8_V = Admin_UserManage_Perfer_ET8_V;
	Admin_UserManage_Delete_B9_CLI_Function();
}
void CLSMenuSystemDlg::Admin_UserManage_Delete_B9_CLI_Function()
{
	Turn_Of_Window(Admin_UserManage_Window, FALSE);
	Admin_UserManage_Username_T9_V = "";
	Admin_UserManage_Password_ET9_V = "";
	Admin_UserManage_PhoneNumber_ET9_V = "";
	Admin_UserManage_Sex_ET9_V = "";
	Admin_UserManage_Perfer_ET9_V = "";
	UpdateData(FALSE);
	Turn_Of_Window(Admin_UserManage_Window, TRUE);
}

void CLSMenuSystemDlg::Admin_UserManage_Save_B_CLI()
{
	UpdateData(TRUE);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET0_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET0_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET0_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET0_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T0_V + TEXT("'");
	//MessageBox(MS_Sql_CS);
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET1_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET1_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET1_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET1_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T1_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET2_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET2_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET2_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET2_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T2_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET3_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET3_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET3_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET3_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T3_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET4_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET4_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET4_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET4_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T4_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET5_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET5_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET5_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET5_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T5_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET6_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET6_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET6_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET6_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T6_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET7_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET7_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET7_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET7_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T7_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET8_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET8_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET8_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET8_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T8_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	MS_Sql_CS = TEXT("Update UserID Set Password = '") + Admin_UserManage_Password_ET9_V
		+ TEXT("' , PhoneNumber = '") +  Admin_UserManage_PhoneNumber_ET9_V
		+ TEXT("' , Sex = '") +  Admin_UserManage_Sex_ET9_V
		+ TEXT("' , Perfer = '") +  Admin_UserManage_Perfer_ET9_V 
		+ TEXT("' Where Username = '") + Admin_UserManage_Username_T9_V + TEXT("'");
	pMyConnect->Execute(_bstr_t(MS_Sql_CS), NULL, adCmdText);
	LS_Tip_T_IDC.ShowWindow(FALSE);
	LS_Tip_T_IDC.SetWindowTextW(TEXT("更改信息完成!"));
	LS_Tip_T_IDC.ShowWindow(TRUE);
}