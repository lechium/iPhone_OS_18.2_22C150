//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HFGroupableItemProtocol-Protocol.h>
#import <HomeUI/HFHomeKitObject-Protocol.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HMHome, HMSettings, NSSet;

@protocol HFHomeKitSettingsVendor <HFHomeKitObject, HFGroupableItemProtocol>
@property(readonly, nonatomic) NSSet *homekitObjectIdentifiers;
@property(readonly) HMSettings *settings;
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property(readonly, nonatomic) HMHome *hf_home;
@end

