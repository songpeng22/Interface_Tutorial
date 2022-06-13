// dllmain.h : Declaration of module class.

class CShapesModule : public CAtlDllModuleT< CShapesModule >
{
public :
	DECLARE_LIBID(LIBID_ShapesLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SHAPES, "{D32D4104-2BBE-4DEB-898D-A2D442FF2476}")
};

extern class CShapesModule _AtlModule;
