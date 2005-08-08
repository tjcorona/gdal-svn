/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.25
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

/*
  +----------------------------------------------------------------------+
  | PHP version 4.0                                                      |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997, 1998, 1999, 2000, 2001 The PHP Group             |
  +----------------------------------------------------------------------+
  | This source file is subject to version 2.02 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available at through the world-wide-web at                           |
  | http://www.php.net/license/2_02.txt.                                 |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Authors:                                                             |
  |                                                                      |
  +----------------------------------------------------------------------+
 */


#ifndef PHP_GDAL_H
#define PHP_GDAL_H

extern zend_module_entry gdal_module_entry;
#define phpext_gdal_ptr &gdal_module_entry

#ifdef PHP_WIN32
# define PHP_GDAL_API __declspec(dllexport)
#else
# define PHP_GDAL_API
#endif

PHP_MINIT_FUNCTION(gdal);
PHP_MSHUTDOWN_FUNCTION(gdal);
PHP_RINIT_FUNCTION(gdal);
PHP_RSHUTDOWN_FUNCTION(gdal);
PHP_MINFO_FUNCTION(gdal);

ZEND_NAMED_FUNCTION(_wrap_Debug);
ZEND_NAMED_FUNCTION(_wrap_Error);
ZEND_NAMED_FUNCTION(_wrap_PushErrorHandler);
ZEND_NAMED_FUNCTION(_wrap_PopErrorHandler);
ZEND_NAMED_FUNCTION(_wrap_ErrorReset);
ZEND_NAMED_FUNCTION(_wrap_GetLastErrorNo);
ZEND_NAMED_FUNCTION(_wrap_GetLastErrorType);
ZEND_NAMED_FUNCTION(_wrap_GetLastErrorMsg);
ZEND_NAMED_FUNCTION(_wrap_PushFinderLocation);
ZEND_NAMED_FUNCTION(_wrap_PopFinderLocation);
ZEND_NAMED_FUNCTION(_wrap_FinderClean);
ZEND_NAMED_FUNCTION(_wrap_FindFile);
ZEND_NAMED_FUNCTION(_wrap_SetConfigOption);
ZEND_NAMED_FUNCTION(_wrap_GetConfigOption);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_GetDescription);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_GetDescription);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_SetDescription);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_SetDescription);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_GetMetadata_Dict);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_GetMetadata_Dict);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_GetMetadata_List);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_GetMetadata_List);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_SetMetadata);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_SetMetadata);
ZEND_NAMED_FUNCTION(_wrap_MajorObject_SetMetadata);
ZEND_NAMED_FUNCTION(_wrap_Driver_Create);
ZEND_NAMED_FUNCTION(_wrap_Driver_Create);
ZEND_NAMED_FUNCTION(_wrap_Driver_CreateCopy);
ZEND_NAMED_FUNCTION(_wrap_Driver_CreateCopy);
ZEND_NAMED_FUNCTION(_wrap_Driver_Delete);
ZEND_NAMED_FUNCTION(_wrap_Driver_Delete);
ZEND_NAMED_FUNCTION(_wrap_new_GCP);
ZEND_NAMED_FUNCTION(_wrap_new_GCP);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPX_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPX_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPY_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPY_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPZ_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPZ_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPPixel_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPPixel_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPLine_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_GCPLine_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_Info_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_Info_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_Id_get);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_Id_set);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_GCPX);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_GCPX);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_GCPY);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_GCPY);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_GCPZ);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_GCPZ);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_GCPPixel);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_GCPPixel);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_GCPLine);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_GCPLine);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_Info);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_Info);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_get_Id);
ZEND_NAMED_FUNCTION(_wrap_GDAL_GCP_set_Id);
ZEND_NAMED_FUNCTION(_wrap_GCPsToGeoTransform);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetDriver);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetDriver);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetRasterBand);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetRasterBand);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetProjection);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetProjection);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetProjectionRef);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetProjectionRef);
ZEND_NAMED_FUNCTION(_wrap_Dataset_SetProjection);
ZEND_NAMED_FUNCTION(_wrap_Dataset_SetProjection);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGeoTransform);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGeoTransform);
ZEND_NAMED_FUNCTION(_wrap_Dataset_SetGeoTransform);
ZEND_NAMED_FUNCTION(_wrap_Dataset_SetGeoTransform);
ZEND_NAMED_FUNCTION(_wrap_Dataset_BuildOverviews);
ZEND_NAMED_FUNCTION(_wrap_Dataset_BuildOverviews);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGCPCount);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGCPCount);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGCPProjection);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGCPProjection);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGCPs);
ZEND_NAMED_FUNCTION(_wrap_Dataset_GetGCPs);
ZEND_NAMED_FUNCTION(_wrap_Dataset_SetGCPs);
ZEND_NAMED_FUNCTION(_wrap_Dataset_SetGCPs);
ZEND_NAMED_FUNCTION(_wrap_Dataset_FlushCache);
ZEND_NAMED_FUNCTION(_wrap_Dataset_FlushCache);
ZEND_NAMED_FUNCTION(_wrap_Dataset_AddBand);
ZEND_NAMED_FUNCTION(_wrap_Dataset_AddBand);
ZEND_NAMED_FUNCTION(_wrap_Dataset_WriteRaster);
ZEND_NAMED_FUNCTION(_wrap_Dataset_WriteRaster);
ZEND_NAMED_FUNCTION(_wrap_Band_GetRasterColorInterpretation);
ZEND_NAMED_FUNCTION(_wrap_Band_GetRasterColorInterpretation);
ZEND_NAMED_FUNCTION(_wrap_Band_SetRasterColorInterpretation);
ZEND_NAMED_FUNCTION(_wrap_Band_SetRasterColorInterpretation);
ZEND_NAMED_FUNCTION(_wrap_Band_GetNoDataValue);
ZEND_NAMED_FUNCTION(_wrap_Band_GetNoDataValue);
ZEND_NAMED_FUNCTION(_wrap_Band_SetNoDataValue);
ZEND_NAMED_FUNCTION(_wrap_Band_SetNoDataValue);
ZEND_NAMED_FUNCTION(_wrap_Band_GetMinimum);
ZEND_NAMED_FUNCTION(_wrap_Band_GetMinimum);
ZEND_NAMED_FUNCTION(_wrap_Band_GetMaximum);
ZEND_NAMED_FUNCTION(_wrap_Band_GetMaximum);
ZEND_NAMED_FUNCTION(_wrap_Band_GetOffset);
ZEND_NAMED_FUNCTION(_wrap_Band_GetOffset);
ZEND_NAMED_FUNCTION(_wrap_Band_GetScale);
ZEND_NAMED_FUNCTION(_wrap_Band_GetScale);
ZEND_NAMED_FUNCTION(_wrap_Band_GetOverviewCount);
ZEND_NAMED_FUNCTION(_wrap_Band_GetOverviewCount);
ZEND_NAMED_FUNCTION(_wrap_Band_GetOverview);
ZEND_NAMED_FUNCTION(_wrap_Band_GetOverview);
ZEND_NAMED_FUNCTION(_wrap_Band_Checksum);
ZEND_NAMED_FUNCTION(_wrap_Band_Checksum);
ZEND_NAMED_FUNCTION(_wrap_Band_ComputeRasterMinMax);
ZEND_NAMED_FUNCTION(_wrap_Band_ComputeRasterMinMax);
ZEND_NAMED_FUNCTION(_wrap_Band_Fill);
ZEND_NAMED_FUNCTION(_wrap_Band_Fill);
ZEND_NAMED_FUNCTION(_wrap_Band_ReadRaster);
ZEND_NAMED_FUNCTION(_wrap_Band_ReadRaster);
ZEND_NAMED_FUNCTION(_wrap_Band_WriteRaster);
ZEND_NAMED_FUNCTION(_wrap_Band_WriteRaster);
ZEND_NAMED_FUNCTION(_wrap_Band_FlushCache);
ZEND_NAMED_FUNCTION(_wrap_Band_FlushCache);
ZEND_NAMED_FUNCTION(_wrap_Band_GetRasterColorTable);
ZEND_NAMED_FUNCTION(_wrap_Band_GetRasterColorTable);
ZEND_NAMED_FUNCTION(_wrap_Band_SetRasterColorTable);
ZEND_NAMED_FUNCTION(_wrap_Band_SetRasterColorTable);
ZEND_NAMED_FUNCTION(_wrap_new_ColorTable);
ZEND_NAMED_FUNCTION(_wrap_new_ColorTable);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_Clone);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_Clone);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetPaletteInterpretation);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetPaletteInterpretation);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetCount);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetCount);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetColorEntry);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetColorEntry);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetColorEntryAsRGB);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_GetColorEntryAsRGB);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_SetColorEntry);
ZEND_NAMED_FUNCTION(_wrap_ColorTable_SetColorEntry);
ZEND_NAMED_FUNCTION(_wrap_AllRegister);
ZEND_NAMED_FUNCTION(_wrap_GetCacheMax);
ZEND_NAMED_FUNCTION(_wrap_SetCacheMax);
ZEND_NAMED_FUNCTION(_wrap_GetCacheUsed);
ZEND_NAMED_FUNCTION(_wrap_GetDataTypeSize);
ZEND_NAMED_FUNCTION(_wrap_DataTypeIsComplex);
ZEND_NAMED_FUNCTION(_wrap_GetDataTypeName);
ZEND_NAMED_FUNCTION(_wrap_GetDataTypeByName);
ZEND_NAMED_FUNCTION(_wrap_GetColorInterpretationName);
ZEND_NAMED_FUNCTION(_wrap_GetPaletteInterpretationName);
ZEND_NAMED_FUNCTION(_wrap_DecToDMS);
ZEND_NAMED_FUNCTION(_wrap_PackedDMSToDec);
ZEND_NAMED_FUNCTION(_wrap_DecToPackedDMS);
ZEND_NAMED_FUNCTION(_wrap_GetDriverCount);
ZEND_NAMED_FUNCTION(_wrap_GetDriverByName);
ZEND_NAMED_FUNCTION(_wrap_Open);
ZEND_NAMED_FUNCTION(_wrap_OpenShared);
ZEND_NAMED_FUNCTION(_wrap_AutoCreateWarpedVRT);
#endif /* PHP_GDAL_H */
