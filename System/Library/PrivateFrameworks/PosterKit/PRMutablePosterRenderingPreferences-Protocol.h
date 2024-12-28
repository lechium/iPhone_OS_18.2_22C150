//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PRMutablePosterPreferences-Protocol.h>

@class NSDate, PRPosterLegibilitySettings, UIColor;

@protocol PRMutablePosterRenderingPreferences <PRMutablePosterPreferences>
@property(nonatomic) _Bool hideDimmingLayer;
@property(nonatomic) _Bool hideChrome;
@property(nonatomic) _Bool userTapEventsRequested;
@property(retain, nonatomic) NSDate *nextWakeDate;
@property(nonatomic) unsigned long long significantEventTime;
@property(nonatomic) _Bool handlesWakeAnimation;
@property(nonatomic) unsigned long long significantEventOptions;
@property(retain, nonatomic) PRPosterLegibilitySettings *desiredLegibilitySettings;
@property(retain, nonatomic) UIColor *preferredProminentColor;
@property(retain, nonatomic) UIColor *averageColor;
@end
