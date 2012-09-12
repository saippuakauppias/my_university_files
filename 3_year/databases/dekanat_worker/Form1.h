#pragma once


namespace worker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Data::OracleClient::OracleConnection^  oracleConnection1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand1;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand1;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand1;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand1;
	private: System::Data::OracleClient::OracleDataAdapter^  professionsDA;
	private: System::Windows::Forms::BindingSource^  professionsBS;
	private: worker::DataSet1^  ds;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  iDPROFESSIONDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nAMEPROFESSIONDataGridViewTextBoxColumn;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand2;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand2;
	private: System::Data::OracleClient::OracleDataAdapter^  groupsDA;
	private: System::Windows::Forms::BindingSource^  groupsBS;
	private: System::Windows::Forms::DataGridView^  dataGridView2;



	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand3;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand3;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand3;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand3;
	private: System::Data::OracleClient::OracleDataAdapter^  studentsDA;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand4;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand4;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand4;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand4;
	private: System::Data::OracleClient::OracleDataAdapter^  statusesDA;
	private: System::Windows::Forms::BindingSource^  studentsBS;
	private: System::Windows::Forms::BindingSource^  statusesBS;
	private: System::Windows::Forms::DataGridView^  dataGridView3;










	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand5;
	private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand5;
	private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand5;
	private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand5;
	private: System::Data::OracleClient::OracleDataAdapter^  teachersDA;
	private: System::Windows::Forms::BindingSource^  teachersBS;




	private: System::Windows::Forms::SplitContainer^  splitContainer5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand6;
	private: System::Data::OracleClient::OracleDataAdapter^  disciplinesDA;







	private: System::Windows::Forms::BindingSource^  disciplinesBS;





private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand7;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand6;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand6;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand6;
private: System::Data::OracleClient::OracleDataAdapter^  teachers2disciplinesDA;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand8;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand7;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand7;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand7;
private: System::Data::OracleClient::OracleDataAdapter^  typesDA;
private: System::Windows::Forms::BindingSource^  typesBS;




private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand;
private: System::Windows::Forms::DataGridView^  dataGridView5;





private: System::Windows::Forms::SplitContainer^  splitContainer6;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::DataGridView^  dataGridView6;


private: System::Windows::Forms::BindingSource^  teachers2disciplinesBS;






















private: System::Windows::Forms::DataGridViewTextBoxColumn^  nAMEGROUPDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  cOURSEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  SUBGROUP;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  iDPROFESSIONDataGridViewTextBoxColumn1;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand9;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand8;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand8;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand8;
private: System::Data::OracleClient::OracleDataAdapter^  discnamesDA;
private: System::Windows::Forms::BindingSource^  discnamesBS;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  lASTNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fIRSTNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  tHIRDNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  iDGROUPDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  bIRTHDAYDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  eNTERDATEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  iDSTATUSDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  eXPIRYSTATUSDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  nUMBERHOURSDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  iDGROUPDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  iDTYPEDataGridViewTextBoxColumn;
private: System::Windows::Forms::SplitContainer^  splitContainer7;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::DataGridView^  dataGridView7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dISCNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  tEACHERSIDTEACHERDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewComboBoxColumn^  dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn;















































































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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->iDPROFESSIONDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nAMEPROFESSIONDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->professionsBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds = (gcnew worker::DataSet1());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->nAMEGROUPDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cOURSEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SUBGROUP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iDPROFESSIONDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->groupsBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->lASTNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fIRSTNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tHIRDNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iDGROUPDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->bIRTHDAYDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eNTERDATEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iDSTATUSDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->statusesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->eXPIRYSTATUSDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->studentsBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer7 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dISCNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discnamesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->nUMBERHOURSDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->iDGROUPDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->iDTYPEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->typesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->disciplinesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->teachersBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->teachers2disciplinesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->oracleConnection1 = (gcnew System::Data::OracleClient::OracleConnection());
			this->oracleSelectCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->professionsDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->groupsDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->studentsDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->statusesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachersDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->disciplinesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleDeleteCommand = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleSelectCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachers2disciplinesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->typesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand9 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->discnamesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->professionsBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groupsBS))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->statusesBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->studentsBS))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->splitContainer7->Panel1->SuspendLayout();
			this->splitContainer7->Panel2->SuspendLayout();
			this->splitContainer7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->discnamesBS))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->typesBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->disciplinesBS))->BeginInit();
			this->tabPage6->SuspendLayout();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachers2disciplinesBS))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(768, 609);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitContainer1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(760, 580);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Специальности";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->dataGridView1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->button1);
			this->splitContainer1->Size = System::Drawing::Size(754, 574);
			this->splitContainer1->SplitterDistance = 510;
			this->splitContainer1->SplitterWidth = 1;
			this->splitContainer1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->iDPROFESSIONDataGridViewTextBoxColumn, 
				this->nAMEPROFESSIONDataGridViewTextBoxColumn});
			this->dataGridView1->DataSource = this->professionsBS;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(754, 510);
			this->dataGridView1->TabIndex = 0;
			// 
			// iDPROFESSIONDataGridViewTextBoxColumn
			// 
			this->iDPROFESSIONDataGridViewTextBoxColumn->DataPropertyName = L"ID_PROFESSION";
			this->iDPROFESSIONDataGridViewTextBoxColumn->HeaderText = L"ID_PROFESSION";
			this->iDPROFESSIONDataGridViewTextBoxColumn->Name = L"iDPROFESSIONDataGridViewTextBoxColumn";
			this->iDPROFESSIONDataGridViewTextBoxColumn->Visible = false;
			// 
			// nAMEPROFESSIONDataGridViewTextBoxColumn
			// 
			this->nAMEPROFESSIONDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nAMEPROFESSIONDataGridViewTextBoxColumn->DataPropertyName = L"NAME_PROFESSION";
			this->nAMEPROFESSIONDataGridViewTextBoxColumn->HeaderText = L"Название специальности";
			this->nAMEPROFESSIONDataGridViewTextBoxColumn->Name = L"nAMEPROFESSIONDataGridViewTextBoxColumn";
			// 
			// professionsBS
			// 
			this->professionsBS->DataMember = L"PROFESSIONS";
			this->professionsBS->DataSource = this->ds;
			// 
			// ds
			// 
			this->ds->DataSetName = L"ds";
			this->ds->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(754, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сохранить изменения";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(760, 580);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Группы";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->dataGridView2);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->button2);
			this->splitContainer2->Size = System::Drawing::Size(754, 574);
			this->splitContainer2->SplitterDistance = 510;
			this->splitContainer2->SplitterWidth = 1;
			this->splitContainer2->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AutoGenerateColumns = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->nAMEGROUPDataGridViewTextBoxColumn, 
				this->cOURSEDataGridViewTextBoxColumn, this->SUBGROUP, this->iDPROFESSIONDataGridViewTextBoxColumn1});
			this->dataGridView2->DataSource = this->groupsBS;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(754, 510);
			this->dataGridView2->TabIndex = 0;
			// 
			// nAMEGROUPDataGridViewTextBoxColumn
			// 
			this->nAMEGROUPDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->nAMEGROUPDataGridViewTextBoxColumn->DataPropertyName = L"NAME_GROUP";
			this->nAMEGROUPDataGridViewTextBoxColumn->HeaderText = L"Аббревиатура группы";
			this->nAMEGROUPDataGridViewTextBoxColumn->Name = L"nAMEGROUPDataGridViewTextBoxColumn";
			// 
			// cOURSEDataGridViewTextBoxColumn
			// 
			this->cOURSEDataGridViewTextBoxColumn->DataPropertyName = L"COURSE";
			this->cOURSEDataGridViewTextBoxColumn->HeaderText = L"Курс";
			this->cOURSEDataGridViewTextBoxColumn->Name = L"cOURSEDataGridViewTextBoxColumn";
			this->cOURSEDataGridViewTextBoxColumn->Width = 50;
			// 
			// SUBGROUP
			// 
			this->SUBGROUP->DataPropertyName = L"SUBGROUP";
			this->SUBGROUP->HeaderText = L"№ группы";
			this->SUBGROUP->Name = L"SUBGROUP";
			// 
			// iDPROFESSIONDataGridViewTextBoxColumn1
			// 
			this->iDPROFESSIONDataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->iDPROFESSIONDataGridViewTextBoxColumn1->DataPropertyName = L"ID_PROFESSION";
			this->iDPROFESSIONDataGridViewTextBoxColumn1->DataSource = this->professionsBS;
			this->iDPROFESSIONDataGridViewTextBoxColumn1->DisplayMember = L"NAME_PROFESSION";
			this->iDPROFESSIONDataGridViewTextBoxColumn1->HeaderText = L"Специальность";
			this->iDPROFESSIONDataGridViewTextBoxColumn1->Name = L"iDPROFESSIONDataGridViewTextBoxColumn1";
			this->iDPROFESSIONDataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->iDPROFESSIONDataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->iDPROFESSIONDataGridViewTextBoxColumn1->ValueMember = L"ID_PROFESSION";
			// 
			// groupsBS
			// 
			this->groupsBS->DataMember = L"GROUPS";
			this->groupsBS->DataSource = this->ds;
			// 
			// button2
			// 
			this->button2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(754, 63);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Сохранить изменения";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(760, 580);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Студенты";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer3->Location = System::Drawing::Point(3, 3);
			this->splitContainer3->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->dataGridView3);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->button3);
			this->splitContainer3->Size = System::Drawing::Size(754, 574);
			this->splitContainer3->SplitterDistance = 510;
			this->splitContainer3->SplitterWidth = 1;
			this->splitContainer3->TabIndex = 0;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->AutoGenerateColumns = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->lASTNAMEDataGridViewTextBoxColumn, 
				this->fIRSTNAMEDataGridViewTextBoxColumn, this->tHIRDNAMEDataGridViewTextBoxColumn, this->iDGROUPDataGridViewTextBoxColumn, this->bIRTHDAYDataGridViewTextBoxColumn, 
				this->eNTERDATEDataGridViewTextBoxColumn, this->iDSTATUSDataGridViewTextBoxColumn, this->eXPIRYSTATUSDataGridViewTextBoxColumn});
			this->dataGridView3->DataSource = this->studentsBS;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(754, 510);
			this->dataGridView3->TabIndex = 0;
			// 
			// lASTNAMEDataGridViewTextBoxColumn
			// 
			this->lASTNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->lASTNAMEDataGridViewTextBoxColumn->DataPropertyName = L"LAST_NAME";
			this->lASTNAMEDataGridViewTextBoxColumn->HeaderText = L"Фамилия";
			this->lASTNAMEDataGridViewTextBoxColumn->Name = L"lASTNAMEDataGridViewTextBoxColumn";
			// 
			// fIRSTNAMEDataGridViewTextBoxColumn
			// 
			this->fIRSTNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fIRSTNAMEDataGridViewTextBoxColumn->DataPropertyName = L"FIRST_NAME";
			this->fIRSTNAMEDataGridViewTextBoxColumn->HeaderText = L"Имя";
			this->fIRSTNAMEDataGridViewTextBoxColumn->Name = L"fIRSTNAMEDataGridViewTextBoxColumn";
			// 
			// tHIRDNAMEDataGridViewTextBoxColumn
			// 
			this->tHIRDNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->tHIRDNAMEDataGridViewTextBoxColumn->DataPropertyName = L"THIRD_NAME";
			this->tHIRDNAMEDataGridViewTextBoxColumn->HeaderText = L"Отчество";
			this->tHIRDNAMEDataGridViewTextBoxColumn->Name = L"tHIRDNAMEDataGridViewTextBoxColumn";
			// 
			// iDGROUPDataGridViewTextBoxColumn
			// 
			this->iDGROUPDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->iDGROUPDataGridViewTextBoxColumn->DataPropertyName = L"ID_GROUP";
			this->iDGROUPDataGridViewTextBoxColumn->DataSource = this->groupsBS;
			this->iDGROUPDataGridViewTextBoxColumn->DisplayMember = L"GROUPNAME";
			this->iDGROUPDataGridViewTextBoxColumn->HeaderText = L"Группа";
			this->iDGROUPDataGridViewTextBoxColumn->Name = L"iDGROUPDataGridViewTextBoxColumn";
			this->iDGROUPDataGridViewTextBoxColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->iDGROUPDataGridViewTextBoxColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->iDGROUPDataGridViewTextBoxColumn->ValueMember = L"ID_GROUP";
			// 
			// bIRTHDAYDataGridViewTextBoxColumn
			// 
			this->bIRTHDAYDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->bIRTHDAYDataGridViewTextBoxColumn->DataPropertyName = L"BIRTHDAY";
			this->bIRTHDAYDataGridViewTextBoxColumn->HeaderText = L"Дата рождения";
			this->bIRTHDAYDataGridViewTextBoxColumn->Name = L"bIRTHDAYDataGridViewTextBoxColumn";
			// 
			// eNTERDATEDataGridViewTextBoxColumn
			// 
			this->eNTERDATEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->eNTERDATEDataGridViewTextBoxColumn->DataPropertyName = L"ENTER_DATE";
			this->eNTERDATEDataGridViewTextBoxColumn->HeaderText = L"Дата поступления";
			this->eNTERDATEDataGridViewTextBoxColumn->Name = L"eNTERDATEDataGridViewTextBoxColumn";
			// 
			// iDSTATUSDataGridViewTextBoxColumn
			// 
			this->iDSTATUSDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->iDSTATUSDataGridViewTextBoxColumn->DataPropertyName = L"ID_STATUS";
			this->iDSTATUSDataGridViewTextBoxColumn->DataSource = this->statusesBS;
			this->iDSTATUSDataGridViewTextBoxColumn->DisplayMember = L"VALUE_STATUS";
			this->iDSTATUSDataGridViewTextBoxColumn->HeaderText = L"Статус";
			this->iDSTATUSDataGridViewTextBoxColumn->Name = L"iDSTATUSDataGridViewTextBoxColumn";
			this->iDSTATUSDataGridViewTextBoxColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->iDSTATUSDataGridViewTextBoxColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->iDSTATUSDataGridViewTextBoxColumn->ValueMember = L"ID_STATUS";
			// 
			// statusesBS
			// 
			this->statusesBS->DataMember = L"STATUSES";
			this->statusesBS->DataSource = this->ds;
			// 
			// eXPIRYSTATUSDataGridViewTextBoxColumn
			// 
			this->eXPIRYSTATUSDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->eXPIRYSTATUSDataGridViewTextBoxColumn->DataPropertyName = L"EXPIRY_STATUS";
			this->eXPIRYSTATUSDataGridViewTextBoxColumn->HeaderText = L"Статус установлен";
			this->eXPIRYSTATUSDataGridViewTextBoxColumn->Name = L"eXPIRYSTATUSDataGridViewTextBoxColumn";
			// 
			// studentsBS
			// 
			this->studentsBS->DataMember = L"STUDENTS";
			this->studentsBS->DataSource = this->ds;
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(754, 63);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Сохранить изменения";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->splitContainer7);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(760, 580);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Предметы";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// splitContainer7
			// 
			this->splitContainer7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer7->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer7->Location = System::Drawing::Point(3, 3);
			this->splitContainer7->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer7->Name = L"splitContainer7";
			this->splitContainer7->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer7.Panel1
			// 
			this->splitContainer7->Panel1->Controls->Add(this->dataGridView7);
			// 
			// splitContainer7.Panel2
			// 
			this->splitContainer7->Panel2->Controls->Add(this->button7);
			this->splitContainer7->Size = System::Drawing::Size(754, 574);
			this->splitContainer7->SplitterDistance = 510;
			this->splitContainer7->SplitterWidth = 1;
			this->splitContainer7->TabIndex = 0;
			// 
			// dataGridView7
			// 
			this->dataGridView7->AutoGenerateColumns = false;
			this->dataGridView7->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->dISCNAMEDataGridViewTextBoxColumn});
			this->dataGridView7->DataSource = this->discnamesBS;
			this->dataGridView7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView7->Location = System::Drawing::Point(0, 0);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(754, 510);
			this->dataGridView7->TabIndex = 0;
			// 
			// dISCNAMEDataGridViewTextBoxColumn
			// 
			this->dISCNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dISCNAMEDataGridViewTextBoxColumn->DataPropertyName = L"DISC_NAME";
			this->dISCNAMEDataGridViewTextBoxColumn->HeaderText = L"Название";
			this->dISCNAMEDataGridViewTextBoxColumn->Name = L"dISCNAMEDataGridViewTextBoxColumn";
			// 
			// discnamesBS
			// 
			this->discnamesBS->DataMember = L"DISCNAMES";
			this->discnamesBS->DataSource = this->ds;
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->Location = System::Drawing::Point(0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(754, 63);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Сохранить изменения";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->splitContainer5);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(760, 580);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Предметы групп";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer5->Location = System::Drawing::Point(3, 3);
			this->splitContainer5->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->dataGridView5);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->button5);
			this->splitContainer5->Size = System::Drawing::Size(754, 574);
			this->splitContainer5->SplitterDistance = 510;
			this->splitContainer5->SplitterWidth = 1;
			this->splitContainer5->TabIndex = 0;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToOrderColumns = true;
			this->dataGridView5->AutoGenerateColumns = false;
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Column1, 
				this->nUMBERHOURSDataGridViewTextBoxColumn, this->iDGROUPDataGridViewTextBoxColumn1, this->iDTYPEDataGridViewTextBoxColumn});
			this->dataGridView5->DataSource = this->disciplinesBS;
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView5->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView5->Location = System::Drawing::Point(0, 0);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(754, 510);
			this->dataGridView5->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->DataPropertyName = L"ID_DISCNAME";
			this->Column1->DataSource = this->discnamesBS;
			this->Column1->DisplayMember = L"DISC_NAME";
			this->Column1->HeaderText = L"Название";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column1->ValueMember = L"ID_DISCNAME";
			// 
			// nUMBERHOURSDataGridViewTextBoxColumn
			// 
			this->nUMBERHOURSDataGridViewTextBoxColumn->DataPropertyName = L"NUMBER_HOURS";
			this->nUMBERHOURSDataGridViewTextBoxColumn->HeaderText = L"Количество часов";
			this->nUMBERHOURSDataGridViewTextBoxColumn->Name = L"nUMBERHOURSDataGridViewTextBoxColumn";
			this->nUMBERHOURSDataGridViewTextBoxColumn->Width = 170;
			// 
			// iDGROUPDataGridViewTextBoxColumn1
			// 
			this->iDGROUPDataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->iDGROUPDataGridViewTextBoxColumn1->DataPropertyName = L"ID_GROUP";
			this->iDGROUPDataGridViewTextBoxColumn1->DataSource = this->groupsBS;
			this->iDGROUPDataGridViewTextBoxColumn1->DisplayMember = L"GROUPNAME";
			this->iDGROUPDataGridViewTextBoxColumn1->HeaderText = L"Группа";
			this->iDGROUPDataGridViewTextBoxColumn1->Name = L"iDGROUPDataGridViewTextBoxColumn1";
			this->iDGROUPDataGridViewTextBoxColumn1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->iDGROUPDataGridViewTextBoxColumn1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->iDGROUPDataGridViewTextBoxColumn1->ValueMember = L"ID_GROUP";
			// 
			// iDTYPEDataGridViewTextBoxColumn
			// 
			this->iDTYPEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->iDTYPEDataGridViewTextBoxColumn->DataPropertyName = L"ID_TYPE";
			this->iDTYPEDataGridViewTextBoxColumn->DataSource = this->typesBS;
			this->iDTYPEDataGridViewTextBoxColumn->DisplayMember = L"VALUE_TYPE";
			this->iDTYPEDataGridViewTextBoxColumn->HeaderText = L"Тип";
			this->iDTYPEDataGridViewTextBoxColumn->Name = L"iDTYPEDataGridViewTextBoxColumn";
			this->iDTYPEDataGridViewTextBoxColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->iDTYPEDataGridViewTextBoxColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->iDTYPEDataGridViewTextBoxColumn->ValueMember = L"ID_TYPE";
			// 
			// typesBS
			// 
			this->typesBS->DataMember = L"TYPES";
			this->typesBS->DataSource = this->ds;
			// 
			// disciplinesBS
			// 
			this->disciplinesBS->DataMember = L"DISCIPLINES";
			this->disciplinesBS->DataSource = this->ds;
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(754, 63);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Сохранить изменения";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->splitContainer6);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(760, 580);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Предметы преподавателей";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer6->Location = System::Drawing::Point(3, 3);
			this->splitContainer6->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer6->Name = L"splitContainer6";
			this->splitContainer6->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->dataGridView6);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->button6);
			this->splitContainer6->Size = System::Drawing::Size(754, 574);
			this->splitContainer6->SplitterDistance = 510;
			this->splitContainer6->SplitterWidth = 1;
			this->splitContainer6->TabIndex = 0;
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToOrderColumns = true;
			this->dataGridView6->AutoGenerateColumns = false;
			this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView6->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->tEACHERSIDTEACHERDataGridViewTextBoxColumn, 
				this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn});
			this->dataGridView6->DataSource = this->teachers2disciplinesBS;
			this->dataGridView6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView6->GridColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView6->Location = System::Drawing::Point(0, 0);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(754, 510);
			this->dataGridView6->TabIndex = 0;
			// 
			// tEACHERSIDTEACHERDataGridViewTextBoxColumn
			// 
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->DataPropertyName = L"TEACHERS_ID_TEACHER";
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->DataSource = this->teachersBS;
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->DisplayMember = L"FULLNAME";
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->HeaderText = L"Преподаватель";
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->Name = L"tEACHERSIDTEACHERDataGridViewTextBoxColumn";
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->tEACHERSIDTEACHERDataGridViewTextBoxColumn->ValueMember = L"ID_TEACHER";
			// 
			// teachersBS
			// 
			this->teachersBS->DataMember = L"TEACHERS";
			this->teachersBS->DataSource = this->ds;
			// 
			// dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn
			// 
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->DataPropertyName = L"DISCIPLINES_ID_DISCIPLINE";
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->DataSource = this->disciplinesBS;
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->DisplayMember = L"DISCNAMEWITHGROUPNAME";
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->HeaderText = L"Предмет";
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->Name = L"dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn";
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->dISCIPLINESIDDISCIPLINEDataGridViewTextBoxColumn->ValueMember = L"ID_DISCIPLINE";
			// 
			// teachers2disciplinesBS
			// 
			this->teachers2disciplinesBS->DataMember = L"TEACHERS2DISCIPLINES";
			this->teachers2disciplinesBS->DataSource = this->ds;
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(0, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(754, 63);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Сохранить изменения";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// oracleConnection1
			// 
			this->oracleConnection1->ConnectionString = L"Data Source=xe;Persist Security Info=True;User ID=dekanat;Password=1;Unicode=True" 
				L"";
			// 
			// oracleSelectCommand1
			// 
			this->oracleSelectCommand1->CommandText = L"SELECT        ID_PROFESSION, NAME_PROFESSION\r\nFROM            PROFESSIONS\r\nORDER " 
				L"BY NAME_PROFESSION";
			this->oracleSelectCommand1->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand1
			// 
			this->oracleInsertCommand1->CommandText = L"INSERT INTO \"PROFESSIONS\" (\"ID_PROFESSION\", \"NAME_PROFESSION\") VALUES (:ID_PROFES" 
				L"SION, :NAME_PROFESSION)";
			this->oracleInsertCommand1->Connection = this->oracleConnection1;
			this->oracleInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_PROFESSION", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"NAME_PROFESSION", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"NAME_PROFESSION"))});
			// 
			// oracleUpdateCommand1
			// 
			this->oracleUpdateCommand1->CommandText = resources->GetString(L"oracleUpdateCommand1.CommandText");
			this->oracleUpdateCommand1->Connection = this->oracleConnection1;
			this->oracleUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_PROFESSION", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"NAME_PROFESSION", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"NAME_PROFESSION")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_PROFESSION", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_NAME_PROFESSION", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"NAME_PROFESSION", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_NAME_PROFESSION", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"NAME_PROFESSION", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand1
			// 
			this->oracleDeleteCommand1->CommandText = L"DELETE FROM \"PROFESSIONS\" WHERE ((\"ID_PROFESSION\" = :Original_ID_PROFESSION) AND " 
				L"((:IsNull_NAME_PROFESSION = 1 AND \"NAME_PROFESSION\" IS NULL) OR (\"NAME_PROFESSIO" 
				L"N\" = :Original_NAME_PROFESSION)))";
			this->oracleDeleteCommand1->Connection = this->oracleConnection1;
			this->oracleDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_PROFESSION", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_NAME_PROFESSION", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"NAME_PROFESSION", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_NAME_PROFESSION", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"NAME_PROFESSION", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// professionsDA
			// 
			this->professionsDA->DeleteCommand = this->oracleDeleteCommand1;
			this->professionsDA->InsertCommand = this->oracleInsertCommand1;
			this->professionsDA->SelectCommand = this->oracleSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_PROFESSION", 
				L"ID_PROFESSION")), (gcnew System::Data::Common::DataColumnMapping(L"NAME_PROFESSION", L"NAME_PROFESSION"))};
			this->professionsDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"PROFESSIONS", __mcTemp__1))});
			this->professionsDA->UpdateCommand = this->oracleUpdateCommand1;
			// 
			// oracleSelectCommand2
			// 
			this->oracleSelectCommand2->CommandText = L"SELECT        ID_GROUP, NAME_GROUP, COURSE, ID_PROFESSION, SUBGROUP, get_groupnam" 
				L"e(NAME_GROUP, COURSE, SUBGROUP) AS GROUPNAME\r\nFROM            \"GROUPS\"\r\nORDER BY" 
				L" NAME_GROUP";
			this->oracleSelectCommand2->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand2
			// 
			this->oracleInsertCommand2->CommandText = L"INSERT INTO \"GROUPS\" (\"ID_GROUP\", \"NAME_GROUP\", \"COURSE\", \"ID_PROFESSION\", \"SUBGR" 
				L"OUP\") VALUES (:ID_GROUP, :NAME_GROUP, :COURSE, :ID_PROFESSION, :SUBGROUP)";
			this->oracleInsertCommand2->Connection = this->oracleConnection1;
			this->oracleInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"NAME_GROUP", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"NAME_GROUP")), (gcnew System::Data::OracleClient::OracleParameter(L"COURSE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"COURSE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_PROFESSION", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"SUBGROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"SUBGROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand2
			// 
			this->oracleUpdateCommand2->CommandText = resources->GetString(L"oracleUpdateCommand2.CommandText");
			this->oracleUpdateCommand2->Connection = this->oracleConnection1;
			this->oracleUpdateCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(14) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"NAME_GROUP", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"NAME_GROUP")), (gcnew System::Data::OracleClient::OracleParameter(L"COURSE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"COURSE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_PROFESSION", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"SUBGROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"SUBGROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_NAME_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"NAME_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_NAME_GROUP", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"NAME_GROUP", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_COURSE", System::Data::OracleClient::OracleType::Int32, 
				0, System::Data::ParameterDirection::Input, L"COURSE", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_COURSE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"COURSE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_PROFESSION", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_PROFESSION", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_PROFESSION", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_SUBGROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"SUBGROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_SUBGROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SUBGROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand2
			// 
			this->oracleDeleteCommand2->CommandText = resources->GetString(L"oracleDeleteCommand2.CommandText");
			this->oracleDeleteCommand2->Connection = this->oracleConnection1;
			this->oracleDeleteCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(9) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_NAME_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"NAME_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_NAME_GROUP", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"NAME_GROUP", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_COURSE", System::Data::OracleClient::OracleType::Int32, 
				0, System::Data::ParameterDirection::Input, L"COURSE", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_COURSE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"COURSE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_PROFESSION", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_PROFESSION", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_PROFESSION", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_PROFESSION", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_SUBGROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"SUBGROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_SUBGROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"SUBGROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// groupsDA
			// 
			this->groupsDA->DeleteCommand = this->oracleDeleteCommand2;
			this->groupsDA->InsertCommand = this->oracleInsertCommand2;
			this->groupsDA->SelectCommand = this->oracleSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", 
				L"ID_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"NAME_GROUP", L"NAME_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE")), (gcnew System::Data::Common::DataColumnMapping(L"ID_PROFESSION", L"ID_PROFESSION")), (gcnew System::Data::Common::DataColumnMapping(L"SUBGROUP", 
				L"SUBGROUP")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", L"GROUPNAME"))};
			this->groupsDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"GROUPS", __mcTemp__2))});
			this->groupsDA->UpdateCommand = this->oracleUpdateCommand2;
			// 
			// oracleSelectCommand3
			// 
			this->oracleSelectCommand3->CommandText = resources->GetString(L"oracleSelectCommand3.CommandText");
			this->oracleSelectCommand3->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand3
			// 
			this->oracleInsertCommand3->CommandText = resources->GetString(L"oracleInsertCommand3.CommandText");
			this->oracleInsertCommand3->Connection = this->oracleConnection1;
			this->oracleInsertCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(9) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"LAST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"LAST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"FIRST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"FIRST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"THIRD_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"THIRD_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"BIRTHDAY", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"BIRTHDAY")), (gcnew System::Data::OracleClient::OracleParameter(L"EXPIRY_STATUS", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"EXPIRY_STATUS")), (gcnew System::Data::OracleClient::OracleParameter(L"ENTER_DATE", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"ENTER_DATE")), (gcnew System::Data::OracleClient::OracleParameter(L"ID_STATUS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STATUS", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand3
			// 
			this->oracleUpdateCommand3->CommandText = resources->GetString(L"oracleUpdateCommand3.CommandText");
			this->oracleUpdateCommand3->Connection = this->oracleConnection1;
			this->oracleUpdateCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(26) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"LAST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"LAST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"FIRST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"FIRST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"THIRD_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"THIRD_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"BIRTHDAY", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"BIRTHDAY")), (gcnew System::Data::OracleClient::OracleParameter(L"EXPIRY_STATUS", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"EXPIRY_STATUS")), (gcnew System::Data::OracleClient::OracleParameter(L"ENTER_DATE", 
				System::Data::OracleClient::OracleType::DateTime, 0, L"ENTER_DATE")), (gcnew System::Data::OracleClient::OracleParameter(L"ID_STATUS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STATUS", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_LAST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"LAST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_LAST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"LAST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_FIRST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"FIRST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_FIRST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"FIRST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_THIRD_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"THIRD_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_THIRD_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"THIRD_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_BIRTHDAY", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"BIRTHDAY", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_BIRTHDAY", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"BIRTHDAY", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_EXPIRY_STATUS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"EXPIRY_STATUS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_EXPIRY_STATUS", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"EXPIRY_STATUS", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ENTER_DATE", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ENTER_DATE", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ENTER_DATE", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ENTER_DATE", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_STATUS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_STATUS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STATUS", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_STATUS", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand3
			// 
			this->oracleDeleteCommand3->CommandText = resources->GetString(L"oracleDeleteCommand3.CommandText");
			this->oracleDeleteCommand3->Connection = this->oracleConnection1;
			this->oracleDeleteCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(17) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_LAST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"LAST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_LAST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"LAST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_FIRST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"FIRST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_FIRST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"FIRST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_THIRD_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"THIRD_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_THIRD_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"THIRD_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_BIRTHDAY", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"BIRTHDAY", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_BIRTHDAY", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"BIRTHDAY", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_EXPIRY_STATUS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"EXPIRY_STATUS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_EXPIRY_STATUS", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"EXPIRY_STATUS", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ENTER_DATE", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ENTER_DATE", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ENTER_DATE", System::Data::OracleClient::OracleType::DateTime, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ENTER_DATE", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_STATUS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_STATUS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STATUS", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_STATUS", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// studentsDA
			// 
			this->studentsDA->DeleteCommand = this->oracleDeleteCommand3;
			this->studentsDA->InsertCommand = this->oracleInsertCommand3;
			this->studentsDA->SelectCommand = this->oracleSelectCommand3;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__3 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(10) {(gcnew System::Data::Common::DataColumnMapping(L"ID_STUDENT", 
				L"ID_STUDENT")), (gcnew System::Data::Common::DataColumnMapping(L"LAST_NAME", L"LAST_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"FIRST_NAME", 
				L"FIRST_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"THIRD_NAME", L"THIRD_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", 
				L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"BIRTHDAY", L"BIRTHDAY")), (gcnew System::Data::Common::DataColumnMapping(L"EXPIRY_STATUS", 
				L"EXPIRY_STATUS")), (gcnew System::Data::Common::DataColumnMapping(L"ENTER_DATE", L"ENTER_DATE")), (gcnew System::Data::Common::DataColumnMapping(L"ID_STATUS", 
				L"ID_STATUS")), (gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", L"ID_GROUP"))};
			this->studentsDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"STUDENTS", __mcTemp__3))});
			this->studentsDA->UpdateCommand = this->oracleUpdateCommand3;
			// 
			// oracleSelectCommand4
			// 
			this->oracleSelectCommand4->CommandText = L"SELECT        STATUSES.*\r\nFROM            STATUSES\r\nORDER BY VALUE_STATUS";
			this->oracleSelectCommand4->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand4
			// 
			this->oracleInsertCommand4->CommandText = L"INSERT INTO \"STATUSES\" (\"ID_STATUS\", \"VALUE_STATUS\") VALUES (:ID_STATUS, :VALUE_S" 
				L"TATUS)";
			this->oracleInsertCommand4->Connection = this->oracleConnection1;
			this->oracleInsertCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_STATUS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STATUS", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"VALUE_STATUS", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"VALUE_STATUS"))});
			// 
			// oracleUpdateCommand4
			// 
			this->oracleUpdateCommand4->CommandText = resources->GetString(L"oracleUpdateCommand4.CommandText");
			this->oracleUpdateCommand4->Connection = this->oracleConnection1;
			this->oracleUpdateCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_STATUS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STATUS", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"VALUE_STATUS", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"VALUE_STATUS")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STATUS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STATUS", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_VALUE_STATUS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"VALUE_STATUS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_VALUE_STATUS", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"VALUE_STATUS", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand4
			// 
			this->oracleDeleteCommand4->CommandText = L"DELETE FROM \"STATUSES\" WHERE ((\"ID_STATUS\" = :Original_ID_STATUS) AND ((:IsNull_V" 
				L"ALUE_STATUS = 1 AND \"VALUE_STATUS\" IS NULL) OR (\"VALUE_STATUS\" = :Original_VALUE" 
				L"_STATUS)))";
			this->oracleDeleteCommand4->Connection = this->oracleConnection1;
			this->oracleDeleteCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STATUS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STATUS", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_VALUE_STATUS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"VALUE_STATUS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_VALUE_STATUS", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"VALUE_STATUS", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// statusesDA
			// 
			this->statusesDA->DeleteCommand = this->oracleDeleteCommand4;
			this->statusesDA->InsertCommand = this->oracleInsertCommand4;
			this->statusesDA->SelectCommand = this->oracleSelectCommand4;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__4 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_STATUS", 
				L"ID_STATUS")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_STATUS", L"VALUE_STATUS"))};
			this->statusesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"STATUSES", __mcTemp__4))});
			this->statusesDA->UpdateCommand = this->oracleUpdateCommand4;
			// 
			// oracleSelectCommand5
			// 
			this->oracleSelectCommand5->CommandText = L"SELECT        ID_TEACHER, LAST_NAME, FIRST_NAME, THIRD_NAME, GET_FULLNAME(LAST_NA" 
				L"ME, FIRST_NAME, THIRD_NAME) FULLNAME\r\nFROM            TEACHERS\r\nORDER BY LAST_NA" 
				L"ME, FIRST_NAME, THIRD_NAME";
			this->oracleSelectCommand5->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand5
			// 
			this->oracleInsertCommand5->CommandText = L"INSERT INTO \"TEACHERS\" (\"ID_TEACHER\", \"LAST_NAME\", \"FIRST_NAME\", \"THIRD_NAME\") VA" 
				L"LUES (:ID_TEACHER, :LAST_NAME, :FIRST_NAME, :THIRD_NAME)";
			this->oracleInsertCommand5->Connection = this->oracleConnection1;
			this->oracleInsertCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(4) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"LAST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"LAST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"FIRST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"FIRST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"THIRD_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"THIRD_NAME"))});
			// 
			// oracleUpdateCommand5
			// 
			this->oracleUpdateCommand5->CommandText = resources->GetString(L"oracleUpdateCommand5.CommandText");
			this->oracleUpdateCommand5->Connection = this->oracleConnection1;
			this->oracleUpdateCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(11) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"LAST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"LAST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"FIRST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"FIRST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"THIRD_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"THIRD_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_LAST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"LAST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_LAST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"LAST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_FIRST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"FIRST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_FIRST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"FIRST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_THIRD_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"THIRD_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_THIRD_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"THIRD_NAME", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand5
			// 
			this->oracleDeleteCommand5->CommandText = resources->GetString(L"oracleDeleteCommand5.CommandText");
			this->oracleDeleteCommand5->Connection = this->oracleConnection1;
			this->oracleDeleteCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(7) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_LAST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"LAST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_LAST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"LAST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_FIRST_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"FIRST_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_FIRST_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"FIRST_NAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_THIRD_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"THIRD_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_THIRD_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"THIRD_NAME", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachersDA
			// 
			this->teachersDA->DeleteCommand = this->oracleDeleteCommand5;
			this->teachersDA->InsertCommand = this->oracleInsertCommand5;
			this->teachersDA->SelectCommand = this->oracleSelectCommand5;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__5 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {(gcnew System::Data::Common::DataColumnMapping(L"ID_TEACHER", 
				L"ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"LAST_NAME", L"LAST_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"FIRST_NAME", 
				L"FIRST_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"THIRD_NAME", L"THIRD_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", 
				L"FULLNAME"))};
			this->teachersDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS", __mcTemp__5))});
			this->teachersDA->UpdateCommand = this->oracleUpdateCommand5;
			// 
			// oracleSelectCommand6
			// 
			this->oracleSelectCommand6->CommandText = resources->GetString(L"oracleSelectCommand6.CommandText");
			this->oracleSelectCommand6->Connection = this->oracleConnection1;
			// 
			// disciplinesDA
			// 
			this->disciplinesDA->DeleteCommand = this->oracleDeleteCommand;
			this->disciplinesDA->InsertCommand = this->oracleInsertCommand;
			this->disciplinesDA->SelectCommand = this->oracleSelectCommand6;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__6 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(7) {(gcnew System::Data::Common::DataColumnMapping(L"ID_DISCIPLINE", 
				L"ID_DISCIPLINE")), (gcnew System::Data::Common::DataColumnMapping(L"ID_DISCNAME", L"ID_DISCNAME")), (gcnew System::Data::Common::DataColumnMapping(L"NUMBER_HOURS", 
				L"NUMBER_HOURS")), (gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", L"ID_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"ID_TYPE", 
				L"ID_TYPE")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", L"DISCNAME")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAMEWITHGROUPNAME", 
				L"DISCNAMEWITHGROUPNAME"))};
			this->disciplinesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"DISCIPLINES", __mcTemp__6))});
			this->disciplinesDA->UpdateCommand = this->oracleUpdateCommand;
			// 
			// oracleDeleteCommand
			// 
			this->oracleDeleteCommand->CommandText = resources->GetString(L"oracleDeleteCommand.CommandText");
			this->oracleDeleteCommand->Connection = this->oracleConnection1;
			this->oracleDeleteCommand->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(9) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_DISCNAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCNAME", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_DISCNAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_NUMBER_HOURS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"NUMBER_HOURS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_NUMBER_HOURS", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"NUMBER_HOURS", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_TYPE", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_TYPE", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TYPE", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_TYPE", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleInsertCommand
			// 
			this->oracleInsertCommand->CommandText = L"INSERT INTO \"DISCIPLINES\" (\"ID_DISCIPLINE\", \"ID_DISCNAME\", \"NUMBER_HOURS\", \"ID_GR" 
				L"OUP\", \"ID_TYPE\") VALUES (:ID_DISCIPLINE, :ID_DISCNAME, :NUMBER_HOURS, :ID_GROUP," 
				L" :ID_TYPE)";
			this->oracleInsertCommand->Connection = this->oracleConnection1;
			this->oracleInsertCommand->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCNAME", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"NUMBER_HOURS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"NUMBER_HOURS", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_TYPE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TYPE", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand
			// 
			this->oracleUpdateCommand->CommandText = resources->GetString(L"oracleUpdateCommand.CommandText");
			this->oracleUpdateCommand->Connection = this->oracleConnection1;
			this->oracleUpdateCommand->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(14) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCNAME", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"NUMBER_HOURS", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"NUMBER_HOURS", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_TYPE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TYPE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_DISCNAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCNAME", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_DISCNAME", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_NUMBER_HOURS", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"NUMBER_HOURS", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_NUMBER_HOURS", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"NUMBER_HOURS", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_TYPE", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_TYPE", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TYPE", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_TYPE", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleSelectCommand7
			// 
			this->oracleSelectCommand7->CommandText = L"SELECT        TEACHERS2DISCIPLINES.*\r\nFROM            TEACHERS2DISCIPLINES";
			this->oracleSelectCommand7->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand6
			// 
			this->oracleInsertCommand6->CommandText = L"INSERT INTO \"TEACHERS2DISCIPLINES\" (\"TEACHERS_ID_TEACHER\", \"DISCIPLINES_ID_DISCIP" 
				L"LINE\") VALUES (:TEACHERS_ID_TEACHER, :p1)";
			this->oracleInsertCommand6->Connection = this->oracleConnection1;
			this->oracleInsertCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p1", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand6
			// 
			this->oracleUpdateCommand6->CommandText = resources->GetString(L"oracleUpdateCommand6.CommandText");
			this->oracleUpdateCommand6->Connection = this->oracleConnection1;
			this->oracleUpdateCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(4) {(gcnew System::Data::OracleClient::OracleParameter(L"TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p1", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p2", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand6
			// 
			this->oracleDeleteCommand6->CommandText = L"DELETE FROM \"TEACHERS2DISCIPLINES\" WHERE ((\"TEACHERS_ID_TEACHER\" = :Original_TEAC" 
				L"HERS_ID_TEACHER) AND (\"DISCIPLINES_ID_DISCIPLINE\" = :p2))";
			this->oracleDeleteCommand6->Connection = this->oracleConnection1;
			this->oracleDeleteCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_TEACHERS_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"TEACHERS_ID_TEACHER", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"p2", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DISCIPLINES_ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachers2disciplinesDA
			// 
			this->teachers2disciplinesDA->DeleteCommand = this->oracleDeleteCommand6;
			this->teachers2disciplinesDA->InsertCommand = this->oracleInsertCommand6;
			this->teachers2disciplinesDA->SelectCommand = this->oracleSelectCommand7;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__7 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"TEACHERS_ID_TEACHER", 
				L"TEACHERS_ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"DISCIPLINES_ID_DISCIPLINE", L"DISCIPLINES_ID_DISCIPLINE"))};
			this->teachers2disciplinesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS2DISCIPLINES", __mcTemp__7))});
			this->teachers2disciplinesDA->UpdateCommand = this->oracleUpdateCommand6;
			// 
			// oracleSelectCommand8
			// 
			this->oracleSelectCommand8->CommandText = L"SELECT        TYPES.*\r\nFROM            TYPES";
			this->oracleSelectCommand8->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand7
			// 
			this->oracleInsertCommand7->CommandText = L"INSERT INTO \"TYPES\" (\"ID_TYPE\", \"VALUE_TYPE\") VALUES (:ID_TYPE, :VALUE_TYPE)";
			this->oracleInsertCommand7->Connection = this->oracleConnection1;
			this->oracleInsertCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TYPE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TYPE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"VALUE_TYPE", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"VALUE_TYPE"))});
			// 
			// oracleUpdateCommand7
			// 
			this->oracleUpdateCommand7->CommandText = resources->GetString(L"oracleUpdateCommand7.CommandText");
			this->oracleUpdateCommand7->Connection = this->oracleConnection1;
			this->oracleUpdateCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TYPE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TYPE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"VALUE_TYPE", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"VALUE_TYPE")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TYPE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TYPE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_VALUE_TYPE", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"VALUE_TYPE", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_VALUE_TYPE", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"VALUE_TYPE", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand7
			// 
			this->oracleDeleteCommand7->CommandText = L"DELETE FROM \"TYPES\" WHERE ((\"ID_TYPE\" = :Original_ID_TYPE) AND ((:IsNull_VALUE_TY" 
				L"PE = 1 AND \"VALUE_TYPE\" IS NULL) OR (\"VALUE_TYPE\" = :Original_VALUE_TYPE)))";
			this->oracleDeleteCommand7->Connection = this->oracleConnection1;
			this->oracleDeleteCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TYPE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TYPE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_VALUE_TYPE", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"VALUE_TYPE", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_VALUE_TYPE", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"VALUE_TYPE", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// typesDA
			// 
			this->typesDA->DeleteCommand = this->oracleDeleteCommand7;
			this->typesDA->InsertCommand = this->oracleInsertCommand7;
			this->typesDA->SelectCommand = this->oracleSelectCommand8;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__8 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_TYPE", 
				L"ID_TYPE")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_TYPE", L"VALUE_TYPE"))};
			this->typesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TYPES", __mcTemp__8))});
			this->typesDA->UpdateCommand = this->oracleUpdateCommand7;
			// 
			// oracleSelectCommand9
			// 
			this->oracleSelectCommand9->CommandText = L"SELECT        ID_DISCNAME, DISC_NAME\r\nFROM            DISCNAMES\r\nORDER BY DISC_NA" 
				L"ME";
			this->oracleSelectCommand9->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand8
			// 
			this->oracleInsertCommand8->CommandText = L"INSERT INTO \"DISCNAMES\" (\"ID_DISCNAME\", \"DISC_NAME\") VALUES (:ID_DISCNAME, :DISC_" 
				L"NAME)";
			this->oracleInsertCommand8->Connection = this->oracleConnection1;
			this->oracleInsertCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCNAME", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"DISC_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"DISC_NAME"))});
			// 
			// oracleUpdateCommand8
			// 
			this->oracleUpdateCommand8->CommandText = resources->GetString(L"oracleUpdateCommand8.CommandText");
			this->oracleUpdateCommand8->Connection = this->oracleConnection1;
			this->oracleUpdateCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCNAME", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"DISC_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"DISC_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCNAME", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_DISC_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"DISC_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_DISC_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"DISC_NAME", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand8
			// 
			this->oracleDeleteCommand8->CommandText = L"DELETE FROM \"DISCNAMES\" WHERE ((\"ID_DISCNAME\" = :Original_ID_DISCNAME) AND ((:IsN" 
				L"ull_DISC_NAME = 1 AND \"DISC_NAME\" IS NULL) OR (\"DISC_NAME\" = :Original_DISC_NAME" 
				L")))";
			this->oracleDeleteCommand8->Connection = this->oracleConnection1;
			this->oracleDeleteCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCNAME", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCNAME", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_DISC_NAME", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"DISC_NAME", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_DISC_NAME", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"DISC_NAME", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// discnamesDA
			// 
			this->discnamesDA->DeleteCommand = this->oracleDeleteCommand8;
			this->discnamesDA->InsertCommand = this->oracleInsertCommand8;
			this->discnamesDA->SelectCommand = this->oracleSelectCommand9;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__9 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_DISCNAME", 
				L"ID_DISCNAME")), (gcnew System::Data::Common::DataColumnMapping(L"DISC_NAME", L"DISC_NAME"))};
			this->discnamesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"DISCNAMES", __mcTemp__9))});
			this->discnamesDA->UpdateCommand = this->oracleUpdateCommand8;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 609);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложение для сотрудника деканата";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->professionsBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groupsBS))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->statusesBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->studentsBS))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->splitContainer7->Panel1->ResumeLayout(false);
			this->splitContainer7->Panel2->ResumeLayout(false);
			this->splitContainer7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->discnamesBS))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel2->ResumeLayout(false);
			this->splitContainer5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->typesBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->disciplinesBS))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			this->splitContainer6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachers2disciplinesBS))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->professionsDA->Fill(this->ds, "PROFESSIONS");
				 this->groupsDA->Fill(this->ds, "GROUPS");
				 this->studentsDA->Fill(this->ds, "STUDENTS");
				 this->statusesDA->Fill(this->ds, "STATUSES");
				 this->teachersDA->Fill(this->ds, "TEACHERS");
				 this->disciplinesDA->Fill(this->ds, "DISCIPLINES");
				 this->teachers2disciplinesDA->Fill(this->ds, "TEACHERS2DISCIPLINES");
				 this->typesDA->Fill(this->ds, "TYPES");
				 this->discnamesDA->Fill(this->ds, "DISCNAMES");

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->professionsBS->Position;
				this->professionsDA->Update(this->ds, "PROFESSIONS");
				this->ds->PROFESSIONS->Clear();
				this->professionsDA->Fill(this->ds, "PROFESSIONS");
				this->professionsBS->Position = pos;

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->groupsBS->Position;
				this->groupsDA->Update(this->ds, "GROUPS");
				this->ds->GROUPS->Clear();
				this->groupsDA->Fill(this->ds, "GROUPS");
				this->groupsBS->Position = pos;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->studentsBS->Position;
				this->studentsDA->Update(this->ds, "STUDENTS");
				this->ds->STUDENTS->Clear();
				this->studentsDA->Fill(this->ds, "STUDENTS");
				this->studentsBS->Position = pos;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->teachersBS->Position;
				this->teachersDA->Update(this->ds, "TEACHERS");
				this->ds->TEACHERS->Clear();
				this->teachersDA->Fill(this->ds, "TEACHERS");
				this->teachersBS->Position = pos;
		 }
		 
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->disciplinesBS->Position;
				this->disciplinesDA->Update(this->ds, "DISCIPLINES");
				this->ds->DISCIPLINES->Clear();
				this->disciplinesDA->Fill(this->ds, "DISCIPLINES");
				this->disciplinesBS->Position = pos;
		 }
		
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->teachers2disciplinesBS->Position;
				this->teachers2disciplinesDA->Update(this->ds, "TEACHERS2DISCIPLINES");
				this->ds->TEACHERS2DISCIPLINES->Clear();
				this->teachers2disciplinesDA->Fill(this->ds, "TEACHERS2DISCIPLINES");
				this->teachers2disciplinesBS->Position = pos;
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->discnamesBS->Position;
				this->discnamesDA->Update(this->ds, "DISCNAMES");
				this->ds->DISCNAMES->Clear();
				this->discnamesDA->Fill(this->ds, "DISCNAMES");
				this->discnamesBS->Position = pos;
		 }
};
}

