//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class BLTPBBulletinSummary, NSSet, NSString;

@protocol BLTBulletinDistributorSubscriberDeviceDelegate <NSObject>
- (_Bool)isLocallyConnectedToRemote;
- (void)sendBulletinSummary:(BLTPBBulletinSummary *)arg1;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 subsectionIDs:(NSSet *)arg2 completion:(void (^)(_Bool))arg3;
- (void)getWillNanoPresentNotificationForSectionID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end
