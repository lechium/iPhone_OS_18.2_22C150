//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFPBrush, MFPCustomLineCap;

__attribute__((visibility("hidden")))
@interface MFPPen : NSObject
{
    MFPBrush *mBrush;	// 8 = 0x8
    float mWidth;	// 16 = 0x10
    struct CGAffineTransform mTransform;	// 24 = 0x18
    int mStartCap;	// 72 = 0x48
    int mEndCap;	// 76 = 0x4c
    int mLineJoin;	// 80 = 0x50
    float mMiterLimit;	// 84 = 0x54
    int mDashStyle;	// 88 = 0x58
    int mDashCap;	// 92 = 0x5c
    float mDashOffset;	// 96 = 0x60
    int mDashPatternCount;	// 100 = 0x64
    float *mDashPattern;	// 104 = 0x68
    int mAlignment;	// 112 = 0x70
    int mCompoundArrayCount;	// 116 = 0x74
    float *mCompoundArray;	// 120 = 0x78
    MFPCustomLineCap *mCustomStartCap;	// 128 = 0x80
    MFPCustomLineCap *mCustomEndCap;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000036c52d
- (void)strokePath:(id)arg1;	// IMP=0x000000000036c3f8
- (void)applyDashCapToPath:(id)arg1;	// IMP=0x000000000036c398
- (void)applyLineCapToPath:(id)arg1;	// IMP=0x000000000036c2cc
- (void)applyLineJoinToPath:(id)arg1;	// IMP=0x000000000036c254
- (void)applyDashPatternToPath:(id)arg1;	// IMP=0x000000000036c0b6
- (void)setDashPattern:(const float *)arg1 count:(int)arg2 toPath:(id)arg3;	// IMP=0x000000000036bfdd
- (void)setCustomEndCap:(id)arg1;	// IMP=0x000000000036bfc9
- (id)customEndCap;	// IMP=0x000000000036bfb8
- (void)setCustomStartCap:(id)arg1;	// IMP=0x000000000036bfa7
- (id)customStartCap;	// IMP=0x000000000036bf96
- (void)setCompoundArray:(const float *)arg1 count:(int)arg2;	// IMP=0x000000000036bf40
- (const float *)compoundArray;	// IMP=0x000000000036bf36
- (int)compoundArrayCount;	// IMP=0x000000000036bf2d
- (void)setAlignment:(int)arg1;	// IMP=0x000000000036bf24
- (int)alignment;	// IMP=0x000000000036bf1b
- (void)setDashPattern:(const float *)arg1 count:(int)arg2;	// IMP=0x000000000036bec5
- (const float *)dashPattern;	// IMP=0x000000000036bebb
- (int)dashPatternCount;	// IMP=0x000000000036beb2
- (void)setDashOffset:(float)arg1;	// IMP=0x000000000036bea7
- (float)dashOffset;	// IMP=0x000000000036be9c
- (void)setDashCap:(int)arg1;	// IMP=0x000000000036be93
- (int)dashCap;	// IMP=0x000000000036be8a
- (void)setDashStyle:(int)arg1;	// IMP=0x000000000036be81
- (int)dashStyle;	// IMP=0x000000000036be78
- (void)setMiterLimit:(float)arg1;	// IMP=0x000000000036be6d
- (float)miterLimit;	// IMP=0x000000000036be62
- (void)setLineJoin:(int)arg1;	// IMP=0x000000000036be59
- (int)lineJoin;	// IMP=0x000000000036be50
- (void)setEndCap:(int)arg1;	// IMP=0x000000000036be47
- (int)endCap;	// IMP=0x000000000036be3e
- (void)setStartCap:(int)arg1;	// IMP=0x000000000036be35
- (int)startCap;	// IMP=0x000000000036be2c
- (void)setTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000036be0e
- (struct CGAffineTransform)transform;	// IMP=0x000000000036bdee
- (void)setWidth:(float)arg1;	// IMP=0x000000000036bde3
- (float)width;	// IMP=0x000000000036bdd8
- (void)setBrush:(id)arg1;	// IMP=0x000000000036bdc7
- (id)brush;	// IMP=0x000000000036bdb9
- (void)dealloc;	// IMP=0x000000000036bd58
- (id)init;	// IMP=0x000000000036bcec

@end

