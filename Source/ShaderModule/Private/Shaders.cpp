#include "Shaders.h"

IMPLEMENT_SHADER_TYPE(, FCombineShaderPS, TEXT("/ShaderModule/Shaders.usf"), TEXT("CombineMainPS"), SF_Pixel);
IMPLEMENT_SHADER_TYPE(, FUVMaskShaderPS, TEXT("/ShaderModule/Shaders.usf"), TEXT("UVMaskMainPS"), SF_Pixel);