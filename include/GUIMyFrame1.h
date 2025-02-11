#pragma once
#include "GUI.h"
#include "TinyEXIF.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <wx/filedlg.h>
#include <wx/dcbuffer.h>
#include <wx/dir.h>

class GUIMyFrame1 : public MyFrame1
{
	// wxBitmap variables hold the image and the exif data
	wxBitmap bitmapexif,bitmapphoto;
	// vector holds the exif data
	std::vector<wxImage> images;
	// s holds exif data, path holds the path to the image, dire holds the path to the directory
	wxString s,path,dire;
	// bool variable checks if the image is full screen
	bool exp=false;
	
	protected:
		// void method destroys all the objects in the vector
		void MainFormClose( wxCloseEvent& event );
		// void method repaints the panel
		void WxPanel_Repaint( wxUpdateUIEvent& event );
		// void method loads the image
		void m_button1_click( wxCommandEvent& event );
		// void method saves the image
		void m_button2_click( wxCommandEvent& event );
		// void method loads the exif data
		void m_button3_click( wxCommandEvent& event );
		// void method loads the comments
		void m_button4_click( wxCommandEvent& event );
		// void method makes image full screen
		void m_panel_2lclick( wxMouseEvent& event );
		// void method makes image back to normal size
		void m_panel_1lclick( wxMouseEvent& event );
		// void method draws the exif data
		void DrawExif(wxDC& dc);
		// void method draws the image
		void DrawBitmap(wxDC& dc);
		// void method repaints
		void Repaint();

    public:

    	GUIMyFrame1( wxWindow* parent );
    	~GUIMyFrame1();
};


