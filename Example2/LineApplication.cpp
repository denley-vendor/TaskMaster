// Dependencies -------------------------------------------------------
#include "LineApplication.h"

#include "MainFrm.h"
#include "LineApplicationDoc.h"
#include "LineApplicationView.h"
#include "LineApplicationFactory.h"
// END Dependencies ---------------------------------------------------

// Global Symbols -----------------------------------------------------
GraphicFactory* GgraphicFactoryProto = new LineApplicationFactory;
LineApplicationApp theApp;
// --------------------------------------------------------------------

BEGIN_MESSAGE_MAP(LineApplicationApp, CWinApp)
    ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
    ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()


LineApplicationApp::LineApplicationApp()
{}

LineApplicationApp::~LineApplicationApp()
{}


BOOL LineApplicationApp::InitInstance()
{
    LoadStdProfileSettings(); 

    CSingleDocTemplate* pDocTemplate;
    pDocTemplate = new CSingleDocTemplate(
        IDR_MAINFRAME,
        RUNTIME_CLASS(LineApplicationDoc),
        RUNTIME_CLASS(MainFrame),            // main SDI frame window
        RUNTIME_CLASS(LineApplicationView));
    AddDocTemplate(pDocTemplate);


    // Parse command line for standard shell commands, DDE, file open
    CCommandLineInfo cmdInfo;
    ParseCommandLine(cmdInfo);

    // Dispatch commands specified on the command line
    if (!ProcessShellCommand(cmdInfo))
        return FALSE;

    return TRUE;
}

