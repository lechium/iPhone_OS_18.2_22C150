//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class MISSING_TYPE, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIViewMarkerLayer : CALayer
{
    MISSING_TYPE *backgroundLayer;	// 8 = 0x8
    MISSING_TYPE *labelLayer;	// 16 = 0x10
    MISSING_TYPE *label;	// 24 = 0x18
    MISSING_TYPE *alternateColor;	// 40 = 0x28
    MISSING_TYPE *fontSize;	// 48 = 0x30
    MISSING_TYPE *radius;	// 56 = 0x38
    MISSING_TYPE *width;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000023e660
- (void)layoutSublayers;	// IMP=0x000000000023e570
- (id)initWithLayer:(id)arg1;	// IMP=0x000000000023e3b0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023e390
- (id)init;	// IMP=0x000000000023e370
@property(nonatomic, retain) UIColor *alternateColor; // @synthesize alternateColor;
@property(nonatomic, copy) NSString *label;

@end

