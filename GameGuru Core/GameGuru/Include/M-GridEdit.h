//----------------------------------------------------
//--- GAMEGURU - M-GridEdit
//----------------------------------------------------

#include "cstr.h"

void mapeditorexecutable ( void );
void editor_detect_invalid_screen ( void );
void editor_showhelppage ( int iHelpType );
void editor_showparentalcontrolpage ( void );
void editor_showquickstart ( int iForceMainOpen );
void editor_previewmapormultiplayer ( int iUseVRTest );
void editor_multiplayermode ( void );
void editor_previewmap ( int iUseVRTest );
void input_getfilemapcontrols ( void );
void input_getcontrols ( void );
void input_calculatelocalcursor ( void );
void editor_updatemarkervisibility ( void );
void editor_disableforzoom ( void );
void editor_enableafterzoom ( void );
void editor_init ( void );
void editor_makeundergroundobj ( void );
void editor_undergroundscan ( void );
void editor_restoreentityhighlightobj ( void );
void editor_refreshentitycursor ( void );
void editor_hideall3d ( void );
void editor_restoreeditcamera ( void );
void editor_clearlibrary ( void );
void editor_filllibrary ( void );
//void editor_addEBEtoLibrary ( int iEntityID );
void editor_leftpanelreset ( void );
void editor_filemapdefaultinitfornew ( void );
void editor_filemapinit ( void );
void editor_loadcfg ( void );
void editor_savecfg ( void );
void editor_constructionselection ( void );
void editor_validatestaticmode ( void );
void editor_overallfunctionality ( void );
void editor_refreshcamerarange ( void );
void editor_mainfunctionality ( void );
void editor_forceentityfindfloor ( void );
void editor_viewfunctionality ( void );
void editor_findentityground ( void );
void editor_refresheditmarkers ( void );
void editor_visuals ( void );
void editor_camera ( void );
void editor_undoredoprojectstate ( void );
void editor_cutcopyclearstate ( void );
void editor_undo ( void );
void editor_redo ( void );
void gridedit_showtobjlegend ( void );
void editor_checkIfInSubApp ( void );
void editor_rec_checkifindexinparentchain ( int entityindex, bool* pbPartOfParentChildGroup );
int findentitycursorobj ( int currentlyover );
void gridedit_mapediting ( void );
void gridedit_updatezoomviewvalues ( void );
void gridedit_save_test_map ( void );
void gridedit_save_map ( void );
void gridedit_updatemapbeforeedit ( void );
void gridedit_clear_settings ( void );
void gridedit_clear_configsettings ( void );
void gridedit_clear_map ( void );
void gridedit_new_map ( void );
void gridedit_updatestatusbar ( void );
void gridedit_load_map ( void );
void gridedit_changemodifiedflag ( void );
void gridedit_updateprojectname ( void );
void gridedit_import_ask ( void );
void gridedit_intercept_savefirst ( void );
void gridedit_intercept_savefirst_noreload ( void );
void gridedit_open_map_ask ( void );
void gridedit_new_map_ask ( void );
void gridedit_save_map_ask ( void );
void gridedit_saveas_map ( void );
void gridedit_addentitytomap ( void );
void gridedit_moveentityrubberband ( void );
void gridedit_clearentityrubberbandlist ( void );
void gridedit_addEntityToRubberBandHighlights ( int e );
void gridedit_deleteentityfrommap ( void );
void gridedit_deleteentityrubberbandfrommap ( void );
void gridedit_updateentityobj ( void );
void gridedit_recreateentitycursor ( void );
void gridedit_displayentitycursor ( void );
void gridedit_deletelevelobjects ( void );
void modifyplaneimagestrip ( int objno, int texmax, int texindex );
void interface_openpropertywindow ( void );
void interface_copydatatoentity ( void );
void interface_closepropertywindow ( void );
void interface_handlepropertywindow ( void );
void interface_live_updates ( void );
void startgroup ( char* s_s );
void endgroup ( void );
void setpropertystring2 ( int group, char* data_s, char* field_s, char* desc_s );
void setpropertycolor2 ( int group, int dataval, char* field_s, char* desc_s );
void setpropertyfile2 ( int group, char* data_s, char* field_s, char* desc_s, char* within_s );
void setpropertylist2 ( int group, int controlindex, char* data_s, char* field_s, char* desc_s, int listtype );
void setpropertylist3 ( int group, int controlindex, char* data_s, char* field_s, char* desc_s, int listtype );
void setpropertybase ( int code, char*  s_s );
void setpropertystring ( int group, char* data_s, char* field_s, char* desc_s );
void setpropertycolor ( int group, int dataval, char* field_s, char* desc_s );
void setpropertyfile ( int group, char* data_s, char* field_s, char* desc_s, char* within_s );
int fillgloballistwithweapons ( void );
int fillgloballistwithbehaviours_init ( void );
int fillgloballistwithbehaviours ( void );
void setpropertylist ( int group, int controlindex, char* data_s, char* field_s, char* desc_s, int listtype );
char* getpropertyfield ( int group, int iControl );
char* getpropertydata ( int group, int iControl );
void set_progress_position ( int  item, int  position );
char* get_list_box ( int  item, int  index );
void set_radio_state ( int  item, int  state );
int get_radio_state ( int  item );
void set_edit_item ( int  item, char*  text_s );
char* get_edit_item ( int  item );
void browse ( char*  title_s, char*  directory_s, char*  filter_s );
char* browse_for_folder ( char*  directory_s );
void add_list_item ( int  item, char*  text_s );
char* get_list_item ( int  item, int  index );
void delete_list_item ( int  item, int  index );
void clear_list ( int  item );
void select_list_item ( int  item, int  selectionindex );
int get_list_item_selection ( int  item );
void insert_list_item ( int  item, int  position, char*  text_s );
void add_combo_box ( int  item, char*  text_s );
void add_group ( char*  name_s );
void add_edit_box ( int  group, char*  name_s, char*  contents_s, char*  description_s );
void add_color_picker ( int  group, char*  name_s, char*  contents_s, char*  description_s );
void add_file_picker_ex ( int  group, char*  name_s, char*  contents_s, char*  description_s, char*  dir_s, char*  filter_s, char*  title_s );
void add_file_picker ( int  group, char*  name_s, char*  contents_s, char*  description_s, char*  dir_s );
void add_font_picker ( int  group, char*  name_s, char*  contents_s, char*  description_s );
void add_list_box ( int  group, char*  name_s, char*  contents_s, char*  description_s );
void add_item_to_list_box ( int  group, int  control, char*  item_s );
char* get_control_name ( int  group, int  control );
char* get_control_contents ( int  group, int  control );
char* get_control_description ( int  group, int  control );
void popup_text ( char*  statusbar_s );
void popup_text_change ( char*  statusbar_s );
void checkmemoryforgracefulexit ( void );
int get_cursor_scale_for_obj ( int tObj );
