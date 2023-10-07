/**
    This code is based on the glslang_c_interface implementation by Viktor Latypov
**/

/**
BSD 2-Clause License

Copyright (c) 2019, Viktor Latypov
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**/

#ifndef C_SHADER_TYPES_H_INCLUDED
#define C_SHADER_TYPES_H_INCLUDED

#define LAST_ELEMENT_MARKER(x) x

/* EShLanguage counterpart */
typedef enum {
    GLSLANG_STAGE_VERTEX,
    GLSLANG_STAGE_TESSCONTROL,
    GLSLANG_STAGE_TESSEVALUATION,
    GLSLANG_STAGE_GEOMETRY,
    GLSLANG_STAGE_FRAGMENT,
    GLSLANG_STAGE_COMPUTE,
    GLSLANG_STAGE_RAYGEN,
    GLSLANG_STAGE_RAYGEN_NV = GLSLANG_STAGE_RAYGEN,
    GLSLANG_STAGE_INTERSECT,
    GLSLANG_STAGE_INTERSECT_NV = GLSLANG_STAGE_INTERSECT,
    GLSLANG_STAGE_ANYHIT,
    GLSLANG_STAGE_ANYHIT_NV = GLSLANG_STAGE_ANYHIT,
    GLSLANG_STAGE_CLOSESTHIT,
    GLSLANG_STAGE_CLOSESTHIT_NV = GLSLANG_STAGE_CLOSESTHIT,
    GLSLANG_STAGE_MISS,
    GLSLANG_STAGE_MISS_NV = GLSLANG_STAGE_MISS,
    GLSLANG_STAGE_CALLABLE,
    GLSLANG_STAGE_CALLABLE_NV = GLSLANG_STAGE_CALLABLE,
    GLSLANG_STAGE_TASK,
    GLSLANG_STAGE_TASK_NV = GLSLANG_STAGE_TASK,
    GLSLANG_STAGE_MESH,
    GLSLANG_STAGE_MESH_NV = GLSLANG_STAGE_MESH,
    LAST_ELEMENT_MARKER(GLSLANG_STAGE_COUNT),
} glslang_stage_t; // would be better as stage, but this is ancient now

/* EShLanguageMask counterpart */
typedef enum {
    GLSLANG_STAGE_VERTEX_MASK = (1 << GLSLANG_STAGE_VERTEX),
    GLSLANG_STAGE_TESSCONTROL_MASK = (1 << GLSLANG_STAGE_TESSCONTROL),
    GLSLANG_STAGE_TESSEVALUATION_MASK = (1 << GLSLANG_STAGE_TESSEVALUATION),
    GLSLANG_STAGE_GEOMETRY_MASK = (1 << GLSLANG_STAGE_GEOMETRY),
    GLSLANG_STAGE_FRAGMENT_MASK = (1 << GLSLANG_STAGE_FRAGMENT),
    GLSLANG_STAGE_COMPUTE_MASK = (1 << GLSLANG_STAGE_COMPUTE),
    GLSLANG_STAGE_RAYGEN_MASK = (1 << GLSLANG_STAGE_RAYGEN),
    GLSLANG_STAGE_RAYGEN_NV_MASK = GLSLANG_STAGE_RAYGEN_MASK,
    GLSLANG_STAGE_INTERSECT_MASK = (1 << GLSLANG_STAGE_INTERSECT),
    GLSLANG_STAGE_INTERSECT_NV_MASK = GLSLANG_STAGE_INTERSECT_MASK,
    GLSLANG_STAGE_ANYHIT_MASK = (1 << GLSLANG_STAGE_ANYHIT),
    GLSLANG_STAGE_ANYHIT_NV_MASK = GLSLANG_STAGE_ANYHIT_MASK,
    GLSLANG_STAGE_CLOSESTHIT_MASK = (1 << GLSLANG_STAGE_CLOSESTHIT),
    GLSLANG_STAGE_CLOSESTHIT_NV_MASK = GLSLANG_STAGE_CLOSESTHIT_MASK,
    GLSLANG_STAGE_MISS_MASK = (1 << GLSLANG_STAGE_MISS),
    GLSLANG_STAGE_MISS_NV_MASK = GLSLANG_STAGE_MISS_MASK,
    GLSLANG_STAGE_CALLABLE_MASK = (1 << GLSLANG_STAGE_CALLABLE),
    GLSLANG_STAGE_CALLABLE_NV_MASK = GLSLANG_STAGE_CALLABLE_MASK,
    GLSLANG_STAGE_TASK_MASK = (1 << GLSLANG_STAGE_TASK),
    GLSLANG_STAGE_TASK_NV_MASK = GLSLANG_STAGE_TASK_MASK,
    GLSLANG_STAGE_MESH_MASK = (1 << GLSLANG_STAGE_MESH),
    GLSLANG_STAGE_MESH_NV_MASK = GLSLANG_STAGE_MESH_MASK,
    LAST_ELEMENT_MARKER(GLSLANG_STAGE_MASK_COUNT),
} glslang_stage_mask_t;

/* EShSource counterpart */
typedef enum {
    GLSLANG_SOURCE_NONE,
    GLSLANG_SOURCE_GLSL,
    GLSLANG_SOURCE_HLSL,
    LAST_ELEMENT_MARKER(GLSLANG_SOURCE_COUNT),
} glslang_source_t;

/* EShClient counterpart */
typedef enum {
    GLSLANG_CLIENT_NONE,
    GLSLANG_CLIENT_VULKAN,
    GLSLANG_CLIENT_OPENGL,
    LAST_ELEMENT_MARKER(GLSLANG_CLIENT_COUNT),
} glslang_client_t;

/* EShTargetLanguage counterpart */
typedef enum {
    GLSLANG_TARGET_NONE,
    GLSLANG_TARGET_SPV,
    LAST_ELEMENT_MARKER(GLSLANG_TARGET_COUNT),
} glslang_target_language_t;

/* SH_TARGET_ClientVersion counterpart */
typedef enum {
    GLSLANG_TARGET_VULKAN_1_0 = (1 << 22),
    GLSLANG_TARGET_VULKAN_1_1 = (1 << 22) | (1 << 12),
    GLSLANG_TARGET_VULKAN_1_2 = (1 << 22) | (2 << 12),
    GLSLANG_TARGET_VULKAN_1_3 = (1 << 22) | (3 << 12),
    GLSLANG_TARGET_OPENGL_450 = 450,
    LAST_ELEMENT_MARKER(GLSLANG_TARGET_CLIENT_VERSION_COUNT = 5),
} glslang_target_client_version_t;

/* SH_TARGET_LanguageVersion counterpart */
typedef enum {
    GLSLANG_TARGET_SPV_1_0 = (1 << 16),
    GLSLANG_TARGET_SPV_1_1 = (1 << 16) | (1 << 8),
    GLSLANG_TARGET_SPV_1_2 = (1 << 16) | (2 << 8),
    GLSLANG_TARGET_SPV_1_3 = (1 << 16) | (3 << 8),
    GLSLANG_TARGET_SPV_1_4 = (1 << 16) | (4 << 8),
    GLSLANG_TARGET_SPV_1_5 = (1 << 16) | (5 << 8),
    GLSLANG_TARGET_SPV_1_6 = (1 << 16) | (6 << 8),
    LAST_ELEMENT_MARKER(GLSLANG_TARGET_LANGUAGE_VERSION_COUNT = 7),
} glslang_target_language_version_t;

/* EShExecutable counterpart */
typedef enum { GLSLANG_EX_VERTEX_FRAGMENT, GLSLANG_EX_FRAGMENT } glslang_executable_t;

// EShOptimizationLevel counterpart
// This enum is not used in the current C interface, but could be added at a later date.
// GLSLANG_OPT_NONE is the current default.
typedef enum {
    GLSLANG_OPT_NO_GENERATION,
    GLSLANG_OPT_NONE,
    GLSLANG_OPT_SIMPLE,
    GLSLANG_OPT_FULL,
    LAST_ELEMENT_MARKER(GLSLANG_OPT_LEVEL_COUNT),
} glslang_optimization_level_t;

/* EShTextureSamplerTransformMode counterpart */
typedef enum {
    GLSLANG_TEX_SAMP_TRANS_KEEP,
    GLSLANG_TEX_SAMP_TRANS_UPGRADE_TEXTURE_REMOVE_SAMPLER,
    LAST_ELEMENT_MARKER(GLSLANG_TEX_SAMP_TRANS_COUNT),
} glslang_texture_sampler_transform_mode_t;

/* EShMessages counterpart */
typedef enum {
    GLSLANG_MSG_DEFAULT_BIT = 0,
    GLSLANG_MSG_RELAXED_ERRORS_BIT = (1 << 0),
    GLSLANG_MSG_SUPPRESS_WARNINGS_BIT = (1 << 1),
    GLSLANG_MSG_AST_BIT = (1 << 2),
    GLSLANG_MSG_SPV_RULES_BIT = (1 << 3),
    GLSLANG_MSG_VULKAN_RULES_BIT = (1 << 4),
    GLSLANG_MSG_ONLY_PREPROCESSOR_BIT = (1 << 5),
    GLSLANG_MSG_READ_HLSL_BIT = (1 << 6),
    GLSLANG_MSG_CASCADING_ERRORS_BIT = (1 << 7),
    GLSLANG_MSG_KEEP_UNCALLED_BIT = (1 << 8),
    GLSLANG_MSG_HLSL_OFFSETS_BIT = (1 << 9),
    GLSLANG_MSG_DEBUG_INFO_BIT = (1 << 10),
    GLSLANG_MSG_HLSL_ENABLE_16BIT_TYPES_BIT = (1 << 11),
    GLSLANG_MSG_HLSL_LEGALIZATION_BIT = (1 << 12),
    GLSLANG_MSG_HLSL_DX9_COMPATIBLE_BIT = (1 << 13),
    GLSLANG_MSG_BUILTIN_SYMBOL_TABLE_BIT = (1 << 14),
    GLSLANG_MSG_ENHANCED = (1 << 15),
    LAST_ELEMENT_MARKER(GLSLANG_MSG_COUNT),
} glslang_messages_t;

/* EShReflectionOptions counterpart */
typedef enum {
    GLSLANG_REFLECTION_DEFAULT_BIT = 0,
    GLSLANG_REFLECTION_STRICT_ARRAY_SUFFIX_BIT = (1 << 0),
    GLSLANG_REFLECTION_BASIC_ARRAY_SUFFIX_BIT = (1 << 1),
    GLSLANG_REFLECTION_INTERMEDIATE_IOO_BIT = (1 << 2),
    GLSLANG_REFLECTION_SEPARATE_BUFFERS_BIT = (1 << 3),
    GLSLANG_REFLECTION_ALL_BLOCK_VARIABLES_BIT = (1 << 4),
    GLSLANG_REFLECTION_UNWRAP_IO_BLOCKS_BIT = (1 << 5),
    GLSLANG_REFLECTION_ALL_IO_VARIABLES_BIT = (1 << 6),
    GLSLANG_REFLECTION_SHARED_STD140_SSBO_BIT = (1 << 7),
    GLSLANG_REFLECTION_SHARED_STD140_UBO_BIT = (1 << 8),
    LAST_ELEMENT_MARKER(GLSLANG_REFLECTION_COUNT),
} glslang_reflection_options_t;

/* EProfile counterpart (from Versions.h) */
typedef enum {
    GLSLANG_BAD_PROFILE = 0,
    GLSLANG_NO_PROFILE = (1 << 0),
    GLSLANG_CORE_PROFILE = (1 << 1),
    GLSLANG_COMPATIBILITY_PROFILE = (1 << 2),
    GLSLANG_ES_PROFILE = (1 << 3),
    LAST_ELEMENT_MARKER(GLSLANG_PROFILE_COUNT),
} glslang_profile_t;

/* Shader options */
typedef enum {
    GLSLANG_SHADER_DEFAULT_BIT = 0,
    GLSLANG_SHADER_AUTO_MAP_BINDINGS = (1 << 0),
    GLSLANG_SHADER_AUTO_MAP_LOCATIONS = (1 << 1),
    GLSLANG_SHADER_VULKAN_RULES_RELAXED = (1 << 2),
    LAST_ELEMENT_MARKER(GLSLANG_SHADER_COUNT),
} glslang_shader_options_t;

/* TResourceType counterpart */
typedef enum {
    GLSLANG_RESOURCE_TYPE_SAMPLER,
    GLSLANG_RESOURCE_TYPE_TEXTURE,
    GLSLANG_RESOURCE_TYPE_IMAGE,
    GLSLANG_RESOURCE_TYPE_UBO,
    GLSLANG_RESOURCE_TYPE_SSBO,
    GLSLANG_RESOURCE_TYPE_UAV,
    LAST_ELEMENT_MARKER(GLSLANG_RESOURCE_TYPE_COUNT),
} glslang_resource_type_t;

#undef LAST_ELEMENT_MARKER

#endif
