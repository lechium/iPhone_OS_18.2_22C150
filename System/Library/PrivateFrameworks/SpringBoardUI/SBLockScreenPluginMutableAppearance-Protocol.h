//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBLockScreenPluginAppearance-Protocol.h>

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>
@property(nonatomic) struct CGRect presentationRegion;
@property(retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property(copy, nonatomic) NSArray *elementOverrides;
@property(nonatomic) long long notificationBehavior;
@property(nonatomic) long long presentationStyle;
@property(nonatomic) long long backgroundStyle;
@property(nonatomic) unsigned long long restrictedCapabilities;
@property(nonatomic, getter=isHidden) _Bool hidden;
@end
