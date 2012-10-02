#ifndef __IOPENCV_ENGINE_H__
#define __IOPENCV_ENGINE_H__

#include <binder/IInterface.h>
#include <binder/Parcel.h>
#include <utils/String16.h>

// OpenCV Manager package name
#define OPENCV_ENGINE_PACKAGE "org.opencv.engine"
// Class name of OpenCV engine binder object. Is needned for connection to service
#define OPECV_ENGINE_CLASSNAME "org.opencv.engine.OpenCVEngineInterface"

enum EngineMethonID
{
    OCVE_GET_ENGINE_VERSION = 1,
    OCVE_GET_LIB_PATH_BY_VERSION = 2,
    OCVE_INSTALL_VERSION = 3,
    OCVE_GET_LIB_LIST = 4,
};

using namespace android;

class IOpenCVEngine: public android::IInterface
{
public:
       
    DECLARE_META_INTERFACE(OpenCVEngine)

public:
    virtual int GetVersion() = 0;
    virtual android::String16 GetLibPathByVersion(android::String16 version) = 0;
    virtual android::String16 GetLibraryList(android::String16 version) = 0;
    virtual bool InstallVersion(android::String16 version) = 0; 
};

#endif