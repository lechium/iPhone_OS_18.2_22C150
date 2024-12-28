//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessory.h>

@class NSNumber;

@interface HMAccessory (Announce)
+ (id)appleAnnounceHostAccessoriesFromAccessories:(id)arg1;	// IMP=0x0020000000065c90
+ (id)appleAnnounceAccessoriesFromAccessories:(id)arg1;	// IMP=0x0020000000065c50
+ (id)announceAccessoriesWithAnnounceEnabledFromAccessories:(id)arg1;	// IMP=0x0020000000065bc0
+ (id)announceAccessoriesFromAccessories:(id)arg1;	// IMP=0x0020000000065b10
+ (id)accessoriesWithAnnounceEnabledFromAccessories:(id)arg1;	// IMP=0x0020000000065ad0
@property(readonly, nonatomic) NSNumber *an_announceSettingFromAccessorySettings;
@property(nonatomic, readonly) _Bool an_isAppleAnnounceHostAccessory;
@property(nonatomic, readonly) _Bool an_isAppleAnnounceAccessory;
@property(nonatomic, readonly) _Bool an_supportsAnnounce;
@property(nonatomic, readonly) _Bool an_isAnnounceEnabled;
@end
