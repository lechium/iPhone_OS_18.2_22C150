//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/HKSource.h>

@class NSString;

@interface HKSource (HealthDaemon)
+ (_Bool)hd_isSpartanDeviceBundleIdentifier:(id)arg1;	// IMP=0x00100000000b7e00
+ (id)hd_currentDeviceSourceName;	// IMP=0x00100000000b7da9
+ (id)hd_getNameForSource:(id)arg1;	// IMP=0x00100000000b791f
+ (id)hd_sourceForClient:(id)arg1;	// IMP=0x00100000000b77b0
+ (id)createWithCodable:(id)arg1;	// IMP=0x001000000024f788
- (id)codableRepresentationForSync;	// IMP=0x000000000024f69d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

