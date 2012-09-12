#pragma once


namespace teacher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			TextReader^ tmpfile = gcnew StreamReader("teacher_authed.tmp");
			id_teacher = tmpfile->ReadLine()->Trim();
			tmpfile->Close();

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ id_teacher;
	private: System::Data::OracleClient::OracleConnection^  oracleConnection1;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer1;





	private: teacher::DataSet1^  ds;


















	private: System::Windows::Forms::Label^  label2;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand2;
	private: System::Data::OracleClient::OracleDataAdapter^  disciplinesDA;
	private: System::Windows::Forms::BindingSource^  disciplinesBS;
	private: System::Windows::Forms::ComboBox^  disciplinesCB;


	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand3;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand3;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand3;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand3;
	private: System::Data::OracleClient::OracleDataAdapter^  teachersDA;
	private: System::Windows::Forms::BindingSource^  teachersBS;

	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand4;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand4;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand4;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand4;
	private: System::Data::OracleClient::OracleDataAdapter^  teachers2disciplinesDA;
	private: System::Windows::Forms::BindingSource^  teachers2disciplinesBS;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand5;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand5;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand5;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand5;
	private: System::Data::OracleClient::OracleDataAdapter^  marksDA;
	private: System::Windows::Forms::BindingSource^  marksBS;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vALUEMARKDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fULLNAMEDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dATEMARKDataGridViewTextBoxColumn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;






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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->oracleConnection1 = (gcnew System::Data::OracleClient::OracleConnection());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->vALUEMARKDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fULLNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dATEMARKDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->marksBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds = (gcnew teacher::DataSet1());
			this->disciplinesCB = (gcnew System::Windows::Forms::ComboBox());
			this->disciplinesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->teachersBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->teachers2disciplinesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->oracleSelectCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->disciplinesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachersDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachers2disciplinesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->marksDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->marksBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->disciplinesBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachers2disciplinesBS))->BeginInit();
			this->SuspendLayout();
			// 
			// oracleConnection1
			// 
			this->oracleConnection1->ConnectionString = L"Data Source=xe;Persist Security Info=True;User ID=dekanat;Password=1;Unicode=True" 
				L"";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->label4);
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView1);
			this->splitContainer1->Panel1->Controls->Add(this->disciplinesCB);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Size = System::Drawing::Size(762, 574);
			this->splitContainer1->SplitterDistance = 505;
			this->splitContainer1->SplitterWidth = 1;
			this->splitContainer1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(673, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 24);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Выбрать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(164, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Введите оценки:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->vALUEMARKDataGridViewTextBoxColumn, 
				this->fULLNAMEDataGridViewTextBoxColumn, this->dATEMARKDataGridViewTextBoxColumn});
			this->dataGridView1->DataSource = this->marksBS;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(4, 82);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Size = System::Drawing::Size(755, 420);
			this->dataGridView1->TabIndex = 7;
			// 
			// vALUEMARKDataGridViewTextBoxColumn
			// 
			this->vALUEMARKDataGridViewTextBoxColumn->DataPropertyName = L"VALUE_MARK";
			this->vALUEMARKDataGridViewTextBoxColumn->HeaderText = L"Оценка";
			this->vALUEMARKDataGridViewTextBoxColumn->Name = L"vALUEMARKDataGridViewTextBoxColumn";
			// 
			// fULLNAMEDataGridViewTextBoxColumn
			// 
			this->fULLNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fULLNAMEDataGridViewTextBoxColumn->DataPropertyName = L"FULLNAME";
			this->fULLNAMEDataGridViewTextBoxColumn->HeaderText = L"Студент";
			this->fULLNAMEDataGridViewTextBoxColumn->Name = L"fULLNAMEDataGridViewTextBoxColumn";
			this->fULLNAMEDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// dATEMARKDataGridViewTextBoxColumn
			// 
			this->dATEMARKDataGridViewTextBoxColumn->DataPropertyName = L"DATE_MARK";
			this->dATEMARKDataGridViewTextBoxColumn->HeaderText = L"Дата";
			this->dATEMARKDataGridViewTextBoxColumn->Name = L"dATEMARKDataGridViewTextBoxColumn";
			// 
			// marksBS
			// 
			this->marksBS->DataMember = L"MARKS";
			this->marksBS->DataSource = this->ds;
			// 
			// ds
			// 
			this->ds->DataSetName = L"ds";
			this->ds->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// disciplinesCB
			// 
			this->disciplinesCB->DataSource = this->disciplinesBS;
			this->disciplinesCB->DisplayMember = L"DISCNAME";
			this->disciplinesCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->disciplinesCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->disciplinesCB->FormattingEnabled = true;
			this->disciplinesCB->Location = System::Drawing::Point(4, 27);
			this->disciplinesCB->Name = L"disciplinesCB";
			this->disciplinesCB->Size = System::Drawing::Size(667, 24);
			this->disciplinesCB->TabIndex = 4;
			this->disciplinesCB->DropDownClosed += gcnew System::EventHandler(this, &Form1::disciplinesCB_DropDownClosed);
			// 
			// disciplinesBS
			// 
			this->disciplinesBS->DataMember = L"DISCIPLINES";
			this->disciplinesBS->DataSource = this->ds;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Выберите предмет:";
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(762, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сохранить изменения";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// teachersBS
			// 
			this->teachersBS->DataMember = L"TEACHERS";
			this->teachersBS->DataSource = this->ds;
			// 
			// teachers2disciplinesBS
			// 
			this->teachers2disciplinesBS->DataMember = L"TEACHERS2DISCIPLINES";
			this->teachers2disciplinesBS->DataSource = this->ds;
			// 
			// oracleSelectCommand2
			// 
			this->oracleSelectCommand2->CommandText = resources->GetString(L"oracleSelectCommand2.CommandText");
			this->oracleSelectCommand2->Connection = this->oracleConnection1;
			this->oracleSelectCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"tid", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleInsertCommand2
			// 
			this->oracleInsertCommand2->CommandText = L"INSERT INTO \"DISCIPLINES\" (\"ID_DISCIPLINE\", \"ID_GROUP\") VALUES (:ID_DISCIPLINE, :" 
				L"ID_GROUP)";
			this->oracleInsertCommand2->Connection = this->oracleConnection1;
			this->oracleInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand2
			// 
			this->oracleUpdateCommand2->CommandText = resources->GetString(L"oracleUpdateCommand2.CommandText");
			this->oracleUpdateCommand2->Connection = this->oracleConnection1;
			this->oracleUpdateCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand2
			// 
			this->oracleDeleteCommand2->CommandText = L"DELETE FROM \"DISCIPLINES\" WHERE ((\"ID_DISCIPLINE\" = :Original_ID_DISCIPLINE) AND " 
				L"((:IsNull_ID_GROUP = 1 AND \"ID_GROUP\" IS NULL) OR (\"ID_GROUP\" = :Original_ID_GRO" 
				L"UP)))";
			this->oracleDeleteCommand2->Connection = this->oracleConnection1;
			this->oracleDeleteCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// disciplinesDA
			// 
			this->disciplinesDA->DeleteCommand = this->oracleDeleteCommand2;
			this->disciplinesDA->InsertCommand = this->oracleInsertCommand2;
			this->disciplinesDA->SelectCommand = this->oracleSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"ID_DISCIPLINE", 
				L"ID_DISCIPLINE")), (gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", L"ID_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", 
				L"DISCNAME"))};
			this->disciplinesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"DISCIPLINES", __mcTemp__1))});
			this->disciplinesDA->UpdateCommand = this->oracleUpdateCommand2;
			// 
			// oracleSelectCommand3
			// 
			this->oracleSelectCommand3->CommandText = L"SELECT        ID_TEACHER, get_fullname(LAST_NAME, FIRST_NAME, THIRD_NAME) AS full" 
				L"name\r\nFROM            TEACHERS\r\nORDER BY fullname";
			this->oracleSelectCommand3->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand3
			// 
			this->oracleInsertCommand3->CommandText = L"INSERT INTO \"TEACHERS\" (\"ID_TEACHER\") VALUES (:ID_TEACHER)";
			this->oracleInsertCommand3->Connection = this->oracleConnection1;
			this->oracleInsertCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand3
			// 
			this->oracleUpdateCommand3->CommandText = L"UPDATE \"TEACHERS\" SET \"ID_TEACHER\" = :ID_TEACHER WHERE ((\"ID_TEACHER\" = :Original" 
				L"_ID_TEACHER))";
			this->oracleUpdateCommand3->Connection = this->oracleConnection1;
			this->oracleUpdateCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand3
			// 
			this->oracleDeleteCommand3->CommandText = L"DELETE FROM \"TEACHERS\" WHERE ((\"ID_TEACHER\" = :Original_ID_TEACHER))";
			this->oracleDeleteCommand3->Connection = this->oracleConnection1;
			this->oracleDeleteCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachersDA
			// 
			this->teachersDA->DeleteCommand = this->oracleDeleteCommand3;
			this->teachersDA->InsertCommand = this->oracleInsertCommand3;
			this->teachersDA->SelectCommand = this->oracleSelectCommand3;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_TEACHER", 
				L"ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME"))};
			this->teachersDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS", __mcTemp__2))});
			this->teachersDA->UpdateCommand = this->oracleUpdateCommand3;
			// 
			// oracleSelectCommand4
			// 
			this->oracleSelectCommand4->CommandText = L"SELECT        TEACHERS2DISCIPLINES.*\r\nFROM            TEACHERS2DISCIPLINES";
			this->oracleSelectCommand4->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand4
			// 
			this->oracleInsertCommand4->CommandText = L"INSERT INTO \"TEACHERS2DISCIPLINES\" (\"TEACHERS_ID_TEACHER\", \"DISCIPLINES_ID_DISCIP" 
				L"LINE\") VALUES (:TEACHERS_ID_TEACHER, :p1)";
			this->oracleInsertCommand4->Connection = this->oracleConnection1;
			this->oracleInsertCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p1", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand4
			// 
			this->oracleUpdateCommand4->CommandText = resources->GetString(L"oracleUpdateCommand4.CommandText");
			this->oracleUpdateCommand4->Connection = this->oracleConnection1;
			this->oracleUpdateCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(4) {(gcnew System::Data::OracleClient::OracleParameter(L"TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p1", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p2", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand4
			// 
			this->oracleDeleteCommand4->CommandText = L"DELETE FROM \"TEACHERS2DISCIPLINES\" WHERE ((\"TEACHERS_ID_TEACHER\" = :Original_TEAC" 
				L"HERS_ID_TEACHER) AND (\"DISCIPLINES_ID_DISCIPLINE\" = :p2))";
			this->oracleDeleteCommand4->Connection = this->oracleConnection1;
			this->oracleDeleteCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p2", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachers2disciplinesDA
			// 
			this->teachers2disciplinesDA->DeleteCommand = this->oracleDeleteCommand4;
			this->teachers2disciplinesDA->InsertCommand = this->oracleInsertCommand4;
			this->teachers2disciplinesDA->SelectCommand = this->oracleSelectCommand4;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__3 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"TEACHERS_ID_TEACHER", 
				L"TEACHERS_ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"DISCIPLINES_ID_DISCIPLINE", L"DISCIPLINES_ID_DISCIPLINE"))};
			this->teachers2disciplinesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS2DISCIPLINES", __mcTemp__3))});
			this->teachers2disciplinesDA->UpdateCommand = this->oracleUpdateCommand4;
			// 
			// oracleSelectCommand5
			// 
			this->oracleSelectCommand5->CommandText = resources->GetString(L"oracleSelectCommand5.CommandText");
			this->oracleSelectCommand5->Connection = this->oracleConnection1;
			this->oracleSelectCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"tid", 
				System::Data::OracleClient::OracleType::Number, 7, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"did", 
				System::Data::OracleClient::OracleType::Number, 7, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleInsertCommand5
			// 
			this->oracleInsertCommand5->CommandText = L"INSERT INTO \"MARKS\" (\"ID_MARK\", \"VALUE_MARK\", \"DATE_MARK\") VALUES (:ID_MARK, :VAL" 
				L"UE_MARK, :DATE_MARK)";
			this->oracleInsertCommand5->Connection = this->oracleConnection1;
			this->oracleInsertCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_MARK", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_MARK", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"VALUE_MARK", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"VALUE_MARK", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"DATE_MARK", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"DATE_MARK"))});
			// 
			// oracleUpdateCommand5
			// 
			this->oracleUpdateCommand5->CommandText = resources->GetString(L"oracleUpdateCommand5.CommandText");
			this->oracleUpdateCommand5->Connection = this->oracleConnection1;
			this->oracleUpdateCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(8) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_MARK", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_MARK", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"VALUE_MARK", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"VALUE_MARK", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"DATE_MARK", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"DATE_MARK")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_MARK", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_MARK", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_VALUE_MARK", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"VALUE_MARK", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_VALUE_MARK", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"VALUE_MARK", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_DATE_MARK", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"DATE_MARK", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_DATE_MARK", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"DATE_MARK", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand5
			// 
			this->oracleDeleteCommand5->CommandText = resources->GetString(L"oracleDeleteCommand5.CommandText");
			this->oracleDeleteCommand5->Connection = this->oracleConnection1;
			this->oracleDeleteCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_MARK", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_MARK", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_VALUE_MARK", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"VALUE_MARK", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_VALUE_MARK", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"VALUE_MARK", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_DATE_MARK", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"DATE_MARK", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_DATE_MARK", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"DATE_MARK", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// marksDA
			// 
			this->marksDA->DeleteCommand = this->oracleDeleteCommand5;
			this->marksDA->InsertCommand = this->oracleInsertCommand5;
			this->marksDA->SelectCommand = this->oracleSelectCommand5;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__4 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"ID_MARK", 
				L"ID_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DATE_MARK", 
				L"DATE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME"))};
			this->marksDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"MARKS", __mcTemp__4))});
			this->marksDA->UpdateCommand = this->oracleUpdateCommand5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(762, 574);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение преподавателя";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->marksBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->disciplinesBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachers2disciplinesBS))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
					this->disciplinesDA->SelectCommand->Parameters["tid"]->Value = this->id_teacher;
					this->disciplinesDA->Fill(this->ds, "DISCIPLINES");

//					this->groupsDA->Fill(this->ds, "GROUPS");
//					this->teachersDA->Fill(this->ds, "TEACHERS");
//					this->teachers2disciplinesDA->Fill(this->ds, "TEACHERS2DISCIPLINES");
//					this->marksDA->Fill(this->ds, "MARKS");
			 }

private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void disciplinesCB_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void disciplinesCB_DropDownClosed(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds->MARKS->Clear();
			 this->marksDA->SelectCommand->Parameters["tid"]->Value = this->id_teacher;
			 this->marksDA->SelectCommand->Parameters["did"]->Value = this->ds->DISCIPLINES[this->disciplinesBS->Position]->ID_DISCIPLINE;
			 this->marksDA->Fill(this->ds, "MARKS");
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 int pos = this->marksBS->Position;
			 this->marksDA->Update(this->ds, "MARKS");
			 this->ds->MARKS->Clear();
			 this->marksDA->Fill(this->ds, "MARKS");
			 this->marksBS->Position = pos;
		 }
};
}

