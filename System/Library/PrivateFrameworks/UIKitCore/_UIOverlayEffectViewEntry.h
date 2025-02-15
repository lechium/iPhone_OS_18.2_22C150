//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectViewEntry.h"

@class NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry
{
    NSString *_filterType;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
}

+ (id)newEntryWithFilterType:(id)arg1 image:(id)arg2 alpha:(double)arg3;	// IMP=0x00600000003b4e2d
+ (id)newEntryWithFilterType:(id)arg1 color:(id)arg2 alpha:(double)arg3;	// IMP=0x00600000003b4d3e
- (void).cxx_destruct;	// IMP=0x00000000003b52e8
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *filterType; // @synthesize filterType=_filterType;
- (id)description;	// IMP=0x00000000003b51ce
- (_Bool)canTransitionToEffect:(id)arg1;	// IMP=0x00000000003b5172
- (void)removeEffectFromView:(id)arg1;	// IMP=0x00000000003b5092
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000003b507a
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x00000000003b5059
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000003b4f68

@end

