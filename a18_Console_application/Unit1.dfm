object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Application'
  ClientHeight = 231
  ClientWidth = 737
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 47
    Width = 64
    Height = 11
    Caption = 'X-coordinate'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -9
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 78
    Top = 47
    Width = 64
    Height = 11
    Caption = 'Y-coordinate'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -9
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 737
    Height = 41
    Caption = 'The Coordinate system'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 66
    Width = 153
    Height = 120
    ColCount = 2
    FixedCols = 0
    RowCount = 16
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
    TabOrder = 1
    OnGetEditMask = StringGrid1GetEditMask
  end
  object GroupBox1: TGroupBox
    Left = 312
    Top = 47
    Width = 417
    Height = 139
    Caption = 'Results'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    object Label3: TLabel
      Left = 16
      Top = 24
      Width = 144
      Height = 13
      Caption = 'Number of entered points'
    end
    object Label4: TLabel
      Left = 16
      Top = 55
      Width = 255
      Height = 13
      Caption = 'Maximum distance of a point from point (0,0)'
    end
    object Label5: TLabel
      Left = 16
      Top = 88
      Width = 152
      Height = 13
      Caption = 'Number of points in a circle'
    end
    object Label6: TLabel
      Left = 328
      Top = 24
      Width = 3
      Height = 13
    end
    object Label7: TLabel
      Left = 328
      Top = 55
      Width = 3
      Height = 13
    end
    object Label8: TLabel
      Left = 328
      Top = 88
      Width = 3
      Height = 13
    end
  end
  object Button1: TButton
    Left = 167
    Top = 66
    Width = 139
    Height = 25
    Caption = 'number of points'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 167
    Top = 97
    Width = 139
    Height = 25
    Caption = 'maximum distance'
    Enabled = False
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 167
    Top = 128
    Width = 139
    Height = 25
    Caption = 'points in a circle'
    Enabled = False
    TabOrder = 5
    OnClick = Button3Click
  end
  object Edit1: TEdit
    Left = 167
    Top = 159
    Width = 139
    Height = 21
    TabOrder = 6
    OnExit = Edit1Exit
  end
end
