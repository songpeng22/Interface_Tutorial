Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim str As String
        AxOSInfoControl1.GetOSInfo(str)
        Debug.Print(str)

    End Sub
End Class
