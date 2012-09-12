#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace teacher {

	/// <summary>
	/// Сводка для AuthForm
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class AuthForm : public System::Windows::Forms::Form
	{
	public:
		AuthForm(void)
		{
			InitializeComponent();
			this->teachersDA->Fill(this->ds, "TEACHERS");
			Authed = false;

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AuthForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool Authed;
	private: System::Data::OracleClient::OracleConnection^  oracleConnection1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  pwdTB;

	private: System::Windows::Forms::Button^  button1;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand1;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand1;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand1;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand1;
	private: System::Data::OracleClient::OracleDataAdapter^  teachersDA;
	private: teacher::DataSet1^  ds;
	private: System::Windows::Forms::BindingSource^  teachersBS;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand2;
	private: System::Data::OracleClient::OracleDataAdapter^  teachers_authDA;









	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AuthForm::typeid));
			this->oracleConnection1 = (gcnew System::Data::OracleClient::OracleConnection());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->teachersBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds = (gcnew teacher::DataSet1());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pwdTB = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->oracleSelectCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachersDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachers_authDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->BeginInit();
			this->SuspendLayout();
			// 
			// oracleConnection1
			// 
			this->oracleConnection1->ConnectionString = L"Data Source=xe;Persist Security Info=True;User ID=dekanat;Password=1;Unicode=True" 
				L"";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(428, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Выберите себя из списка:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// comboBox1
			// 
			this->comboBox1->DataSource = this->teachersBS;
			this->comboBox1->DisplayMember = L"FULLNAME";
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(428, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// teachersBS
			// 
			this->teachersBS->DataMember = L"TEACHERS";
			this->teachersBS->DataSource = this->ds;
			// 
			// ds
			// 
			this->ds->DataSetName = L"ds";
			this->ds->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(428, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите свой пароль:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pwdTB
			// 
			this->pwdTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->pwdTB->Location = System::Drawing::Point(12, 105);
			this->pwdTB->Name = L"pwdTB";
			this->pwdTB->Size = System::Drawing::Size(428, 26);
			this->pwdTB->TabIndex = 3;
			this->pwdTB->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(101, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 51);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AuthForm::button1_Click);
			// 
			// oracleSelectCommand1
			// 
			this->oracleSelectCommand1->CommandText = L"SELECT        ID_TEACHER, GET_FULLNAME(LAST_NAME, FIRST_NAME, THIRD_NAME) AS FULL" 
				L"NAME\r\nFROM            TEACHERS\r\nORDER BY FULLNAME";
			this->oracleSelectCommand1->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand1
			// 
			this->oracleInsertCommand1->CommandText = L"INSERT INTO \"TEACHERS\" (\"ID_TEACHER\") VALUES (:ID_TEACHER)";
			this->oracleInsertCommand1->Connection = this->oracleConnection1;
			this->oracleInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand1
			// 
			this->oracleUpdateCommand1->CommandText = L"UPDATE \"TEACHERS\" SET \"ID_TEACHER\" = :ID_TEACHER WHERE ((\"ID_TEACHER\" = :Original" 
				L"_ID_TEACHER))";
			this->oracleUpdateCommand1->Connection = this->oracleConnection1;
			this->oracleUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand1
			// 
			this->oracleDeleteCommand1->CommandText = L"DELETE FROM \"TEACHERS\" WHERE ((\"ID_TEACHER\" = :Original_ID_TEACHER))";
			this->oracleDeleteCommand1->Connection = this->oracleConnection1;
			this->oracleDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachersDA
			// 
			this->teachersDA->DeleteCommand = this->oracleDeleteCommand1;
			this->teachersDA->InsertCommand = this->oracleInsertCommand1;
			this->teachersDA->SelectCommand = this->oracleSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_TEACHER", 
				L"ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME"))};
			this->teachersDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS", __mcTemp__1))});
			this->teachersDA->UpdateCommand = this->oracleUpdateCommand1;
			// 
			// oracleSelectCommand2
			// 
			this->oracleSelectCommand2->CommandText = L"AUTH_TEACHER";
			this->oracleSelectCommand2->CommandType = System::Data::CommandType::StoredProcedure;
			this->oracleSelectCommand2->Connection = this->oracleConnection1;
			this->oracleSelectCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"IDX", 
				System::Data::OracleClient::OracleType::Number, 7)), (gcnew System::Data::OracleClient::OracleParameter(L"PWD", System::Data::OracleClient::OracleType::VarChar, 
				32)), (gcnew System::Data::OracleClient::OracleParameter(L"ERR", System::Data::OracleClient::OracleType::Number, 1, System::Data::ParameterDirection::Output, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// teachers_authDA
			// 
			this->teachers_authDA->DeleteCommand = this->oracleDeleteCommand2;
			this->teachers_authDA->InsertCommand = this->oracleInsertCommand2;
			this->teachers_authDA->SelectCommand = this->oracleSelectCommand2;
			this->teachers_authDA->UpdateCommand = this->oracleUpdateCommand2;
			// 
			// AuthForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 212);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pwdTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AuthForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация преподавателя";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AuthForm::AuthForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 this->teachers_authDA->SelectCommand->Parameters["IDX"]->Value = this->ds->TEACHERS[this->teachersBS->Position]->ID_TEACHER;
			 this->teachers_authDA->SelectCommand->Parameters["PWD"]->Value = this->pwdTB->Text;
			 this->teachers_authDA->SelectCommand->Connection->Open();
			 this->teachers_authDA->SelectCommand->ExecuteNonQuery();
			 this->teachers_authDA->SelectCommand->Connection->Close();

			 int err = Convert::ToInt32(this->teachers_authDA->SelectCommand->Parameters["ERR"]->Value);

			 if (err == 0)
			 {

				 TextWriter^ tmpfile = gcnew StreamWriter("teacher_authed.tmp");
				 tmpfile->Write(Convert::ToString(this->ds->TEACHERS[this->teachersBS->Position]->ID_TEACHER));
				 tmpfile->Close();
				 

				 this->Authed = true;
				 this->Close();
			 }
			 else if (err == 2)
			 {
				MessageBox::Show("Пароль введён неправильно!\nПроверьте раскладку клавиатуры и попробуйте снова.", "Ошибка", MessageBoxButtons::OK,
				 MessageBoxIcon::Warning);
			 }
			 else if ((err == 3) || (err == 4))
			 {
				MessageBox::Show("Что-то пошло не так!\nОбратитесь к работнику деканата.", "Ошибка", MessageBoxButtons::OK,
				 MessageBoxIcon::Error);
			 }
		 }
private: System::Void AuthForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 if (!this->Authed)
			 {
				 Application::Exit();
			 }
		 }
};
}
