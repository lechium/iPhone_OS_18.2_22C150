//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC15PhotosUIPrivate27PUVFXDimmingBackgroundLayer
{
    MISSING_TYPE *$__lazy_storage_$_foregroundLayer;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_backgroundLayer;	// 16 = 0x10
    MISSING_TYPE *isThrottled;	// 24 = 0x18
    MISSING_TYPE *isDimmed;	// 25 = 0x19
    MISSING_TYPE *foregroundMask;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_dimmingLayer;	// 40 = 0x28
    MISSING_TYPE *backgroundMask;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_sourceImageLayer;	// 56 = 0x38
    MISSING_TYPE *sourceImage;	// 64 = 0x40
    MISSING_TYPE *blendAnimationDuration;	// 72 = 0x48
    MISSING_TYPE *scannerLayer;	// 80 = 0x50
    MISSING_TYPE *currentBackground;	// 88 = 0x58
    MISSING_TYPE *blendAnimation;	// 96 = 0x60
    MISSING_TYPE *blendImages;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000013f0fe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013f01a
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000013eecc
- (id)init;	// IMP=0x000000000013ed4b
- (void)initialScan;	// IMP=0x000000000013ec03
- (void)scanFrom:(struct CGPoint)arg1;	// IMP=0x000000000013ea5b
- (void)setBackgroundImage:(id)arg1 ctx:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000013e2b1
- (void)setForegroundImage:(id)arg1 ctx:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000013e10c
- (void)setBlendImages:(id)arg1 ctx:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;	// IMP=0x000000000013dc6f
- (void)resetMask;	// IMP=0x000000000013dbe8
- (void)layoutSublayers;	// IMP=0x000000000013d88e
@property(nonatomic, retain) struct CGImage *sourceImage; // @synthesize sourceImage;
@property(nonatomic, retain) struct CGImage *backgroundMask; // @synthesize backgroundMask;
@property(nonatomic, retain) struct CGImage *foregroundMask; // @synthesize foregroundMask;
@property(nonatomic) _Bool isDimmed; // @synthesize isDimmed;
@property(nonatomic) _Bool isThrottled; // @synthesize isThrottled;

@end
