//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CABasicAnimation, MISSING_TYPE, UIViewPropertyAnimator;

@interface _TtC8SearchUI31SearchUISpringAnimationSettings : NSObject
{
    MISSING_TYPE *bounce;	// 8 = 0x8
    MISSING_TYPE *perceptualDuration;	// 16 = 0x10
    MISSING_TYPE *delay;	// 24 = 0x18
}

+ (id)buttonIconAppear;	// IMP=0x0010000000110060
+ (id)buttonSelectionCancel;	// IMP=0x001000000010ff60
+ (id)buttonSelection;	// IMP=0x001000000010fe40
- (id)init;	// IMP=0x0000000000110800
@property(nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property(nonatomic, readonly) CABasicAnimation *coreAnimation;
@property(nonatomic) double delay; // @synthesize delay;
@property(nonatomic) double perceptualDuration; // @synthesize perceptualDuration;
@property(nonatomic) double bounce; // @synthesize bounce;

@end
