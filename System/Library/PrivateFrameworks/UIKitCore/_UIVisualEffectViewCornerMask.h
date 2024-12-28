//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectViewCornerMask : NSObject
{
    UIImage *_image;	// 8 = 0x8
    struct CGRect _imageCenter;	// 16 = 0x10
    unsigned long long _appliedCorners;	// 48 = 0x30
    _Bool _continuous;	// 56 = 0x38
    _Bool _effectsEdges;	// 57 = 0x39
    double _radius;	// 64 = 0x40
}

+ (void)_applyZeroMaskToLayer:(id)arg1;	// IMP=0x00100000003c4153
+ (id)imageCornerMaskWithImage:(id)arg1 radius:(double)arg2;	// IMP=0x00100000003c3d48
+ (id)cornerMaskWithRadius:(double)arg1 continuous:(_Bool)arg2 cornerMask:(unsigned long long)arg3;	// IMP=0x00100000003c3cf7
+ (id)continuousCornerMaskWithRadius:(double)arg1;	// IMP=0x00100000003c3cdb
+ (id)cornerMaskWithRadius:(double)arg1;	// IMP=0x00100000003c3cc2
- (void).cxx_destruct;	// IMP=0x00000000003c4360
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
- (_Bool)_isCornerWithRadius:(double)arg1 continuous:(_Bool)arg2 mask:(unsigned long long)arg3;	// IMP=0x00000000003c432b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003c4210
- (void)_applyToLayer:(id)arg1;	// IMP=0x00000000003c4072
- (id)cornerMaskEffectingEdges:(_Bool)arg1;	// IMP=0x00000000003c4037
- (id)cornerMaskAppliedToCorners:(unsigned long long)arg1;	// IMP=0x00000000003c3ff6
- (id)_clone;	// IMP=0x00000000003c3f8d
@property(readonly, nonatomic) unsigned long long appliedCorners;
- (_Bool)cornersAreContinuous;	// IMP=0x00000000003c3f7a
- (id)init;	// IMP=0x00000000003c3c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c3c69

@end
