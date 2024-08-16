#if !defined(MATHS_H_)
#define MATHS_H_

//
// --------------------------------------------------------------------------------
// :vectors
// --------------------------------------------------------------------------------
//

typedef union Vec2F Vec2F;
union Vec2F {
    struct {
        F32 x, y;
    };

    struct {
        F32 u, v;
    };

    struct {
        F32 w, h;
    };

    F32 e[2];
};


typedef union Vec3F Vec3F;
union Vec3F {
    struct {
        F32 x, y, z;
    };

    struct {
        F32 r, g, b;
    };

    struct {
        F32 w, h, d;
    };

    struct {
        Vec2F xy;
        F32   _z;
    };

    struct {
        F32   _x;
        Vec2F yz;
    };

    F32 e[3];
};

typedef union Vec4F Vec4F;
union Vec4F {
    struct {
        F32 x, y, z, w;
    };

    struct {
        F32 r, g, b, a;
    };

    struct {
        Vec3F xyz;
        F32   _w;
    };

    struct {
        F32   _x;
        Vec3F yzw;
    };

    struct {
        Vec2F xy;
        Vec2F zw;
    };

    F32 e[4];
};

#define V2Fv(v) (v).x, (v).y
#define V3Fv(v) (v).x, (v).y, (v).z
#define V4Fv(v) (v).x, (v).y, (v).z, (v).w

inline Vec2F V2F(F32 x, F32 y);
inline Vec3F V3F(F32 x, F32 y, F32 z);
inline Vec4F V4F(F32 x, F32 y, F32 z, F32 w);

// ------------------------------
// vector operators
//

inline Vec2F Add_V2F(Vec2F a, Vec2F b);
inline Vec3F Add_V3F(Vec3F a, Vec3F b);
inline Vec4F Add_V4F(Vec4F a, Vec4F b);

inline Vec2F Sub_V2F(Vec2F a, Vec2F b);
inline Vec3F Sub_V3F(Vec3F a, Vec3F b);
inline Vec4F Sub_V4F(Vec4F a, Vec4F b);

inline Vec2F Mul_V2F(Vec2F a, Vec2F b);
inline Vec3F Mul_V3F(Vec3F a, Vec3F b);
inline Vec4F Mul_V4F(Vec4F a, Vec4F b);

inline Vec2F Div_V2F(Vec2F a, Vec2F b);
inline Vec3F Div_V3F(Vec3F a, Vec3F b);
inline Vec4F Div_V4F(Vec4F a, Vec4F b);

inline Vec2F Neg_V2F(Vec2F a);
inline Vec3F Neg_V3F(Vec3F a);
inline Vec4F Neg_V4F(Vec4F a);

inline Vec2F Scale_V2F(Vec2F a, F32 b);
inline Vec3F Scale_V3F(Vec3F a, F32 b);
inline Vec4F Scale_V4F(Vec4F a, F32 b);

#endif  // MATHS_H_
