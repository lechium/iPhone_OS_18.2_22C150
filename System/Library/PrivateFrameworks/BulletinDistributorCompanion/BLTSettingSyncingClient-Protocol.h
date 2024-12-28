//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinDistributorCompanion/BLTSettingSyncing-Protocol.h>

@class BLTPBSectionInfo, NSDate, NSSet, NSString;

@protocol BLTSettingSyncingClient <BLTSettingSyncing>
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(NSDate *)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(NSString *)arg2 mirror:(_Bool)arg3 fromRemote:(_Bool)arg4;
- (void)setSectionInfo:(BLTPBSectionInfo *)arg1 keypaths:(NSSet *)arg2 completion:(void (^)(void))arg3;
@end
