//
// --------------------------------------------------------------------------------
// :vectors
// --------------------------------------------------------------------------------
//

Vec2F V2F(F32 x, F32 y) {
    Vec2F result = { x, y };
    return result;
}

Vec3F V3F(F32 x, F32 y, F32 z) {
    Vec3F result = { x, y, z };
    return result;
}

Vec4F V4F(F32 x, F32 y, F32 z, F32 w) {
    Vec4F result = { x, y, z, w };
    return result;
}

Vec2F Add_V2F(Vec2F a, Vec2F b) {
    Vec2F result = { a.x + b.x, a.y + b.y };
    return result;
}

Vec3F Add_V3F(Vec3F a, Vec3F b) {
    Vec3F result = { a.x + b.x, a.y + b.y, a.z + b.z };
    return result;
}

Vec4F Add_V4F(Vec4F a, Vec4F b) {
    Vec4F result = { a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w };
    return result;
}

Vec2F Sub_V2F(Vec2F a, Vec2F b) {
    Vec2F result = { a.x - b.x, a.y - b.y };
    return result;
}

Vec3F Sub_V3F(Vec3F a, Vec3F b) {
    Vec3F result = { a.x - b.x, a.y - b.y, a.z - b.z };
    return result;
}

Vec4F Sub_V4F(Vec4F a, Vec4F b) {
    Vec4F result = { a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w };
    return result;
}

Vec2F Mul_V2F(Vec2F a, Vec2F b) {
    Vec2F result = { a.x * b.x, a.y * b.y };
    return result;
}

Vec3F Mul_V3F(Vec3F a, Vec3F b) {
    Vec3F result = { a.x * b.x, a.y * b.y, a.z * b.z };
    return result;
}

Vec4F Mul_V4F(Vec4F a, Vec4F b) {
    Vec4F result = { a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w };
    return result;
}

Vec2F Div_V2F(Vec2F a, Vec2F b) {
    Vec2F result = { a.x / b.x, a.y / b.y };
    return result;
}

Vec3F Div_V3F(Vec3F a, Vec3F b) {
    Vec3F result = { a.x / b.x, a.y / b.y, a.z / b.z };
    return result;
}

Vec4F Div_V4F(Vec4F a, Vec4F b) {
    Vec4F result = { a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w };
    return result;
}

Vec2F Neg_V2F(Vec2F a) {
    Vec2F result = { -a.x, -a.y };
    return result;
}

Vec3F Neg_V3F(Vec3F a) {
    Vec3F result = { -a.x, -a.y, -a.z };
    return result;
}

Vec4F Neg_V4F(Vec4F a) {
    Vec4F result = { -a.x, -a.y, -a.z, -a.w };
    return result;
}

Vec2F Scale_V2F(Vec2F a, F32 b) {
    Vec2F result = { a.x * b, a.y * b };
    return result;
}

Vec3F Scale_V3F(Vec3F a, F32 b) {
    Vec3F result = { a.x * b, a.y * b, a.z * b };
    return result;
}

Vec4F Scale_V4F(Vec4F a, F32 b) {
    Vec4F result = { a.x * b, a.y * b, a.z * b, a.w * b };
    return result;
}
