<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.Button1 = New System.Windows.Forms.Button
        Me.AxOSInfoControl1 = New AxOSVersionLib.AxOSInfoControl
        CType(Me.AxOSInfoControl1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(45, 189)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(180, 59)
        Me.Button1.TabIndex = 0
        Me.Button1.Text = "Button1"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'AxOSInfoControl1
        '
        Me.AxOSInfoControl1.Enabled = True
        Me.AxOSInfoControl1.Location = New System.Drawing.Point(15, 12)
        Me.AxOSInfoControl1.Name = "AxOSInfoControl1"
        Me.AxOSInfoControl1.OcxState = CType(resources.GetObject("AxOSInfoControl1.OcxState"), System.Windows.Forms.AxHost.State)
        Me.AxOSInfoControl1.Size = New System.Drawing.Size(223, 120)
        Me.AxOSInfoControl1.TabIndex = 1
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.AxOSInfoControl1)
        Me.Controls.Add(Me.Button1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        CType(Me.AxOSInfoControl1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents AxOSInfoControl1 As AxOSVersionLib.AxOSInfoControl

End Class
