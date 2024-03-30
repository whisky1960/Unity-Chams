//by whsky1960 
#ifndef chams_h
#define chams_h



Color team1_color()
{
    return {1, 0.847059, 0.407843, 1};
}


int do_chams()
{

    void* shader = Shader$$Find(il2cpp_string_new("Hidden/Internal-Colored")); 

    Material$$set_shader(material, shader);
    Material$$SetInt(material, il2cpp_string_new("_SrcBlend"), 0);
    Material$$SetInt(material, il2cpp_string_new("_DstBlend"), 0);
    Material$$SetInt(material, il2cpp_string_new("_Cull"), 1);
    Material$$SetInt(material, il2cpp_string_new("_ZWrite"), 0);
    Material$$SetInt(material, il2cpp_string_new("_ZTest"), 0); 
    Material$$SetInt(material, il2cpp_string_new("_ZBias"), 0);
    Material$$SetColor(material, il2cpp_string_new("_Color"), team1_color());
    Material$$SetFloat(material, il2cpp_string_new("_Shininess"), 255.f);
    Material$$SetFloat(material, il2cpp_string_new("_Glossiness"), 255.f); 
    
   return 0;
}

#endif 
