//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSUUID;

@protocol ACXDeviceConnectionDelegate <NSObject>

@optional
- (void)observerRegistered;
- (void)removabilityDidChangeForApplications:(NSDictionary *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(NSUUID *)arg1;
- (void)applicationsUninstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsUpdated:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)applicationsInstalled:(NSArray *)arg1 onDeviceWithPairingID:(NSUUID *)arg2;
- (void)updateInstallProgressForApplication:(NSString *)arg1 progress:(double)arg2 installPhase:(long long)arg3;
- (void)updateInstallStateForApplication:(NSString *)arg1 installState:(long long)arg2;
@end

