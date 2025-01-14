//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPColorAdjust : NSObject
{
    struct MFPColorMatrix *mColorMatrix;	// 8 = 0x8
    struct MFPColorMatrix *mGrayMatrix;	// 16 = 0x10
    int mColorMatrixFlags;	// 24 = 0x18
    OITSUColor *mTransparentRangeLow;	// 32 = 0x20
    OITSUColor *mTransparentRangeHigh;	// 40 = 0x28
    float mGamma;	// 48 = 0x30
    NSDictionary *mRecolorMap;	// 56 = 0x38
    float mThreshold;	// 64 = 0x40
    _Bool mEnabled;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000036bab1
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000036baa8
- (_Bool)isEnabled;	// IMP=0x000000000036ba9f
- (void)setThreshold:(float)arg1;	// IMP=0x000000000036ba94
- (float)threshold;	// IMP=0x000000000036ba89
- (void)setRecolorMap:(id)arg1;	// IMP=0x000000000036ba78
- (id)recolorMap;	// IMP=0x000000000036ba6a
- (void)setGamma:(float)arg1;	// IMP=0x000000000036ba5f
- (float)gamma;	// IMP=0x000000000036ba54
- (void)setTransparentLow:(id)arg1 high:(id)arg2;	// IMP=0x000000000036b9e8
- (id)transparentHigh;	// IMP=0x000000000036b9da
- (id)transparentLow;	// IMP=0x000000000036b9cc
- (void)setColorMatrixFlags:(int)arg1;	// IMP=0x000000000036b9c3
- (int)colorMatrixFlags;	// IMP=0x000000000036b9ba
- (void)setGrayMatrix:(struct MFPColorMatrix *)arg1;	// IMP=0x000000000036b938
- (struct MFPColorMatrix *)grayMatrix;	// IMP=0x000000000036b92e
- (void)setColorMatrix:(struct MFPColorMatrix *)arg1;	// IMP=0x000000000036b8ac
- (struct MFPColorMatrix *)colorMatrix;	// IMP=0x000000000036b8a2
- (void)dealloc;	// IMP=0x000000000036b841
- (id)init;	// IMP=0x000000000036b7f7

@end

