//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterUIFoundation/NSObject-Protocol.h>

@class NSString, PUIStyleColor;

@protocol PUIStyleColorPickerColor <NSObject>
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) PUIStyleColor *rightSliderColor;
@property(readonly, nonatomic) PUIStyleColor *leftSliderColor;
@property(readonly, copy, nonatomic) PUIStyleColor *baseColor;
@property(readonly, nonatomic) double initialVariation;
@property(readonly) _Bool isVibrantColor;
@property(readonly) _Bool isCustomColor;
- (PUIStyleColor *)displayColorWithVariation:(double)arg1;
- (PUIStyleColor *)colorWithVariation:(double)arg1;
@end
