// Copyright (c)    2013 Martin Stumpf
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#pragma once
#ifndef HPX_OPENCL_DETAIL_INFO_TYPE_HPP_
#define HPX_OPENCL_DETAIL_INFO_TYPE_HPP_

#include "../cl_headers.hpp"


#include <string>

namespace hpx { namespace opencl { namespace detail {
    
    template<cl_device_info Name> 
    struct device_info
    {
    };

    template<cl_platform_info Name> 
    struct platform_info
    {
    };

    #define HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE(name, ret_type)                  \
    template<> struct device_info<name>                                         \
    {                                                                           \
        public:                                                                 \
            typedef ret_type type;                                              \
    };

    #define HPX_OPENCL_DETAIL_INFO_TYPE_PLATFORM(name, ret_type)                \
    template<> struct platform_info<name>                                       \
    {                                                                           \
        public:                                                                 \
            typedef ret_type type;                                              \
    };

    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_ADDRESS_BITS,                  cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_AVAILABLE,                     cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_COMPILER_AVAILABLE,            cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_DOUBLE_FP_CONFIG,              cl_device_fp_config )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_ENDIAN_LITTLE,                 cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_ERROR_CORRECTION_SUPPORT,      cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_EXECUTION_CAPABILITIES,        cl_device_exec_capabilities )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_EXTENSIONS,                    std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_GLOBAL_MEM_CACHE_SIZE,         cl_ulong )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_GLOBAL_MEM_CACHE_TYPE,         cl_device_mem_cache_type )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_GLOBAL_MEM_CACHELINE_SIZE,     cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_GLOBAL_MEM_SIZE,               cl_ulong )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_HALF_FP_CONFIG,                cl_device_fp_config )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_HOST_UNIFIED_MEMORY,           cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE_SUPPORT,                 cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE2D_MAX_HEIGHT,            std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE2D_MAX_WIDTH,             std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE3D_MAX_DEPTH,             std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE3D_MAX_HEIGHT,            std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE3D_MAX_WIDTH,             std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_LOCAL_MEM_SIZE,                cl_ulong )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_LOCAL_MEM_TYPE,                cl_device_local_mem_type )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_CLOCK_FREQUENCY,           cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_COMPUTE_UNITS,             cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_CONSTANT_ARGS,             cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_CONSTANT_BUFFER_SIZE,      cl_ulong )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_MEM_ALLOC_SIZE,            cl_ulong )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_PARAMETER_SIZE,            std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_READ_IMAGE_ARGS,           cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_SAMPLERS,                  cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_WORK_GROUP_SIZE,           std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_WORK_ITEM_DIMENSIONS,      cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_WORK_ITEM_SIZES,           std::vector<std::size_t> )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MAX_WRITE_IMAGE_ARGS,          cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MEM_BASE_ADDR_ALIGN,           cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_MIN_DATA_TYPE_ALIGN_SIZE,      cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NAME,                          std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_CHAR,      cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_SHORT,     cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_INT,       cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_LONG,      cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_FLOAT,     cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_DOUBLE,    cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_NATIVE_VECTOR_WIDTH_HALF,      cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_OPENCL_C_VERSION,              std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PLATFORM,                      cl_platform_id )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_CHAR,   cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_SHORT,  cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_INT,    cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_LONG,   cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_FLOAT,  cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_DOUBLE, cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_VECTOR_WIDTH_HALF,   cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PROFILE,                       std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PROFILING_TIMER_RESOLUTION,    std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_QUEUE_PROPERTIES,              cl_command_queue_properties )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_SINGLE_FP_CONFIG,              cl_device_fp_config )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_TYPE,                          cl_device_type )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_VENDOR,                        std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_VENDOR_ID,                     cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_VERSION,                       std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DRIVER_VERSION,                       std::string )
    
#ifdef CL_VERSION_1_2
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_BUILT_IN_KERNELS,              std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE_MAX_BUFFER_SIZE,         std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_IMAGE_MAX_ARRAY_SIZE,          std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_LINKER_AVAILABLE,              cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PARENT_DEVICE,                 cl_device_id )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PARTITION_MAX_SUB_DEVICES,     cl_uint )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PARTITION_PROPERTIES,          std::vector<cl_device_partition_property> )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PARTITION_AFFINITY_DOMAIN,     cl_device_affinity_domain )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PARTITION_TYPE,                std::vector<cl_device_partition_property> )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PRINTF_BUFFER_SIZE,            std::size_t )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_PREFERRED_INTEROP_USER_SYNC,   cl_bool )
    HPX_OPENCL_DETAIL_INFO_TYPE_DEVICE( CL_DEVICE_REFERENCE_COUNT,               cl_uint )
#endif

    HPX_OPENCL_DETAIL_INFO_TYPE_PLATFORM( CL_PLATFORM_PROFILE,    std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_PLATFORM( CL_PLATFORM_VERSION,    std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_PLATFORM( CL_PLATFORM_NAME,       std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_PLATFORM( CL_PLATFORM_VENDOR,     std::string )
    HPX_OPENCL_DETAIL_INFO_TYPE_PLATFORM( CL_PLATFORM_EXTENSIONS, std::string )

}}}

#endif //HPX_OPENCL_DETAIL_INFO_TYPE_HPP_

