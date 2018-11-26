#version 400

layout(origin_upper_left) in vec4 gl_FragCoord;

out vec3 colour;

uniform sampler2D fontTex;
uniform sampler2D foreTex;
uniform sampler2D backTex;
uniform sampler2D asciiTex;

uniform vec2 uFontRes;
uniform vec2 uResolution;

void calcCoords(in vec2 fxy, out int x, out int y, out int cx, out int cy)
{
    cx = int(fxy.x) / int(uFontRes.x);
    cy = int(fxy.y) / int(uFontRes.y);
    x = int(fxy.x) % int(uFontRes.x);
    y = int(fxy.y) % int(uFontRes.y);
}

vec2 calcTextureCoords(in int x, in int y, in int w, in int h)
{
    return (vec2(float(x), float(y)) + vec2(0.5, 0.5)) / vec2(float(w), float(h));
}

void main()
{
    int x, y, cx, cy;

    // (cx, cy) is the character coords, (x, y) is the internal coords in the character space.
    calcCoords(gl_FragCoord.xy, x, y, cx, cy);

    // Calculate p which is the tex coords into the fore, back and ascii textures.
    vec2 screenChars = uResolution / uFontRes;
    vec2 p = calcTextureCoords(cx, cy, int(screenChars.x), int(screenChars.y));

    // Look up the textures and obtain the RGBA info
    vec4 fore = texture(foreTex, p);
    vec4 back = texture(backTex, p);
    vec4 text = texture(asciiTex, p);

    int c = int(text.x * 255.0);

    // (fx, fy) is the character coords in the font texture
    int fx = c % 16;
    int fy = c / 16;

    // (lx, ly) is the pixel coords in the font texture
    int lx = fx * int(uFontRes.x) + x;
    int ly = fy * int(uFontRes.y) + y;

    // Calculate the texture coords in the font texture.  We expect the font texture to be 16*16 characters.
    vec2 pixXY = calcTextureCoords(lx, ly, int(uFontRes.x) * 16, int(uFontRes.y) * 16);
    vec4 charPixel = texture(fontTex, pixXY);

    if (charPixel.r < 0.5)
    {
        colour = back.rgb;
    }
    else
    {
        colour = fore.rgb;
    }
}

