//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    EDString *mString;	// 16 = 0x10
    unsigned long long mContentFormatId;	// 24 = 0x18
    int mPosition;	// 32 = 0x20
    _Bool mShowLeaderLines;	// 36 = 0x24
    _Bool mShowCategoryName;	// 37 = 0x25
    _Bool mShowSeriesName;	// 38 = 0x26
    _Bool mShowPercent;	// 39 = 0x27
    _Bool mShowBubbleSize;	// 40 = 0x28
    _Bool mShowValue;	// 41 = 0x29
    _Bool mShowLegendKey;	// 42 = 0x2a
    _Bool mIsPositionAffineTransform;	// 43 = 0x2b
    _Bool mContentFormatDerived;	// 44 = 0x2c
    _Bool mDeleted;	// 45 = 0x2d
    _Bool mExtensionDetected;	// 46 = 0x2e
    double mRotation;	// 48 = 0x30
    OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
    OADGraphicProperties *mLeaderlineGraphicProperties;	// 64 = 0x40
}

+ (id)dataLabelWithResources:(id)arg1;	// IMP=0x006000000018a38a
- (void).cxx_destruct;	// IMP=0x000000000038de12
@property(retain, nonatomic) EDString *string; // @synthesize string=mString;
- (void)setRotationAngle:(double)arg1;	// IMP=0x00000000001ead94
- (double)rotationAngle;	// IMP=0x000000000038ddfd
- (_Bool)isPositionAffineTransform;	// IMP=0x0000000000242417
- (void)setIsPositionAffineTransform:(_Bool)arg1;	// IMP=0x0000000000242420
- (void)setLeaderlineGraphicProperties:(id)arg1;	// IMP=0x000000000038ddb9
- (id)leaderlineGraphicProperties;	// IMP=0x000000000038ddab
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000018a4ac
- (id)graphicProperties;	// IMP=0x000000000038dd9d
- (_Bool)isCustomLabelBlockingVisibility;	// IMP=0x000000000038dc5d
- (void)setExtensionDetected:(_Bool)arg1;	// IMP=0x000000000038dc54
- (_Bool)isLabelVisible;	// IMP=0x000000000038dc24
- (_Bool)isExtensionDetected;	// IMP=0x000000000038dc1b
- (void)setDeleted:(_Bool)arg1;	// IMP=0x000000000038dc12
- (_Bool)isDeleted;	// IMP=0x000000000038dc09
- (void)setShowLegendKey:(_Bool)arg1;	// IMP=0x00000000001eacdb
- (_Bool)isShowLegendKey;	// IMP=0x000000000024240e
- (void)setShowValue:(_Bool)arg1;	// IMP=0x000000000018a4a3
- (_Bool)isShowValue;	// IMP=0x00000000001edd7e
- (void)setShowBubbleSize:(_Bool)arg1;	// IMP=0x000000000038dc00
- (_Bool)isShowBubbleSize;	// IMP=0x000000000038dbf7
- (void)setShowPercent:(_Bool)arg1;	// IMP=0x000000000018a49a
- (_Bool)isShowPercent;	// IMP=0x00000000002423f3
- (void)setShowSeriesName:(_Bool)arg1;	// IMP=0x00000000001eace4
- (_Bool)isShowSeriesName;	// IMP=0x0000000000242405
- (void)setShowCategoryName:(_Bool)arg1;	// IMP=0x000000000018a491
- (_Bool)isShowCategoryName;	// IMP=0x00000000002423fc
- (void)setShowLeaderLines:(_Bool)arg1;	// IMP=0x000000000018a488
- (_Bool)hasLeaderLinesGraphics;	// IMP=0x000000000038dbe9
- (_Bool)isShowLeaderLines;	// IMP=0x000000000038dbe0
- (void)setPosition:(int)arg1;	// IMP=0x00000000001eacfe
- (int)position;	// IMP=0x00000000002423ea
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;	// IMP=0x000000000038dbd7
- (_Bool)isContentFormatDerivedFromDataPoints;	// IMP=0x000000000038dbce
- (void)setContentFormat:(id)arg1;	// IMP=0x0000000000241306
- (id)contentFormat;	// IMP=0x000000000038db35
- (id)initWithResources:(id)arg1;	// IMP=0x000000000018a3ef
- (id)description;	// IMP=0x000000000038de58
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x000000000022f9e6
- (unsigned long long)contentFormatId;	// IMP=0x000000000038de4e

@end
