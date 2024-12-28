//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADAdjustedColor
{
    OADColor *mBaseColor;	// 16 = 0x10
    int mAdjustmentType;	// 24 = 0x18
    unsigned char mAdjustmentParam;	// 28 = 0x1c
    _Bool mInvert;	// 29 = 0x1d
    _Bool mInvert128;	// 30 = 0x1e
    _Bool mGray;	// 31 = 0x1f
}

- (void).cxx_destruct;	// IMP=0x0000000000309dbf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000155127
- (unsigned long long)hash;	// IMP=0x00000000001552e7
- (_Bool)gray;	// IMP=0x000000000010beef
- (_Bool)invert128;	// IMP=0x000000000010bf37
- (_Bool)invert;	// IMP=0x000000000010bf27
- (unsigned char)adjustmentParam;	// IMP=0x000000000010bf02
- (int)adjustmentType;	// IMP=0x000000000010bf16
- (id)baseColor;	// IMP=0x000000000010bed9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000309c6a
- (id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(_Bool)arg4 invert128:(_Bool)arg5 gray:(_Bool)arg6;	// IMP=0x000000000010a01d

@end
