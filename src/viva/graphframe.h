#ifndef __GRAPH_FRAME_H
#define __GRAPH_FRAME_H
#include <wx/wx.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include "basic.h"

class VivaGraph;

class GraphFrame : public BasicFrame
{
public:
  GraphFrame () {;};
  GraphFrame (wxWindow *parent,
              wxWindowID id,
              const wxPoint & pos = wxDefaultPosition,
              const wxSize & size = wxDefaultSize,
              long style = wxDEFAULT_FRAME_STYLE,
              const wxString & name = _T("GraphFrame"));
  ~GraphFrame () {;};
  bool Create(wxWindow* parent,
              wxWindowID id,
              const wxPoint & pos = wxDefaultPosition,
              const wxSize & size = wxDefaultSize,
              long style = wxDEFAULT_FRAME_STYLE,
              const wxString & name = _T("GraphFrame"));
  void setVivaGraph (VivaGraph *vivagraph);

private:
  VivaGraph *vivagraph;

  void OnPaint (wxPaintEvent& event);

  //user interactions
  void leftMouseClicked (wxMouseEvent& event);
  void rightMouseClicked (wxMouseEvent& event);

  //from VivaGraph, and runner
  void OnVivaGraphChanged (wxCommandEvent& event);
  void OnVivaGraphLayoutUpdated (wxCommandEvent& event);
};

BEGIN_DECLARE_EVENT_TYPES()
DECLARE_EVENT_TYPE(VivaGraphChanged, -1)
DECLARE_EVENT_TYPE(VivaGraphLayoutUpdated, -1)
END_DECLARE_EVENT_TYPES()

#include "VivaGraph.h"
#endif
