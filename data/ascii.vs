#version 400

layout(location = 0) in vec2 v;		// 2D coords in [-1, +1]

out vec2 texCoord;

void main()
{
	vec2 vv = vec2(v.x, -v.y);
	gl_Position.xy = vv;
	gl_Position.zw = vec2(0.0, 1.0);
}

