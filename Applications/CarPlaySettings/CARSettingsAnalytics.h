//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CARSettingsAnalytics : NSObject
{
}

+ (_Bool)shouldSendAnalyticsEvents;	// IMP=0x004000000001b63b
+ (id)sharedInstance;	// IMP=0x001000000001b5b6
- (id)_dictionaryRepresentationWithVehicle:(id)arg1 session:(id)arg2;	// IMP=0x004000000001bb45
- (id)_analyticsEventNameForEvent:(unsigned long long)arg1;	// IMP=0x001000000001bac3
- (void)sendEvent:(unsigned long long)arg1 withParameters:(id)arg2;	// IMP=0x001000000001b9c2
- (void)axSoundRecognitionChangedForVehicle:(id)arg1 session:(id)arg2;	// IMP=0x001000000001b8e5
- (void)axColorFiltersPrefChangedForVehicle:(id)arg1 session:(id)arg2;	// IMP=0x001000000001b808
- (void)axBoldTextPrefChangedForVehicle:(id)arg1 session:(id)arg2;	// IMP=0x001000000001b70f
- (void)axVoiceControlPrefChanged:(_Bool)arg1 forVehicle:(id)arg2 session:(id)arg3;	// IMP=0x001000000001b643

@end
