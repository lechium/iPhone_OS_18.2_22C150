//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _TtC14ScreenTimeCore26STDeviceActivityDataSource : NSObject
{
}

+ (_Bool)hasDataForUserWithAltDSID:(id)arg1 userDeviceStates:(id)arg2;	// IMP=0x004000000009e6b0
+ (void)downloadRemoteData;	// IMP=0x004000000009e5b0
+ (void)refreshAndUploadLocalDataSinceDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000009e360
+ (id)lastUpdatedDateFor:(id)arg1;	// IMP=0x004000000009df20
+ (id)totalWeeklyUsageDuringDateInterval:(id)arg1 userAltDSID:(id)arg2 error:(id *)arg3;	// IMP=0x004000000009d770
+ (void)setGenesisDate:(id)arg1;	// IMP=0x004000000009ca00
+ (id)allLocallyUsedBundleIdentifiers;	// IMP=0x004000000009c9a0
+ (id)deviceIdentifiersByUserAltDSID;	// IMP=0x004000000009c830
- (void).cxx_destruct;	// IMP=0x000000000009f4d0
- (id)init;	// IMP=0x000000000009f470

@end
