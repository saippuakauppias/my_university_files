#pragma once


namespace dekan {

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
	private: System::Data::OracleClient::OracleConnection^  oracleConnection1;

	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand1;
	private: System::Data::OracleClient::OracleDataAdapter^  faculty_marksDA;
	private: System::Windows::Forms::BindingSource^  faculty_marksBS;

	private: dekan::DataSet1^  ds;






	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand2;
	private: System::Data::OracleClient::OracleDataAdapter^  view_coursesDA;







	private: System::Windows::Forms::BindingSource^  view_coursesBS;
	private: System::Windows::Forms::DataGridView^  dataGridView2;






	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand3;
	private: System::Data::OracleClient::OracleDataAdapter^  view_marks_facDA;
	private: System::Windows::Forms::BindingSource^  view_marks_facBS;
	private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand4;
	private: System::Data::OracleClient::OracleDataAdapter^  view_marks_courseDA;
	private: dekan::DataSet2^  ds2;
	private: System::Windows::Forms::BindingSource^  view_marks_courseBS;





	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gROUPNAMEDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cOURSEDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dISCNAMEDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fULLNAMEDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  vALUEMARKDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dATEMARKDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;





private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand5;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand1;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand1;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand1;
private: System::Data::OracleClient::OracleDataAdapter^  groupsDA;
private: System::Windows::Forms::BindingSource^  groupsBS;
private: dekan::DataSet3^  ds3;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand6;
private: System::Data::OracleClient::OracleDataAdapter^  view_marks_groupDA;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::BindingSource^  view_marks_groupBS;
private: System::Windows::Forms::SplitContainer^  splitContainer3;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::ComboBox^  teachersCB;

private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand7;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand2;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand2;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand2;
private: System::Data::OracleClient::OracleDataAdapter^  teachersDA;
private: dekan::DataSet4^  ds4;
private: System::Windows::Forms::BindingSource^  teachersBS;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  disciplinesBT;

private: System::Windows::Forms::ComboBox^  disciplinesCB;

private: System::Windows::Forms::Label^  label4;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand8;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand3;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand3;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand3;
private: System::Data::OracleClient::OracleDataAdapter^  disciplinesDA;
private: System::Windows::Forms::BindingSource^  disciplinesBS;
private: System::Windows::Forms::Button^  button4;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand9;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand4;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand4;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand4;
private: System::Data::OracleClient::OracleDataAdapter^  exam_sheetDA;
private: System::Windows::Forms::DataGridView^  dataGridView4;





private: System::Windows::Forms::BindingSource^  exam_sheetBS;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  vALUEMARKDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  sTUDNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::SplitContainer^  splitContainer4;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::TabPage^  tabPage8;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::ComboBox^  comboBox4;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::ComboBox^  comboBox3;
private: System::Windows::Forms::Label^  label5;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand10;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand5;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand5;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand5;
private: System::Data::OracleClient::OracleDataAdapter^  groups_dipDA;
private: System::Windows::Forms::BindingSource^  groups_dipBS;
private: dekan::DataSet5^  ds5;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand11;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand6;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand6;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand6;
private: System::Data::OracleClient::OracleDataAdapter^  students_dipDA;
private: System::Windows::Forms::BindingSource^  students_dipBS;
private: System::Windows::Forms::DataGridView^  dataGridView5;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand12;
private: System::Data::OracleClient::OracleDataAdapter^  marks_dipDA;




private: System::Windows::Forms::BindingSource^  marks_dipBS;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fULLNAMEDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dISCNAMEDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dATEMARKDataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  vALUEMARKDataGridViewTextBoxColumn2;
private: System::Windows::Forms::SplitContainer^  splitContainer5;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::ComboBox^  comboBox5;
private: System::Windows::Forms::Label^  label7;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand13;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand7;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand7;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand7;
private: System::Data::OracleClient::OracleDataAdapter^  groups_transDA;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand14;
private: System::Data::OracleClient::OracleDataAdapter^  students_transDA;
private: System::Windows::Forms::BindingSource^  bindingSource1;
private: dekan::DataSet6^  ds6;
private: System::Windows::Forms::BindingSource^  groups_transBS;
private: System::Windows::Forms::DataGridView^  dataGridView6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fULLNAMEDataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  cOURSEDataGridViewTextBoxColumn1;
private: System::Windows::Forms::BindingSource^  students_transBS;
private: System::Windows::Forms::SplitContainer^  splitContainer6;
private: System::Windows::Forms::DataGridView^  dataGridView7;
private: System::Windows::Forms::Button^  button8;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand15;
private: System::Data::OracleClient::OracleCommand^  oracleInsertCommand8;
private: System::Data::OracleClient::OracleCommand^  oracleUpdateCommand8;
private: System::Data::OracleClient::OracleCommand^  oracleDeleteCommand8;
private: System::Data::OracleClient::OracleDataAdapter^  teachers_tDA;
private: dekan::DataSet7^  ds7;
private: System::Windows::Forms::BindingSource^  teachers_tBS;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  lASTNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fIRSTNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  tHIRDNAMEDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  pASSWODDataGridViewTextBoxColumn;
private: System::Windows::Forms::DataGridView^  dataGridView8;
private: System::Data::OracleClient::OracleCommand^  oracleSelectCommand16;
private: System::Data::OracleClient::OracleDataAdapter^  students_dolgDA;
private: dekan::DataSet8^  ds8;



private: System::Windows::Forms::BindingSource^  students_dolgBS;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  vALUEMARKDataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fULLNAMEDataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dISCNAMEDataGridViewTextBoxColumn2;
























































































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->gROUPNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cOURSEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dISCNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fULLNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vALUEMARKDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dATEMARKDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->view_marks_facBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds = (gcnew dekan::DataSet1());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->view_coursesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->view_marks_courseBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds2 = (gcnew dekan::DataSet2());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupsBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds3 = (gcnew dekan::DataSet3());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->view_marks_groupBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->disciplinesBT = (gcnew System::Windows::Forms::Button());
			this->disciplinesCB = (gcnew System::Windows::Forms::ComboBox());
			this->disciplinesBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds4 = (gcnew dekan::DataSet4());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->teachersCB = (gcnew System::Windows::Forms::ComboBox());
			this->teachersBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->vALUEMARKDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sTUDNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exam_sheetBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->students_dipBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds5 = (gcnew dekan::DataSet5());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groups_dipBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->fULLNAMEDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dISCNAMEDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dATEMARKDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->vALUEMARKDataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->marks_dipBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer5 = (gcnew System::Windows::Forms::SplitContainer());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->groups_transBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds6 = (gcnew dekan::DataSet6());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->fULLNAMEDataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cOURSEDataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->students_transBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer6 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->lASTNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fIRSTNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tHIRDNAMEDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pASSWODDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->teachers_tBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->ds7 = (gcnew dekan::DataSet7());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
			this->faculty_marksBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->oracleConnection1 = (gcnew System::Data::OracleClient::OracleConnection());
			this->oracleSelectCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->faculty_marksDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->view_coursesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->view_marks_facDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->view_marks_courseDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand1 = (gcnew System::Data::OracleClient::OracleCommand());
			this->groupsDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->view_marks_groupDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand2 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachersDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand3 = (gcnew System::Data::OracleClient::OracleCommand());
			this->disciplinesDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand9 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand4 = (gcnew System::Data::OracleClient::OracleCommand());
			this->exam_sheetDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand10 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand5 = (gcnew System::Data::OracleClient::OracleCommand());
			this->groups_dipDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand11 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand6 = (gcnew System::Data::OracleClient::OracleCommand());
			this->students_dipDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand12 = (gcnew System::Data::OracleClient::OracleCommand());
			this->marks_dipDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand13 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand7 = (gcnew System::Data::OracleClient::OracleCommand());
			this->groups_transDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand14 = (gcnew System::Data::OracleClient::OracleCommand());
			this->students_transDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->oracleSelectCommand15 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleInsertCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleUpdateCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->oracleDeleteCommand8 = (gcnew System::Data::OracleClient::OracleCommand());
			this->teachers_tDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->oracleSelectCommand16 = (gcnew System::Data::OracleClient::OracleCommand());
			this->students_dolgDA = (gcnew System::Data::OracleClient::OracleDataAdapter());
			this->ds8 = (gcnew dekan::DataSet8());
			this->students_dolgBS = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->vALUEMARKDataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fULLNAMEDataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dISCNAMEDataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_marks_facBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_coursesBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_marks_courseBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groupsBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_marks_groupBS))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->disciplinesBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->exam_sheetBS))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->students_dipBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groups_dipBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->marks_dipBS))->BeginInit();
			this->tabPage6->SuspendLayout();
			this->splitContainer5->Panel1->SuspendLayout();
			this->splitContainer5->Panel2->SuspendLayout();
			this->splitContainer5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groups_transBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->students_transBS))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->splitContainer6->Panel1->SuspendLayout();
			this->splitContainer6->Panel2->SuspendLayout();
			this->splitContainer6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachers_tBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds7))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->faculty_marksBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->students_dolgBS))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(822, 409);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(814, 380);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Успеваемость факультета";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->gROUPNAMEDataGridViewTextBoxColumn, 
				this->cOURSEDataGridViewTextBoxColumn, this->dISCNAMEDataGridViewTextBoxColumn, this->fULLNAMEDataGridViewTextBoxColumn, this->vALUEMARKDataGridViewTextBoxColumn, 
				this->dATEMARKDataGridViewTextBoxColumn});
			this->dataGridView1->DataSource = this->view_marks_facBS;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(808, 374);
			this->dataGridView1->TabIndex = 0;
			// 
			// gROUPNAMEDataGridViewTextBoxColumn
			// 
			this->gROUPNAMEDataGridViewTextBoxColumn->DataPropertyName = L"GROUPNAME";
			this->gROUPNAMEDataGridViewTextBoxColumn->HeaderText = L"Группа";
			this->gROUPNAMEDataGridViewTextBoxColumn->Name = L"gROUPNAMEDataGridViewTextBoxColumn";
			this->gROUPNAMEDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// cOURSEDataGridViewTextBoxColumn
			// 
			this->cOURSEDataGridViewTextBoxColumn->DataPropertyName = L"COURSE";
			this->cOURSEDataGridViewTextBoxColumn->HeaderText = L"Курс";
			this->cOURSEDataGridViewTextBoxColumn->Name = L"cOURSEDataGridViewTextBoxColumn";
			this->cOURSEDataGridViewTextBoxColumn->ReadOnly = true;
			this->cOURSEDataGridViewTextBoxColumn->Width = 80;
			// 
			// dISCNAMEDataGridViewTextBoxColumn
			// 
			this->dISCNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dISCNAMEDataGridViewTextBoxColumn->DataPropertyName = L"DISCNAME";
			this->dISCNAMEDataGridViewTextBoxColumn->HeaderText = L"Предмет";
			this->dISCNAMEDataGridViewTextBoxColumn->Name = L"dISCNAMEDataGridViewTextBoxColumn";
			this->dISCNAMEDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// fULLNAMEDataGridViewTextBoxColumn
			// 
			this->fULLNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fULLNAMEDataGridViewTextBoxColumn->DataPropertyName = L"FULLNAME";
			this->fULLNAMEDataGridViewTextBoxColumn->HeaderText = L"Студент";
			this->fULLNAMEDataGridViewTextBoxColumn->Name = L"fULLNAMEDataGridViewTextBoxColumn";
			this->fULLNAMEDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// vALUEMARKDataGridViewTextBoxColumn
			// 
			this->vALUEMARKDataGridViewTextBoxColumn->DataPropertyName = L"VALUE_MARK";
			this->vALUEMARKDataGridViewTextBoxColumn->HeaderText = L"Оценка";
			this->vALUEMARKDataGridViewTextBoxColumn->Name = L"vALUEMARKDataGridViewTextBoxColumn";
			this->vALUEMARKDataGridViewTextBoxColumn->ReadOnly = true;
			this->vALUEMARKDataGridViewTextBoxColumn->Width = 70;
			// 
			// dATEMARKDataGridViewTextBoxColumn
			// 
			this->dATEMARKDataGridViewTextBoxColumn->DataPropertyName = L"DATE_MARK";
			this->dATEMARKDataGridViewTextBoxColumn->HeaderText = L"Дата оценки";
			this->dATEMARKDataGridViewTextBoxColumn->Name = L"dATEMARKDataGridViewTextBoxColumn";
			this->dATEMARKDataGridViewTextBoxColumn->ReadOnly = true;
			this->dATEMARKDataGridViewTextBoxColumn->Width = 120;
			// 
			// view_marks_facBS
			// 
			this->view_marks_facBS->DataMember = L"VIEW_MARKS_FAC";
			this->view_marks_facBS->DataSource = this->ds;
			// 
			// ds
			// 
			this->ds->DataSetName = L"ds";
			this->ds->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(814, 380);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Успеваемость курса";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->Location = System::Drawing::Point(3, 3);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->comboBox1);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->dataGridView2);
			this->splitContainer1->Size = System::Drawing::Size(808, 374);
			this->splitContainer1->SplitterDistance = 35;
			this->splitContainer1->SplitterWidth = 1;
			this->splitContainer1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(218, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 25);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выбрать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(5, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите курс:";
			// 
			// comboBox1
			// 
			this->comboBox1->DataSource = this->view_coursesBS;
			this->comboBox1->DisplayMember = L"COURSE";
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(123, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(89, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// view_coursesBS
			// 
			this->view_coursesBS->DataMember = L"VIEW_COURSES";
			this->view_coursesBS->DataSource = this->ds;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AutoGenerateColumns = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->dataGridViewTextBoxColumn1, 
				this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6});
			this->dataGridView2->DataSource = this->view_marks_courseBS;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(808, 338);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->DataPropertyName = L"GROUPNAME";
			this->dataGridViewTextBoxColumn1->HeaderText = L"Группа";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn3->DataPropertyName = L"DISCNAME";
			this->dataGridViewTextBoxColumn3->HeaderText = L"Предмет";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn4->DataPropertyName = L"FULLNAME";
			this->dataGridViewTextBoxColumn4->HeaderText = L"Студент";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->DataPropertyName = L"VALUE_MARK";
			this->dataGridViewTextBoxColumn5->HeaderText = L"Оценка";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 70;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->DataPropertyName = L"DATE_MARK";
			this->dataGridViewTextBoxColumn6->HeaderText = L"Дата оценки";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 120;
			// 
			// view_marks_courseBS
			// 
			this->view_marks_courseBS->DataMember = L"VIEW_MARKS_COURSE";
			this->view_marks_courseBS->DataSource = this->ds2;
			// 
			// ds2
			// 
			this->ds2->DataSetName = L"ds2";
			this->ds2->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(814, 380);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Успеваемость группы";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->button2);
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Controls->Add(this->comboBox2);
			this->splitContainer2->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::splitContainer1_Panel1_Paint);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->dataGridView3);
			this->splitContainer2->Size = System::Drawing::Size(808, 374);
			this->splitContainer2->SplitterDistance = 35;
			this->splitContainer2->SplitterWidth = 1;
			this->splitContainer2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(287, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 25);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Выбрать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выберите группу:";
			// 
			// comboBox2
			// 
			this->comboBox2->DataSource = this->groupsBS;
			this->comboBox2->DisplayMember = L"GROUPNAME";
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(134, 5);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(147, 24);
			this->comboBox2->TabIndex = 0;
			// 
			// groupsBS
			// 
			this->groupsBS->DataMember = L"GROUPS";
			this->groupsBS->DataSource = this->ds3;
			// 
			// ds3
			// 
			this->ds3->DataSetName = L"ds3";
			this->ds3->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToOrderColumns = true;
			this->dataGridView3->AutoGenerateColumns = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->dataGridViewTextBoxColumn2, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10});
			this->dataGridView3->DataSource = this->view_marks_groupBS;
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(808, 338);
			this->dataGridView3->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->DataPropertyName = L"COURSE";
			this->dataGridViewTextBoxColumn2->HeaderText = L"Курс";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 70;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn7->DataPropertyName = L"DISCNAME";
			this->dataGridViewTextBoxColumn7->HeaderText = L"Предмет";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dataGridViewTextBoxColumn8->DataPropertyName = L"FULLNAME";
			this->dataGridViewTextBoxColumn8->HeaderText = L"Студент";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->DataPropertyName = L"VALUE_MARK";
			this->dataGridViewTextBoxColumn9->HeaderText = L"Оценка";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 70;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->DataPropertyName = L"DATE_MARK";
			this->dataGridViewTextBoxColumn10->HeaderText = L"Дата оценки";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 120;
			// 
			// view_marks_groupBS
			// 
			this->view_marks_groupBS->DataMember = L"VIEW_MARKS_GROUP";
			this->view_marks_groupBS->DataSource = this->ds3;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->splitContainer3);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(814, 380);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Экзаменационные ведомости";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer3->Location = System::Drawing::Point(3, 3);
			this->splitContainer3->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->button4);
			this->splitContainer3->Panel1->Controls->Add(this->disciplinesBT);
			this->splitContainer3->Panel1->Controls->Add(this->disciplinesCB);
			this->splitContainer3->Panel1->Controls->Add(this->label4);
			this->splitContainer3->Panel1->Controls->Add(this->button3);
			this->splitContainer3->Panel1->Controls->Add(this->teachersCB);
			this->splitContainer3->Panel1->Controls->Add(this->label3);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->dataGridView4);
			this->splitContainer3->Size = System::Drawing::Size(808, 374);
			this->splitContainer3->SplitterDistance = 115;
			this->splitContainer3->SplitterWidth = 1;
			this->splitContainer3->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(202, 62);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(424, 48);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Выдать ведомость";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// disciplinesBT
			// 
			this->disciplinesBT->Enabled = false;
			this->disciplinesBT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->disciplinesBT->Location = System::Drawing::Point(632, 35);
			this->disciplinesBT->Name = L"disciplinesBT";
			this->disciplinesBT->Size = System::Drawing::Size(99, 24);
			this->disciplinesBT->TabIndex = 5;
			this->disciplinesBT->Text = L"Выбрать";
			this->disciplinesBT->UseVisualStyleBackColor = true;
			this->disciplinesBT->Click += gcnew System::EventHandler(this, &Form1::disciplinesBT_Click);
			// 
			// disciplinesCB
			// 
			this->disciplinesCB->DataSource = this->disciplinesBS;
			this->disciplinesCB->DisplayMember = L"DISCNAME";
			this->disciplinesCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->disciplinesCB->Enabled = false;
			this->disciplinesCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->disciplinesCB->FormattingEnabled = true;
			this->disciplinesCB->Location = System::Drawing::Point(202, 35);
			this->disciplinesCB->Name = L"disciplinesCB";
			this->disciplinesCB->Size = System::Drawing::Size(424, 24);
			this->disciplinesCB->TabIndex = 4;
			// 
			// disciplinesBS
			// 
			this->disciplinesBS->DataMember = L"DISCIPLINES";
			this->disciplinesBS->DataSource = this->ds4;
			// 
			// ds4
			// 
			this->ds4->DataSetName = L"ds4";
			this->ds4->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(5, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Выберите предмет:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(632, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 24);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выбрать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// teachersCB
			// 
			this->teachersCB->DataSource = this->teachersBS;
			this->teachersCB->DisplayMember = L"FULLNAME";
			this->teachersCB->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->teachersCB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->teachersCB->FormattingEnabled = true;
			this->teachersCB->Location = System::Drawing::Point(202, 6);
			this->teachersCB->Name = L"teachersCB";
			this->teachersCB->Size = System::Drawing::Size(424, 24);
			this->teachersCB->TabIndex = 1;
			// 
			// teachersBS
			// 
			this->teachersBS->DataMember = L"TEACHERS";
			this->teachersBS->DataSource = this->ds4;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Выберите преподавателя:";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AllowUserToOrderColumns = true;
			this->dataGridView4->AutoGenerateColumns = false;
			this->dataGridView4->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->vALUEMARKDataGridViewTextBoxColumn1, 
				this->sTUDNAMEDataGridViewTextBoxColumn});
			this->dataGridView4->DataSource = this->exam_sheetBS;
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView4->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView4->Location = System::Drawing::Point(0, 0);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(808, 258);
			this->dataGridView4->TabIndex = 0;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView4_CellContentClick);
			// 
			// vALUEMARKDataGridViewTextBoxColumn1
			// 
			this->vALUEMARKDataGridViewTextBoxColumn1->DataPropertyName = L"VALUE_MARK";
			this->vALUEMARKDataGridViewTextBoxColumn1->HeaderText = L"Оценка";
			this->vALUEMARKDataGridViewTextBoxColumn1->Name = L"vALUEMARKDataGridViewTextBoxColumn1";
			this->vALUEMARKDataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// sTUDNAMEDataGridViewTextBoxColumn
			// 
			this->sTUDNAMEDataGridViewTextBoxColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->sTUDNAMEDataGridViewTextBoxColumn->DataPropertyName = L"STUDNAME";
			this->sTUDNAMEDataGridViewTextBoxColumn->HeaderText = L"Имя студента";
			this->sTUDNAMEDataGridViewTextBoxColumn->Name = L"sTUDNAMEDataGridViewTextBoxColumn";
			this->sTUDNAMEDataGridViewTextBoxColumn->ReadOnly = true;
			// 
			// exam_sheetBS
			// 
			this->exam_sheetBS->DataMember = L"Table";
			this->exam_sheetBS->DataSource = this->ds4;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->splitContainer4);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(814, 380);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Вкладыши к диплому";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer4->Location = System::Drawing::Point(3, 3);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->button6);
			this->splitContainer4->Panel1->Controls->Add(this->button5);
			this->splitContainer4->Panel1->Controls->Add(this->comboBox4);
			this->splitContainer4->Panel1->Controls->Add(this->label6);
			this->splitContainer4->Panel1->Controls->Add(this->comboBox3);
			this->splitContainer4->Panel1->Controls->Add(this->label5);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->dataGridView5);
			this->splitContainer4->Size = System::Drawing::Size(808, 374);
			this->splitContainer4->SplitterDistance = 70;
			this->splitContainer4->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(594, 37);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 24);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Выбрать";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(594, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 24);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Выбрать";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->DataSource = this->students_dipBS;
			this->comboBox4->DisplayMember = L"FULLNAME";
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->Enabled = false;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(157, 37);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(415, 24);
			this->comboBox4->TabIndex = 3;
			// 
			// students_dipBS
			// 
			this->students_dipBS->DataMember = L"STUDENTS";
			this->students_dipBS->DataSource = this->ds5;
			// 
			// ds5
			// 
			this->ds5->DataSetName = L"ds5";
			this->ds5->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(140, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Выберите студента:";
			// 
			// comboBox3
			// 
			this->comboBox3->DataSource = this->groups_dipBS;
			this->comboBox3->DisplayMember = L"GROUPNAME";
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(157, 5);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(415, 24);
			this->comboBox3->TabIndex = 1;
			// 
			// groups_dipBS
			// 
			this->groups_dipBS->DataMember = L"GROUPS";
			this->groups_dipBS->DataSource = this->ds5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(8, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(125, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Выберите группу:";
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AllowUserToOrderColumns = true;
			this->dataGridView5->AutoGenerateColumns = false;
			this->dataGridView5->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->fULLNAMEDataGridViewTextBoxColumn1, 
				this->dISCNAMEDataGridViewTextBoxColumn1, this->dATEMARKDataGridViewTextBoxColumn1, this->vALUEMARKDataGridViewTextBoxColumn2});
			this->dataGridView5->DataSource = this->marks_dipBS;
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView5->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView5->Location = System::Drawing::Point(0, 0);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(808, 300);
			this->dataGridView5->TabIndex = 1;
			// 
			// fULLNAMEDataGridViewTextBoxColumn1
			// 
			this->fULLNAMEDataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fULLNAMEDataGridViewTextBoxColumn1->DataPropertyName = L"FULLNAME";
			this->fULLNAMEDataGridViewTextBoxColumn1->HeaderText = L"Преподаватель";
			this->fULLNAMEDataGridViewTextBoxColumn1->Name = L"fULLNAMEDataGridViewTextBoxColumn1";
			this->fULLNAMEDataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dISCNAMEDataGridViewTextBoxColumn1
			// 
			this->dISCNAMEDataGridViewTextBoxColumn1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dISCNAMEDataGridViewTextBoxColumn1->DataPropertyName = L"DISCNAME";
			this->dISCNAMEDataGridViewTextBoxColumn1->HeaderText = L"Предмет";
			this->dISCNAMEDataGridViewTextBoxColumn1->Name = L"dISCNAMEDataGridViewTextBoxColumn1";
			this->dISCNAMEDataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dATEMARKDataGridViewTextBoxColumn1
			// 
			this->dATEMARKDataGridViewTextBoxColumn1->DataPropertyName = L"DATE_MARK";
			this->dATEMARKDataGridViewTextBoxColumn1->HeaderText = L"Дата";
			this->dATEMARKDataGridViewTextBoxColumn1->Name = L"dATEMARKDataGridViewTextBoxColumn1";
			this->dATEMARKDataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// vALUEMARKDataGridViewTextBoxColumn2
			// 
			this->vALUEMARKDataGridViewTextBoxColumn2->DataPropertyName = L"VALUE_MARK";
			this->vALUEMARKDataGridViewTextBoxColumn2->HeaderText = L"Оценка";
			this->vALUEMARKDataGridViewTextBoxColumn2->Name = L"vALUEMARKDataGridViewTextBoxColumn2";
			this->vALUEMARKDataGridViewTextBoxColumn2->ReadOnly = true;
			this->vALUEMARKDataGridViewTextBoxColumn2->Width = 70;
			// 
			// marks_dipBS
			// 
			this->marks_dipBS->DataMember = L"MARKS";
			this->marks_dipBS->DataSource = this->ds5;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->splitContainer5);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(814, 380);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Перевод на курс выше";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// splitContainer5
			// 
			this->splitContainer5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer5->Location = System::Drawing::Point(3, 3);
			this->splitContainer5->Margin = System::Windows::Forms::Padding(1);
			this->splitContainer5->Name = L"splitContainer5";
			this->splitContainer5->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer5.Panel1
			// 
			this->splitContainer5->Panel1->Controls->Add(this->button7);
			this->splitContainer5->Panel1->Controls->Add(this->comboBox5);
			this->splitContainer5->Panel1->Controls->Add(this->label7);
			// 
			// splitContainer5.Panel2
			// 
			this->splitContainer5->Panel2->Controls->Add(this->dataGridView6);
			this->splitContainer5->Size = System::Drawing::Size(808, 374);
			this->splitContainer5->SplitterDistance = 35;
			this->splitContainer5->SplitterWidth = 1;
			this->splitContainer5->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(385, 7);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 24);
			this->button7->TabIndex = 2;
			this->button7->Text = L"Выбрать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->DataSource = this->groups_transBS;
			this->comboBox5->DisplayMember = L"GROUPNAME";
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(136, 7);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(243, 24);
			this->comboBox5->TabIndex = 1;
			// 
			// groups_transBS
			// 
			this->groups_transBS->DataMember = L"Table";
			this->groups_transBS->DataSource = this->ds6;
			// 
			// ds6
			// 
			this->ds6->DataSetName = L"ds6";
			this->ds6->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(5, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 16);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Выберите группу:";
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->AllowUserToDeleteRows = false;
			this->dataGridView6->AutoGenerateColumns = false;
			this->dataGridView6->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->fULLNAMEDataGridViewTextBoxColumn2, 
				this->cOURSEDataGridViewTextBoxColumn1});
			this->dataGridView6->DataSource = this->students_transBS;
			this->dataGridView6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView6->Location = System::Drawing::Point(0, 0);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(808, 338);
			this->dataGridView6->TabIndex = 0;
			// 
			// fULLNAMEDataGridViewTextBoxColumn2
			// 
			this->fULLNAMEDataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fULLNAMEDataGridViewTextBoxColumn2->DataPropertyName = L"FULLNAME";
			this->fULLNAMEDataGridViewTextBoxColumn2->HeaderText = L"Студент";
			this->fULLNAMEDataGridViewTextBoxColumn2->Name = L"fULLNAMEDataGridViewTextBoxColumn2";
			this->fULLNAMEDataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// cOURSEDataGridViewTextBoxColumn1
			// 
			this->cOURSEDataGridViewTextBoxColumn1->DataPropertyName = L"COURSE";
			this->cOURSEDataGridViewTextBoxColumn1->HeaderText = L"Курс";
			this->cOURSEDataGridViewTextBoxColumn1->Name = L"cOURSEDataGridViewTextBoxColumn1";
			this->cOURSEDataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// students_transBS
			// 
			this->students_transBS->DataMember = L"GROUPS";
			this->students_transBS->DataSource = this->ds6;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->splitContainer6);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(814, 380);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Преподаватели";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// splitContainer6
			// 
			this->splitContainer6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer6->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer6->Location = System::Drawing::Point(3, 3);
			this->splitContainer6->Name = L"splitContainer6";
			this->splitContainer6->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer6.Panel1
			// 
			this->splitContainer6->Panel1->Controls->Add(this->dataGridView7);
			// 
			// splitContainer6.Panel2
			// 
			this->splitContainer6->Panel2->Controls->Add(this->button8);
			this->splitContainer6->Size = System::Drawing::Size(808, 374);
			this->splitContainer6->SplitterDistance = 300;
			this->splitContainer6->TabIndex = 0;
			// 
			// dataGridView7
			// 
			this->dataGridView7->AutoGenerateColumns = false;
			this->dataGridView7->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->lASTNAMEDataGridViewTextBoxColumn, 
				this->fIRSTNAMEDataGridViewTextBoxColumn, this->tHIRDNAMEDataGridViewTextBoxColumn, this->pASSWODDataGridViewTextBoxColumn});
			this->dataGridView7->DataSource = this->teachers_tBS;
			this->dataGridView7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView7->Location = System::Drawing::Point(0, 0);
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->Size = System::Drawing::Size(808, 300);
			this->dataGridView7->TabIndex = 0;
			this->dataGridView7->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView7_CellContentClick);
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
			// pASSWODDataGridViewTextBoxColumn
			// 
			this->pASSWODDataGridViewTextBoxColumn->DataPropertyName = L"PASSWOD";
			this->pASSWODDataGridViewTextBoxColumn->HeaderText = L"Пароль";
			this->pASSWODDataGridViewTextBoxColumn->Name = L"pASSWODDataGridViewTextBoxColumn";
			this->pASSWODDataGridViewTextBoxColumn->Width = 200;
			// 
			// teachers_tBS
			// 
			this->teachers_tBS->DataMember = L"TEACHERS";
			this->teachers_tBS->DataSource = this->ds7;
			// 
			// ds7
			// 
			this->ds7->DataSetName = L"ds7";
			this->ds7->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->Location = System::Drawing::Point(0, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(808, 70);
			this->button8->TabIndex = 0;
			this->button8->Text = L"Сохранить изменения";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->dataGridView8);
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(814, 380);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Должники";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// dataGridView8
			// 
			this->dataGridView8->AllowUserToAddRows = false;
			this->dataGridView8->AllowUserToDeleteRows = false;
			this->dataGridView8->AllowUserToOrderColumns = true;
			this->dataGridView8->AutoGenerateColumns = false;
			this->dataGridView8->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView8->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->vALUEMARKDataGridViewTextBoxColumn3, 
				this->fULLNAMEDataGridViewTextBoxColumn3, this->dISCNAMEDataGridViewTextBoxColumn2});
			this->dataGridView8->DataSource = this->students_dolgBS;
			this->dataGridView8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView8->Location = System::Drawing::Point(3, 3);
			this->dataGridView8->Name = L"dataGridView8";
			this->dataGridView8->Size = System::Drawing::Size(808, 374);
			this->dataGridView8->TabIndex = 0;
			this->dataGridView8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView8_CellContentClick);
			// 
			// faculty_marksBS
			// 
			this->faculty_marksBS->DataMember = L"GROUPS";
			this->faculty_marksBS->DataSource = this->ds;
			// 
			// oracleConnection1
			// 
			this->oracleConnection1->ConnectionString = L"Data Source=xe;Persist Security Info=True;User ID=dekanat;Password=1;Unicode=True" 
				L"";
			// 
			// oracleSelectCommand1
			// 
			this->oracleSelectCommand1->CommandText = resources->GetString(L"oracleSelectCommand1.CommandText");
			this->oracleSelectCommand1->Connection = this->oracleConnection1;
			// 
			// faculty_marksDA
			// 
			this->faculty_marksDA->SelectCommand = this->oracleSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", L"GROUPNAME")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", 
				L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DATE_MARK", 
				L"DATE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", L"DISCNAME"))};
			this->faculty_marksDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"GROUPS", __mcTemp__1))});
			// 
			// oracleSelectCommand2
			// 
			this->oracleSelectCommand2->CommandText = L"SELECT        COURSE\r\nFROM            VIEW_COURSES";
			this->oracleSelectCommand2->Connection = this->oracleConnection1;
			// 
			// view_coursesDA
			// 
			this->view_coursesDA->SelectCommand = this->oracleSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__2 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(1) {(gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE"))};
			this->view_coursesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"VIEW_COURSES", __mcTemp__2))});
			// 
			// oracleSelectCommand3
			// 
			this->oracleSelectCommand3->CommandText = L"SELECT        COURSE, GROUPNAME, FULLNAME, VALUE_MARK, DATE_MARK, DISCNAME\r\nFROM " 
				L"           VIEW_MARKS";
			this->oracleSelectCommand3->Connection = this->oracleConnection1;
			// 
			// view_marks_facDA
			// 
			this->view_marks_facDA->SelectCommand = this->oracleSelectCommand3;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__3 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", L"GROUPNAME")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", 
				L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DATE_MARK", 
				L"DATE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", L"DISCNAME"))};
			this->view_marks_facDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"VIEW_MARKS", __mcTemp__3))});
			// 
			// oracleSelectCommand4
			// 
			this->oracleSelectCommand4->CommandText = L"SELECT        COURSE, ID_GROUP, GROUPNAME, FULLNAME, VALUE_MARK, DATE_MARK, DISCN" 
				L"AME\r\nFROM            VIEW_MARKS\r\nWHERE        (COURSE = :cid)";
			this->oracleSelectCommand4->Connection = this->oracleConnection1;
			this->oracleSelectCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"cid", 
				System::Data::OracleClient::OracleType::Number, 1, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(1), 
				static_cast<System::Byte>(0), L"COURSE", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// view_marks_courseDA
			// 
			this->view_marks_courseDA->SelectCommand = this->oracleSelectCommand4;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__4 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(7) {(gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE")), (gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", L"ID_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", 
				L"GROUPNAME")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", 
				L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DATE_MARK", L"DATE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", 
				L"DISCNAME"))};
			this->view_marks_courseDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"VIEW_MARKS", __mcTemp__4))});
			// 
			// oracleSelectCommand5
			// 
			this->oracleSelectCommand5->CommandText = L"SELECT        ID_GROUP, get_groupname(NAME_GROUP, COURSE, SUBGROUP) AS GROUPNAME\r" 
				L"\nFROM            \"GROUPS\"\r\nORDER BY GROUPNAME";
			this->oracleSelectCommand5->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand1
			// 
			this->oracleInsertCommand1->CommandText = L"INSERT INTO \"GROUPS\" (\"ID_GROUP\") VALUES (:ID_GROUP)";
			this->oracleInsertCommand1->Connection = this->oracleConnection1;
			this->oracleInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand1
			// 
			this->oracleUpdateCommand1->CommandText = L"UPDATE \"GROUPS\" SET \"ID_GROUP\" = :ID_GROUP WHERE ((\"ID_GROUP\" = :Original_ID_GROU" 
				L"P))";
			this->oracleUpdateCommand1->Connection = this->oracleConnection1;
			this->oracleUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand1
			// 
			this->oracleDeleteCommand1->CommandText = L"DELETE FROM \"GROUPS\" WHERE ((\"ID_GROUP\" = :Original_ID_GROUP))";
			this->oracleDeleteCommand1->Connection = this->oracleConnection1;
			this->oracleDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// groupsDA
			// 
			this->groupsDA->DeleteCommand = this->oracleDeleteCommand1;
			this->groupsDA->InsertCommand = this->oracleInsertCommand1;
			this->groupsDA->SelectCommand = this->oracleSelectCommand5;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__5 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", 
				L"ID_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", L"GROUPNAME"))};
			this->groupsDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"GROUPS", __mcTemp__5))});
			this->groupsDA->UpdateCommand = this->oracleUpdateCommand1;
			// 
			// oracleSelectCommand6
			// 
			this->oracleSelectCommand6->CommandText = L"SELECT        COURSE, FULLNAME, VALUE_MARK, DATE_MARK, DISCNAME, GROUPNAME\r\nFROM " 
				L"           VIEW_MARKS\r\nWHERE        (ID_GROUP = :gid)";
			this->oracleSelectCommand6->Connection = this->oracleConnection1;
			this->oracleSelectCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"gid", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// view_marks_groupDA
			// 
			this->view_marks_groupDA->SelectCommand = this->oracleSelectCommand6;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__6 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", 
				L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DATE_MARK", L"DATE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", 
				L"DISCNAME")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", L"GROUPNAME"))};
			this->view_marks_groupDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"VIEW_MARKS", __mcTemp__6))});
			// 
			// oracleSelectCommand7
			// 
			this->oracleSelectCommand7->CommandText = L"SELECT        ID_TEACHER, get_fullname(LAST_NAME, FIRST_NAME, THIRD_NAME) AS FULL" 
				L"NAME\r\nFROM            TEACHERS\r\nORDER BY FULLNAME";
			this->oracleSelectCommand7->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand2
			// 
			this->oracleInsertCommand2->CommandText = L"INSERT INTO \"TEACHERS\" (\"ID_TEACHER\") VALUES (:ID_TEACHER)";
			this->oracleInsertCommand2->Connection = this->oracleConnection1;
			this->oracleInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand2
			// 
			this->oracleUpdateCommand2->CommandText = L"UPDATE \"TEACHERS\" SET \"ID_TEACHER\" = :ID_TEACHER WHERE ((\"ID_TEACHER\" = :Original" 
				L"_ID_TEACHER))";
			this->oracleUpdateCommand2->Connection = this->oracleConnection1;
			this->oracleUpdateCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand2
			// 
			this->oracleDeleteCommand2->CommandText = L"DELETE FROM \"TEACHERS\" WHERE ((\"ID_TEACHER\" = :Original_ID_TEACHER))";
			this->oracleDeleteCommand2->Connection = this->oracleConnection1;
			this->oracleDeleteCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachersDA
			// 
			this->teachersDA->DeleteCommand = this->oracleDeleteCommand2;
			this->teachersDA->InsertCommand = this->oracleInsertCommand2;
			this->teachersDA->SelectCommand = this->oracleSelectCommand7;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__7 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_TEACHER", 
				L"ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME"))};
			this->teachersDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS", __mcTemp__7))});
			this->teachersDA->UpdateCommand = this->oracleUpdateCommand2;
			// 
			// oracleSelectCommand8
			// 
			this->oracleSelectCommand8->CommandText = resources->GetString(L"oracleSelectCommand8.CommandText");
			this->oracleSelectCommand8->Connection = this->oracleConnection1;
			this->oracleSelectCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"tid", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleInsertCommand3
			// 
			this->oracleInsertCommand3->CommandText = L"INSERT INTO \"DISCIPLINES\" (\"ID_DISCIPLINE\", \"ID_GROUP\") VALUES (:ID_DISCIPLINE, :" 
				L"ID_GROUP)";
			this->oracleInsertCommand3->Connection = this->oracleConnection1;
			this->oracleInsertCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand3
			// 
			this->oracleUpdateCommand3->CommandText = resources->GetString(L"oracleUpdateCommand3.CommandText");
			this->oracleUpdateCommand3->Connection = this->oracleConnection1;
			this->oracleUpdateCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_DISCIPLINE", 
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
			// oracleDeleteCommand3
			// 
			this->oracleDeleteCommand3->CommandText = L"DELETE FROM \"DISCIPLINES\" WHERE ((\"ID_DISCIPLINE\" = :Original_ID_DISCIPLINE) AND " 
				L"((:IsNull_ID_GROUP = 1 AND \"ID_GROUP\" IS NULL) OR (\"ID_GROUP\" = :Original_ID_GRO" 
				L"UP)))";
			this->oracleDeleteCommand3->Connection = this->oracleConnection1;
			this->oracleDeleteCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(3) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_DISCIPLINE", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_ID_GROUP", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"ID_GROUP", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", System::Data::OracleClient::OracleType::Number, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"ID_GROUP", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// disciplinesDA
			// 
			this->disciplinesDA->DeleteCommand = this->oracleDeleteCommand3;
			this->disciplinesDA->InsertCommand = this->oracleInsertCommand3;
			this->disciplinesDA->SelectCommand = this->oracleSelectCommand8;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__8 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"ID_DISCIPLINE", 
				L"ID_DISCIPLINE")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", L"DISCNAME")), (gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", 
				L"ID_GROUP"))};
			this->disciplinesDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"DISCIPLINES", __mcTemp__8))});
			this->disciplinesDA->UpdateCommand = this->oracleUpdateCommand3;
			// 
			// oracleSelectCommand9
			// 
			this->oracleSelectCommand9->CommandText = resources->GetString(L"oracleSelectCommand9.CommandText");
			this->oracleSelectCommand9->Connection = this->oracleConnection1;
			this->oracleSelectCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"did", 
				System::Data::OracleClient::OracleType::Number, 7, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_DISCIPLINE", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"tid", 
				System::Data::OracleClient::OracleType::Number, 7, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand4
			// 
			this->oracleUpdateCommand4->CommandText = L"EXAM_SHEET";
			this->oracleUpdateCommand4->CommandType = System::Data::CommandType::StoredProcedure;
			this->oracleUpdateCommand4->Connection = this->oracleConnection1;
			this->oracleUpdateCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(4) {(gcnew System::Data::OracleClient::OracleParameter(L"IDGR", 
				System::Data::OracleClient::OracleType::Number, 7)), (gcnew System::Data::OracleClient::OracleParameter(L"IDTE", System::Data::OracleClient::OracleType::Number, 
				7)), (gcnew System::Data::OracleClient::OracleParameter(L"IDDI", System::Data::OracleClient::OracleType::Number, 7)), (gcnew System::Data::OracleClient::OracleParameter(L"ERR", 
				System::Data::OracleClient::OracleType::Number, 1, System::Data::ParameterDirection::Output, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// exam_sheetDA
			// 
			this->exam_sheetDA->DeleteCommand = this->oracleDeleteCommand4;
			this->exam_sheetDA->InsertCommand = this->oracleInsertCommand4;
			this->exam_sheetDA->SelectCommand = this->oracleSelectCommand9;
			this->exam_sheetDA->UpdateCommand = this->oracleUpdateCommand4;
			// 
			// oracleSelectCommand10
			// 
			this->oracleSelectCommand10->CommandText = L"SELECT        ID_GROUP, get_groupname(NAME_GROUP, COURSE, SUBGROUP) AS GROUPNAME\r" 
				L"\nFROM            \"GROUPS\"\r\nWHERE COURSE = 5\r\nORDER BY GROUPNAME";
			this->oracleSelectCommand10->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand5
			// 
			this->oracleInsertCommand5->CommandText = L"INSERT INTO \"GROUPS\" (\"ID_GROUP\") VALUES (:ID_GROUP)";
			this->oracleInsertCommand5->Connection = this->oracleConnection1;
			this->oracleInsertCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand5
			// 
			this->oracleUpdateCommand5->CommandText = L"UPDATE \"GROUPS\" SET \"ID_GROUP\" = :ID_GROUP WHERE ((\"ID_GROUP\" = :Original_ID_GROU" 
				L"P))";
			this->oracleUpdateCommand5->Connection = this->oracleConnection1;
			this->oracleUpdateCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand5
			// 
			this->oracleDeleteCommand5->CommandText = L"DELETE FROM \"GROUPS\" WHERE ((\"ID_GROUP\" = :Original_ID_GROUP))";
			this->oracleDeleteCommand5->Connection = this->oracleConnection1;
			this->oracleDeleteCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_GROUP", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// groups_dipDA
			// 
			this->groups_dipDA->DeleteCommand = this->oracleDeleteCommand5;
			this->groups_dipDA->InsertCommand = this->oracleInsertCommand5;
			this->groups_dipDA->SelectCommand = this->oracleSelectCommand10;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__9 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_GROUP", 
				L"ID_GROUP")), (gcnew System::Data::Common::DataColumnMapping(L"GROUPNAME", L"GROUPNAME"))};
			this->groups_dipDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"GROUPS", __mcTemp__9))});
			this->groups_dipDA->UpdateCommand = this->oracleUpdateCommand5;
			this->groups_dipDA->RowUpdated += gcnew System::Data::OracleClient::OracleRowUpdatedEventHandler(this, &Form1::groups_dipDA_RowUpdated);
			// 
			// oracleSelectCommand11
			// 
			this->oracleSelectCommand11->CommandText = L"SELECT        ID_STUDENT, get_fullname(LAST_NAME, FIRST_NAME, THIRD_NAME) AS FULL" 
				L"NAME\r\nFROM            STUDENTS\r\nWHERE        (ID_STATUS = 4) AND (ID_GROUP = :gi" 
				L"d)";
			this->oracleSelectCommand11->Connection = this->oracleConnection1;
			this->oracleSelectCommand11->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"gid", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleInsertCommand6
			// 
			this->oracleInsertCommand6->CommandText = L"INSERT INTO \"STUDENTS\" (\"ID_STUDENT\") VALUES (:ID_STUDENT)";
			this->oracleInsertCommand6->Connection = this->oracleConnection1;
			this->oracleInsertCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// oracleUpdateCommand6
			// 
			this->oracleUpdateCommand6->CommandText = L"UPDATE \"STUDENTS\" SET \"ID_STUDENT\" = :ID_STUDENT WHERE ((\"ID_STUDENT\" = :Original" 
				L"_ID_STUDENT))";
			this->oracleUpdateCommand6->Connection = this->oracleConnection1;
			this->oracleUpdateCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand6
			// 
			this->oracleDeleteCommand6->CommandText = L"DELETE FROM \"STUDENTS\" WHERE ((\"ID_STUDENT\" = :Original_ID_STUDENT))";
			this->oracleDeleteCommand6->Connection = this->oracleConnection1;
			this->oracleDeleteCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_STUDENT", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// students_dipDA
			// 
			this->students_dipDA->DeleteCommand = this->oracleDeleteCommand6;
			this->students_dipDA->InsertCommand = this->oracleInsertCommand6;
			this->students_dipDA->SelectCommand = this->oracleSelectCommand11;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__10 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(2) {(gcnew System::Data::Common::DataColumnMapping(L"ID_STUDENT", 
				L"ID_STUDENT")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME"))};
			this->students_dipDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"STUDENTS", __mcTemp__10))});
			this->students_dipDA->UpdateCommand = this->oracleUpdateCommand6;
			// 
			// oracleSelectCommand12
			// 
			this->oracleSelectCommand12->CommandText = resources->GetString(L"oracleSelectCommand12.CommandText");
			this->oracleSelectCommand12->Connection = this->oracleConnection1;
			this->oracleSelectCommand12->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"sid", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_STUDENT", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"gid", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// marks_dipDA
			// 
			this->marks_dipDA->SelectCommand = this->oracleSelectCommand12;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__11 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", 
				L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"DATE_MARK", L"DATE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", 
				L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", L"DISCNAME"))};
			this->marks_dipDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"MARKS", __mcTemp__11))});
			this->marks_dipDA->RowUpdated += gcnew System::Data::OracleClient::OracleRowUpdatedEventHandler(this, &Form1::marks_dipDA_RowUpdated);
			// 
			// oracleSelectCommand13
			// 
			this->oracleSelectCommand13->CommandText = L"SELECT        ID_GROUP, get_groupname(NAME_GROUP, COURSE, SUBGROUP) AS GROUPNAME\r" 
				L"\nFROM            \"GROUPS\"\r\nORDER BY GROUPNAME";
			this->oracleSelectCommand13->Connection = this->oracleConnection1;
			// 
			// oracleUpdateCommand7
			// 
			this->oracleUpdateCommand7->CommandText = L"TRANS_COURSE";
			this->oracleUpdateCommand7->CommandType = System::Data::CommandType::StoredProcedure;
			this->oracleUpdateCommand7->Connection = this->oracleConnection1;
			this->oracleUpdateCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(2) {(gcnew System::Data::OracleClient::OracleParameter(L"IDG", 
				System::Data::OracleClient::OracleType::Number, 7)), (gcnew System::Data::OracleClient::OracleParameter(L"ERR", System::Data::OracleClient::OracleType::Number, 
				2, System::Data::ParameterDirection::Output, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"", System::Data::DataRowVersion::Current, 
				nullptr))});
			// 
			// groups_transDA
			// 
			this->groups_transDA->DeleteCommand = this->oracleDeleteCommand7;
			this->groups_transDA->InsertCommand = this->oracleInsertCommand7;
			this->groups_transDA->SelectCommand = this->oracleSelectCommand13;
			this->groups_transDA->UpdateCommand = this->oracleUpdateCommand7;
			// 
			// oracleSelectCommand14
			// 
			this->oracleSelectCommand14->CommandText = resources->GetString(L"oracleSelectCommand14.CommandText");
			this->oracleSelectCommand14->Connection = this->oracleConnection1;
			this->oracleSelectCommand14->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(1) {(gcnew System::Data::OracleClient::OracleParameter(L"idg", 
				System::Data::OracleClient::OracleType::Number, 22, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(7), 
				static_cast<System::Byte>(0), L"ID_GROUP", System::Data::DataRowVersion::Current, nullptr))});
			// 
			// students_transDA
			// 
			this->students_transDA->SelectCommand = this->oracleSelectCommand14;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__12 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"ID_STUDENT", 
				L"ID_STUDENT")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"COURSE", 
				L"COURSE"))};
			this->students_transDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"GROUPS", __mcTemp__12))});
			// 
			// bindingSource1
			// 
			this->bindingSource1->DataSource = this->disciplinesBS;
			// 
			// oracleSelectCommand15
			// 
			this->oracleSelectCommand15->CommandText = L"SELECT        TEACHERS.*\r\nFROM            TEACHERS";
			this->oracleSelectCommand15->Connection = this->oracleConnection1;
			// 
			// oracleInsertCommand8
			// 
			this->oracleInsertCommand8->CommandText = L"INSERT INTO \"TEACHERS\" (\"ID_TEACHER\", \"LAST_NAME\", \"FIRST_NAME\", \"THIRD_NAME\", \"P" 
				L"ASSWOD\") VALUES (:ID_TEACHER, :LAST_NAME, :FIRST_NAME, :THIRD_NAME, :PASSWOD)";
			this->oracleInsertCommand8->Connection = this->oracleConnection1;
			this->oracleInsertCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(5) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"LAST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"LAST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"FIRST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"FIRST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"THIRD_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"THIRD_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"PASSWOD", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"PASSWOD"))});
			// 
			// oracleUpdateCommand8
			// 
			this->oracleUpdateCommand8->CommandText = resources->GetString(L"oracleUpdateCommand8.CommandText");
			this->oracleUpdateCommand8->Connection = this->oracleConnection1;
			this->oracleUpdateCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(14) {(gcnew System::Data::OracleClient::OracleParameter(L"ID_TEACHER", 
				System::Data::OracleClient::OracleType::Number, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"ID_TEACHER", System::Data::DataRowVersion::Current, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"LAST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"LAST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"FIRST_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"FIRST_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"THIRD_NAME", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"THIRD_NAME")), (gcnew System::Data::OracleClient::OracleParameter(L"PASSWOD", 
				System::Data::OracleClient::OracleType::VarChar, 0, L"PASSWOD")), (gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
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
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_PASSWOD", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"PASSWOD", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_PASSWOD", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"PASSWOD", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oracleDeleteCommand8
			// 
			this->oracleDeleteCommand8->CommandText = resources->GetString(L"oracleDeleteCommand8.CommandText");
			this->oracleDeleteCommand8->Connection = this->oracleConnection1;
			this->oracleDeleteCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OracleClient::OracleParameter^  >(9) {(gcnew System::Data::OracleClient::OracleParameter(L"Original_ID_TEACHER", 
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
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"IsNull_PASSWOD", 
				System::Data::OracleClient::OracleType::Int32, 0, System::Data::ParameterDirection::Input, L"PASSWOD", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OracleClient::OracleParameter(L"Original_PASSWOD", System::Data::OracleClient::OracleType::VarChar, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"PASSWOD", 
				System::Data::DataRowVersion::Original, nullptr))});
			// 
			// teachers_tDA
			// 
			this->teachers_tDA->DeleteCommand = this->oracleDeleteCommand8;
			this->teachers_tDA->InsertCommand = this->oracleInsertCommand8;
			this->teachers_tDA->SelectCommand = this->oracleSelectCommand15;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__13 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(5) {(gcnew System::Data::Common::DataColumnMapping(L"ID_TEACHER", 
				L"ID_TEACHER")), (gcnew System::Data::Common::DataColumnMapping(L"LAST_NAME", L"LAST_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"FIRST_NAME", 
				L"FIRST_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"THIRD_NAME", L"THIRD_NAME")), (gcnew System::Data::Common::DataColumnMapping(L"PASSWOD", 
				L"PASSWOD"))};
			this->teachers_tDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TEACHERS", __mcTemp__13))});
			this->teachers_tDA->UpdateCommand = this->oracleUpdateCommand8;
			// 
			// oracleSelectCommand16
			// 
			this->oracleSelectCommand16->CommandText = resources->GetString(L"oracleSelectCommand16.CommandText");
			this->oracleSelectCommand16->Connection = this->oracleConnection1;
			// 
			// students_dolgDA
			// 
			this->students_dolgDA->SelectCommand = this->oracleSelectCommand16;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__14 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"VALUE_MARK", 
				L"VALUE_MARK")), (gcnew System::Data::Common::DataColumnMapping(L"FULLNAME", L"FULLNAME")), (gcnew System::Data::Common::DataColumnMapping(L"DISCNAME", 
				L"DISCNAME"))};
			this->students_dolgDA->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"MARKS", __mcTemp__14))});
			// 
			// ds8
			// 
			this->ds8->DataSetName = L"ds8";
			this->ds8->SchemaSerializationMode = System::Data::SchemaSerializationMode::IncludeSchema;
			// 
			// students_dolgBS
			// 
			this->students_dolgBS->DataMember = L"MARKS";
			this->students_dolgBS->DataSource = this->ds8;
			// 
			// vALUEMARKDataGridViewTextBoxColumn3
			// 
			this->vALUEMARKDataGridViewTextBoxColumn3->DataPropertyName = L"VALUE_MARK";
			this->vALUEMARKDataGridViewTextBoxColumn3->HeaderText = L"Оценка";
			this->vALUEMARKDataGridViewTextBoxColumn3->Name = L"vALUEMARKDataGridViewTextBoxColumn3";
			this->vALUEMARKDataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// fULLNAMEDataGridViewTextBoxColumn3
			// 
			this->fULLNAMEDataGridViewTextBoxColumn3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->fULLNAMEDataGridViewTextBoxColumn3->DataPropertyName = L"FULLNAME";
			this->fULLNAMEDataGridViewTextBoxColumn3->HeaderText = L"Студент";
			this->fULLNAMEDataGridViewTextBoxColumn3->Name = L"fULLNAMEDataGridViewTextBoxColumn3";
			this->fULLNAMEDataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dISCNAMEDataGridViewTextBoxColumn2
			// 
			this->dISCNAMEDataGridViewTextBoxColumn2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->dISCNAMEDataGridViewTextBoxColumn2->DataPropertyName = L"DISCNAME";
			this->dISCNAMEDataGridViewTextBoxColumn2->HeaderText = L"Предмет";
			this->dISCNAMEDataGridViewTextBoxColumn2->Name = L"dISCNAMEDataGridViewTextBoxColumn2";
			this->dISCNAMEDataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(822, 409);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Приложение для декана";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_marks_facBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_coursesBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_marks_courseBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groupsBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->view_marks_groupBS))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->disciplinesBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachersBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->exam_sheetBS))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->students_dipBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groups_dipBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->marks_dipBS))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->splitContainer5->Panel1->ResumeLayout(false);
			this->splitContainer5->Panel1->PerformLayout();
			this->splitContainer5->Panel2->ResumeLayout(false);
			this->splitContainer5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->groups_transBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->students_transBS))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->splitContainer6->Panel1->ResumeLayout(false);
			this->splitContainer6->Panel2->ResumeLayout(false);
			this->splitContainer6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->teachers_tBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds7))->EndInit();
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->faculty_marksBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->ds8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->students_dolgBS))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->view_marks_facDA->Fill(this->ds, "VIEW_MARKS_FAC");
				 this->view_coursesDA->Fill(this->ds, "VIEW_COURSES");
				 this->groupsDA->Fill(this->ds3, "GROUPS");
				 this->teachersDA->Fill(this->ds4, "TEACHERS");
				 this->groups_dipDA->Fill(this->ds5, "GROUPS");
				 this->groups_transDA->Fill(this->ds6, "Table");
				 this->teachers_tDA->Fill(this->ds7, "TEACHERS");
				 this->students_dolgDA->Fill(this->ds8, "MARKS");
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds2->VIEW_MARKS_COURSE->Clear();
			 this->view_marks_courseDA->SelectCommand->Parameters["cid"]->Value = this->ds->VIEW_COURSES[this->view_coursesBS->Position]->COURSE;
			 this->view_marks_courseDA->Fill(this->ds2, "VIEW_MARKS_COURSE");
		 }
private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds3->VIEW_MARKS_GROUP->Clear();
			 this->view_marks_groupDA->SelectCommand->Parameters["gid"]->Value = this->ds3->GROUPS[this->groupsBS->Position]->ID_GROUP;
			 this->view_marks_groupDA->Fill(this->ds3, "VIEW_MARKS_GROUP");
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds4->DISCIPLINES->Clear();
			 this->disciplinesDA->SelectCommand->Parameters["tid"]->Value = this->ds4->TEACHERS[this->teachersBS->Position]->ID_TEACHER;
			 this->disciplinesDA->Fill(this->ds4, "DISCIPLINES");

			 this->disciplinesCB->Enabled = true;
			 this->disciplinesBT->Enabled = true;
		 }
private: System::Void disciplinesBT_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->button4->Enabled = true;

			 this->ds4->Table->Clear();
			 this->exam_sheetDA->SelectCommand->Parameters["tid"]->Value = this->ds4->TEACHERS[this->teachersBS->Position]->ID_TEACHER;
			 this->exam_sheetDA->SelectCommand->Parameters["did"]->Value = this->ds4->DISCIPLINES[this->disciplinesBS->Position]->ID_DISCIPLINE;
			 this->exam_sheetDA->Fill(this->ds4, "Table");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->exam_sheetDA->UpdateCommand->Parameters["IDGR"]->Value = this->ds4->DISCIPLINES[this->disciplinesBS->Position]->ID_GROUP;
			 this->exam_sheetDA->UpdateCommand->Parameters["IDTE"]->Value = this->ds4->TEACHERS[this->teachersBS->Position]->ID_TEACHER;
			 this->exam_sheetDA->UpdateCommand->Parameters["IDDI"]->Value = this->ds4->DISCIPLINES[this->disciplinesBS->Position]->ID_DISCIPLINE;
			 this->exam_sheetDA->UpdateCommand->Connection->Open();
			 this->exam_sheetDA->UpdateCommand->ExecuteNonQuery();
			 this->exam_sheetDA->UpdateCommand->Connection->Close();

			 if (Convert::ToInt32(this->exam_sheetDA->UpdateCommand->Parameters["ERR"]->Value) != 0)
			 {
				
				 MessageBox::Show("Что-то пошло не так!\nОшибка № " + 
					 Convert::ToString(this->exam_sheetDA->UpdateCommand->Parameters["ERR"]->Value),
					"Внимание", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

			 }

			 this->ds4->Table->Clear();
			 this->exam_sheetDA->SelectCommand->Parameters["tid"]->Value = this->ds4->TEACHERS[this->teachersBS->Position]->ID_TEACHER;
			 this->exam_sheetDA->SelectCommand->Parameters["did"]->Value = this->ds4->DISCIPLINES[this->disciplinesBS->Position]->ID_DISCIPLINE;
			 this->exam_sheetDA->Fill(this->ds4, "Table");
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds5->STUDENTS->Clear();
			 this->students_dipDA->SelectCommand->Parameters["gid"]->Value = this->ds5->GROUPS[this->groups_dipBS->Position]->ID_GROUP;
			 this->students_dipDA->Fill(this->ds5, "STUDENTS");

			 this->button6->Enabled = true;
			 this->comboBox4->Enabled = true;
		 }
private: System::Void groups_dipDA_RowUpdated(System::Object^  sender, System::Data::OracleClient::OracleRowUpdatedEventArgs^  e) {
		 }
private: System::Void dataGridView4_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds5->MARKS->Clear();
			 this->marks_dipDA->SelectCommand->Parameters["sid"]->Value = this->ds5->STUDENTS[this->students_dipBS->Position]->ID_STUDENT;
			 this->marks_dipDA->SelectCommand->Parameters["gid"]->Value = this->ds5->GROUPS[this->groups_dipBS->Position]->ID_GROUP;
			 this->marks_dipDA->Fill(this->ds5, "MARKS");
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->ds6->GROUPS->Clear();
			 this->groups_transDA->UpdateCommand->Parameters["IDG"]->Value = this->ds6->Table[this->groups_transBS->Position]->ID_GROUP;
			 this->groups_transDA->UpdateCommand->Connection->Open();
			 this->groups_transDA->UpdateCommand->ExecuteNonQuery();
			 this->groups_transDA->UpdateCommand->Connection->Close();
			
			 this->students_transDA->SelectCommand->Parameters["IDG"]->Value = this->ds6->Table[this->groups_transBS->Position]->ID_GROUP;
			 this->students_transDA->Fill(this->ds6, "GROUPS");
		 }
private: System::Void marks_dipDA_RowUpdated(System::Object^  sender, System::Data::OracleClient::OracleRowUpdatedEventArgs^  e) {
		 }
private: System::Void dataGridView7_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				int pos = this->teachers_tBS->Position;
				this->teachers_tDA->Update(this->ds7, "TEACHERS");
				this->ds7->TEACHERS->Clear();
				this->teachers_tDA->Fill(this->ds7, "TEACHERS");
				this->teachers_tBS->Position = pos;
		 }
private: System::Void dataGridView8_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
};
}

