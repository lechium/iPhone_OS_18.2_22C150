//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBilateralGridHash : NSObject
{
    int _n_dims;	// 8 = 0x8
    int _width;	// 12 = 0xc
    int _height;	// 16 = 0x10
    int _sigma_s;	// 20 = 0x14
    int _sigma_r_luma;	// 24 = 0x18
    int _sigma_r_chroma;	// 28 = 0x1c
    unsigned long long _max_hash_table_size;	// 32 = 0x20
    unsigned int _hash_table_size;	// 40 = 0x28
    struct BGHashMapContext *_hash_map;	// 48 = 0x30
    struct {
        union {
            unsigned long long _field1;
            unsigned char _field2[8];
        } _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
    } *_hash_table;	// 56 = 0x38
    unsigned int *_hash_matrix_data;	// 64 = 0x40
    unsigned int *_blur_indices;	// 72 = 0x48
    unsigned int *_coord_indices;	// 80 = 0x50
    unsigned int *_coord_table;	// 88 = 0x58
    unsigned int *_coord_indices_off;	// 96 = 0x60
    unsigned int *_interp_indices;	// 104 = 0x68
    unsigned int *_interp_table;	// 112 = 0x70
    char *_interp_pad;	// 120 = 0x78
}

- (int)_addHashKeyAtX:(int)arg1 Y:(int)arg2 key:(unsigned long long)arg3 isKeyExist:(_Bool *)arg4;	// IMP=0x00000000000118ad
- (void)_hashMapAddKey:(unsigned long long)arg1 andValue:(unsigned int)arg2;	// IMP=0x000000000001189a
- (_Bool)_hashMapFindKey:(unsigned long long)arg1 to:(unsigned int *)arg2;	// IMP=0x0000000000011886
- (void)_computeInterpIndices;	// IMP=0x00000000000117b7
- (void)_computeCoordIndices;	// IMP=0x00000000000116a8
- (void)_computeBlurIndices;	// IMP=0x0000000000011546
- (int)_computeBilateralSpaceYCC444:(struct __IOSurface *)arg1 region:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6;	// IMP=0x0000000000010e89
- (const char *)interp_pad;	// IMP=0x0000000000010e7f
- (const unsigned int *)interp_table;	// IMP=0x0000000000010e75
- (const unsigned int *)interp_indices;	// IMP=0x0000000000010e6b
- (const unsigned int *)coord_table;	// IMP=0x0000000000010e61
- (const unsigned int *)coord_indices;	// IMP=0x0000000000010e57
- (const unsigned int *)blur_table;	// IMP=0x0000000000010e4d
- (const unsigned int *)hash_matrix;	// IMP=0x0000000000010e43
- (const void *)hash_table;	// IMP=0x0000000000010e39
- (const unsigned int *)blur_indices:(int)arg1 n_blur_indices:(int *)arg2;	// IMP=0x0000000000010e03
- (void)blur_n:(float *)arg1;	// IMP=0x0000000000010dbc
- (void)blur_ones:(float *)arg1;	// IMP=0x0000000000010d75
- (void)splat_ones:(float *)arg1;	// IMP=0x0000000000010d2e
- (void)normalize_blur:(const float *)arg1 pout:(float *)arg2;	// IMP=0x0000000000010cd1
- (void)normalize:(const float *)arg1 pout:(float *)arg2;	// IMP=0x0000000000010c74
- (void)blur:(const float *)arg1 pout:(float *)arg2;	// IMP=0x0000000000010bb1
- (void)slice_trilinear:(struct __IOSurface *)arg1 pin:(const float *)arg2 pout:(struct __CVBuffer *)arg3;	// IMP=0x0000000000010981
- (void)slice:(const float *)arg1 outPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000108b9
- (void)splat_w_mul_x:(struct __CVBuffer *)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 pout:(float *)arg3;	// IMP=0x000000000001077e
- (void)splat:(struct __CVBuffer *)arg1 pout:(float *)arg2;	// IMP=0x000000000001068c
- (int)createWithSurface:(struct __IOSurface *)arg1 region:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6;	// IMP=0x0000000000010558
- (int)_createWithSurface:(struct __IOSurface *)arg1 region:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6;	// IMP=0x0000000000010484
- (void)clear;	// IMP=0x0000000000010466
- (void)dealloc;	// IMP=0x00000000000103db
- (id)initWithWidth:(int)arg1 height:(int)arg2 maxHashTableSize:(unsigned long long)arg3;	// IMP=0x0000000000010273
- (int)sigma_r_chroma;	// IMP=0x000000000001026a
- (int)sigma_r_luma;	// IMP=0x0000000000010261
- (int)sigma_s;	// IMP=0x0000000000010258
- (int)height;	// IMP=0x000000000001024f
- (int)width;	// IMP=0x0000000000010246
- (int)countDims;	// IMP=0x000000000001023d
- (int)countVertices;	// IMP=0x0000000000010234

@end

