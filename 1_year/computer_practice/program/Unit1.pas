unit Unit1;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms,
  Dialogs, StdCtrls, CheckLst, ExtCtrls, Buttons, ComCtrls, Grids;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    Memo1: TMemo;
    Label9: TLabel;
    Label8: TLabel;
    Label7: TLabel;
    Label6: TLabel;
    Label5: TLabel;
    Label4: TLabel;
    Label34: TLabel;
    Label33: TLabel;
    Label32: TLabel;
    Label31: TLabel;
    Label30: TLabel;
    Label3: TLabel;
    Label29: TLabel;
    Label28: TLabel;
    Label27: TLabel;
    Label26: TLabel;
    Label25: TLabel;
    Label24: TLabel;
    Label23: TLabel;
    Label22: TLabel;
    Label21: TLabel;
    Label20: TLabel;
    Label2: TLabel;
    Label19: TLabel;
    Label18: TLabel;
    Label17: TLabel;
    Label16: TLabel;
    Label15: TLabel;
    Label14: TLabel;
    Label13: TLabel;
    Label12: TLabel;
    Label11: TLabel;
    Label10: TLabel;
    CheckListBox9: TCheckListBox;
    CheckListBox8: TCheckListBox;
    CheckListBox7: TCheckListBox;
    CheckListBox6: TCheckListBox;
    CheckListBox5: TCheckListBox;
    CheckListBox4: TCheckListBox;
    CheckListBox30: TCheckListBox;
    CheckListBox3: TCheckListBox;
    CheckListBox29: TCheckListBox;
    CheckListBox28: TCheckListBox;
    CheckListBox27: TCheckListBox;
    CheckListBox26: TCheckListBox;
    CheckListBox25: TCheckListBox;
    CheckListBox24: TCheckListBox;
    CheckListBox23: TCheckListBox;
    CheckListBox22: TCheckListBox;
    CheckListBox21: TCheckListBox;
    CheckListBox20: TCheckListBox;
    CheckListBox2: TCheckListBox;
    CheckListBox19: TCheckListBox;
    CheckListBox18: TCheckListBox;
    CheckListBox17: TCheckListBox;
    CheckListBox16: TCheckListBox;
    CheckListBox15: TCheckListBox;
    CheckListBox14: TCheckListBox;
    CheckListBox13: TCheckListBox;
    CheckListBox12: TCheckListBox;
    CheckListBox11: TCheckListBox;
    CheckListBox10: TCheckListBox;
    CheckListBox1: TCheckListBox;
    BitBtn1: TBitBtn;
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    TabSheet2: TTabSheet;
    Label35: TLabel;
    Edit1: TEdit;
    BitBtn2: TBitBtn;
    StringGrid1: TStringGrid;
    Label36: TLabel;
    Label37: TLabel;
    procedure CheckListBox1Click(Sender: TObject);
    procedure BitBtn1Click(Sender: TObject);
    procedure FormResize(Sender: TObject);
    procedure PageControl1Changing(Sender: TObject;
      var AllowChange: Boolean);
    procedure BitBtn2Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;
  edname, checked: boolean;

implementation

{$R *.dfm}

// ����� CPAS, �� ���� ����!!!))
procedure LoadCSVFile (FileName: String; separator: char);
var f: TextFile;
	s1, s2: string;
	i, j, summ, lines: integer;
  List: TStringList;
begin
 i := 1;

 AssignFile (f, FileName);
 Reset(f);

{
 if(FileSize(f) <= 2) then
  begin
    ShowMessage('� � ���������� �� - �����! �������� ���� ������ ;)');
    exit;
  end;
}

lines := 0;

List := TStringList.Create;
try
  List.LoadFromFile(FileName);
  lines := List.Count;
finally
  List.Free;
end;

  if (lines <= 0) then
   begin
     ShowMessage('� � ���������� �� - �����! �������� ���� ������ ;)');
     exit;
    end;
 
 while not eof(f) do
  begin
   readln (f, s1);

   i := i + 1;
   j := 1;

   Form1.StringGrid1.Cells[j-1, i-1] := IntToStr(i-1);

   while pos(separator, s1)<>0 do
	begin
	 s2 := copy(s1,1,pos(separator, s1)-1);
	 j := j + 1;
	 delete (s1, 1, pos(separator, S1));
	 Form1.StringGrid1.Cells[j-1, i-1] := s2;
	end;

   if pos (separator, s1)=0 then
	begin
	 j := j + 1;
	 Form1.StringGrid1.Cells[j-1, i-1] := s1;
	end;

   Form1.StringGrid1.ColCount := j;
   Form1.StringGRid1.RowCount := i+1;

  end;
 CloseFile(f);

 // �������� ���������)
 if Form1.StringGrid1.Cells[0,i] = '' then
  begin
    Form1.StringGrid1.RowCount := Form1.StringGrid1.RowCount-1;
  end;

 summ := 0;
 for i := 1 to Form1.StringGrid1.RowCount-1 do
  begin
    summ := summ + StrToInt(Form1.StringGrid1.Cells[3,i]);
  end;

  summ := Trunc(summ / (Form1.StringGrid1.RowCount-1));

  Form1.Label37.Caption := '������� ����: ' + IntToStr(summ);
end;

function CheckTest(): integer;
var
  ch: integer;
begin
  // ����������, ������)

  ch := 0;
  if (Form1.CheckListBox1.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox2.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox3.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox4.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox5.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox6.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox7.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox8.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox9.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox10.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox11.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox12.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox13.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox14.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox15.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox16.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox17.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox18.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox19.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox20.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox21.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox22.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox23.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox24.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox25.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox26.Checked[1] = TRUE) then inc(ch);
  if (Form1.CheckListBox27.Checked[0] = TRUE) then inc(ch);
  if (Form1.CheckListBox28.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox29.Checked[2] = TRUE) then inc(ch);
  if (Form1.CheckListBox30.Checked[0] = TRUE) then inc(ch);

  Result := ch;
end;

procedure TForm1.CheckListBox1Click(Sender: TObject);
var
  i: integer;
begin

  if (edname = FALSE) then
    begin
      ShowMessage('������� ������ ��� ��� � ������ ������!');
      exit;
    end;

(Sender as TCheckListBox).Checked[(Sender as TCheckListBox).ItemIndex] := True;

 for i:=0 to (Sender as TCheckListBox).Items.Count -1 do
  begin
    if i<> (Sender as TCheckListBox).ItemIndex then
      (Sender as TCheckListBox).Checked[i]:=False;
  end;
end;

// ���� �������� ��������� ������ ���� ���������, ������� ������ ��� ���!
// � �������������� � ������� ��� ���� =)
// ��� SkS.
procedure TForm1.BitBtn1Click(Sender: TObject);
var
  colvo, i: integer;
  bd: TextFile;
begin

  if (edname = FALSE) then
    begin
      ShowMessage('������� ������ ��� ��� � ������ ������!');
      exit;
    end;

  for i := 0 to Form1.ComponentCount - 1 do
    begin
      if Form1.Components[i] is TCheckListBox then
        begin
          if (((Form1.Components[i] as TCheckListBox).Checked[0] = FALSE) AND
              ((Form1.Components[i] as TCheckListBox).Checked[1] = FALSE) AND
              ((Form1.Components[i] as TCheckListBox).Checked[2] = FALSE)) then
                begin
                  Form1.Label32.Caption := '�� ������ �' +
                    copy((Form1.Components[i] as TCheckListBox).Name, 13, 2)
                    + ' �� ���� ������!';

                    exit;
                end;
        end;
    end;


  if (checked = TRUE) then
    begin
      exit;
    end;

  checked := TRUE;

  colvo := CheckTest();

  Form1.Label34.Caption := '���������� �������: ' + IntToStr(colvo);

  AssignFile(bd, 'bdtests.csv');
  Append(bd); // ���� reset, �� I/O error 105: TextFile �� �������� � ��� :)

  Writeln(bd,
    DateToStr(Date) + ' ' + TimeToStr(Time) + ';' +  Form1.Edit1.Text + ';' + IntToStr(colvo)
  );

  CloseFile(bd);




  if (colvo in [0..2]) then
    begin
      // ���, �� ����! :D
      Form1.Label32.Caption := '� ��� ������� ������� ���������� ��������. ' +
        '���� �� � ������� ������ � ������������, �� � �������� �� ����������� ' +
        '��� �� ���������, �� �� ��-�� ��������. ��� �� �����, �������, ��� ��� ' +
        '������� ������ ����� �������� - ����, �������, ��� ��� ����. � ������ ������ ' +
        '�� ������ ���������������� � �������� �� ������� ��������� �����������.';
    end;

  if (colvo in [3..5]) then
    begin
      Form1.Label32.Caption := '�� �� �������� ��������� ����.';
    end;

  if (colvo in [6..13]) then
    begin
      Form1.Label32.Caption := '������� 1: �� ��������� ����, ����� � ������ ������. ' +
        '������� 2: � ��� ���������� �������� ����������� ������. ��� ���������, ������� ' +
        '�������� ��, ����� �������� ������� �������� ������. �� ����� �������� "���������� ' +
        '���������", �������� ��������. ��� ����� ������� �� ������������.';
    end;

  if (colvo in [14..19]) then
    begin
      Form1.Label32.Caption := '������� 1: � ��� �� ������� �������� ������ ���� ' +
        '����, �� ������� ��� ������ �������, � ���������� ������ ������� ������.' +
        '������� 2: ���� ���������� �������� ���������. ���� �� ����������� �������� ' +
        '����������, ��, ������ ��������, ��� ����� ����������. ��� �������� ���������� ' +
        '� ������ ������� �������� ����� ��������, ���� �� ������ ����-�� � ���-�� ������� ' +
        '��� ���-�� ������. ������, ����� ����, �� �� ������ ����������, ���� ���������� ����������.';
    end;

  if (colvo in [20..25]) then
    begin
      Form1.Label32.Caption := '� ��� ������ ������� ���������� ��������. ������ �� ������ ������ ������ ' +
        '� ������������� ��� ���������� �������. ������� �����-������ ����� � ���������� �����������, �� ���������� ' +
        '��������� ��� �� ������. �������� �� ������� ������������� ���� ������, ������ � ��� ������ � ������ ������ ' +
        '�����. �� �����������, �� ������������, ���� ��� ����������: ��������, �� ����.';
    end;

  if (colvo in [26..31]) then
    begin
      Form1.Label32.Caption := '� ��� ������� ������� ���������� ��������. ���� �� � ' +
      '������� ������ � ������������, �� � �������� �� ����������� ��� �� ���������, ' +
      '�� �� ��-�� ��������. ��� �� �����, �������, ��� ��� ������� ������ ����� �������� - ����, �������, ��� ��� ����.';
    end;

end;

procedure TForm1.FormResize(Sender: TObject);
begin
  // �������)) ��� �� ����? � �� ��-�� bsSizable � bsSingle :DD
  Form1.Width := 608;
end;

procedure TForm1.PageControl1Changing(Sender: TObject;
  var AllowChange: Boolean);
begin
  if Form1.PageControl1.TabIndex = 1 then
    begin
      Form1.VertScrollBar.Position := 0;	// �� ���! ��� �� �����?! �� ����������� ����!
      Form1.VertScrollBar.Visible := TRUE;
      Form1.VertScrollBar.Position := 0;
      Form1.PageControl1.Height := 3200;
    end
  else
    begin
//      Form1.Height := 500;
      // ��, ��������)
      Form1.VertScrollBar.Position := 0;
      Form1.VertScrollBar.Visible := FALSE;
      Form1.VertScrollBar.Position := 0;
      Form1.PageControl1.Height := 600;
      LoadCSVFile('bdtests.csv', ';')
    end;

end;

procedure TForm1.BitBtn2Click(Sender: TObject);
begin
  if Form1.Edit1.Text = '' then
    begin
      ShowMessage('������� ������ ��� ��� � ������ ������!');
      edname := FALSE;
    end
  else
    begin
      edname := TRUE;

    end;

end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  // ��������, ������, ���� � ��� ��� ����� =)
  Form1.StringGrid1.ColCount := Form1.StringGrid1.ColCount-1;
  Form1.StringGrid1.RowCount := Form1.StringGrid1.RowCount-2;

  Form1.StringGrid1.Cells[0,0] := '�';
  Form1.StringGrid1.ColWidths[0] := 20;

  Form1.StringGrid1.Cells[1,0] := '����� ������������';
  Form1.StringGrid1.ColWidths[1] := 120;

  Form1.StringGrid1.Cells[2,0] := '��� ��������';
  Form1.StringGrid1.ColWidths[2] := 333;

  Form1.StringGrid1.Cells[3,0] := '���������';
  Form1.StringGrid1.ColWidths[3] := 70;

  edname := FALSE;
  checked := FALSE;
end;


  // �������� ���) �� ������� �������������� �
  // �� ��� ����������� "���������". �� �����
  // ������ ���������� =)
  // �� ����� ������!
end.
