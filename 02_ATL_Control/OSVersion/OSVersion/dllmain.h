// dllmain.h : Declaration of module class.

class COSVersionModule : public CAtlDllModuleT< COSVersionModule >
{
public :
	DECLARE_LIBID(LIBID_OSVersionLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_OSVERSION, "{DA84E174-75D5-4F4C-9AFD-51D6C5995A58}")
};

extern class COSVersionModule _AtlModule;
