//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDResidentDevice, NSSet;
@protocol HMDPrimaryResidentElectionAddOnDelegate;

@protocol HMDPrimaryResidentElectionAddOn <NSObject>
@property __weak id <HMDPrimaryResidentElectionAddOnDelegate> delegate;
- (NSSet *)residentsInMesh;
- (void)primaryResidentChanged:(HMDResidentDevice *)arg1 previousResidentDevice:(HMDResidentDevice *)arg2;
- (_Bool)allowExternalUpdateOfPrimaryResidentTo:(HMDResidentDevice *)arg1;
- (_Bool)residentIsPartOfTheCurrentMesh:(HMDResidentDevice *)arg1;
- (void)registerForMessages;
- (void)performElectionWithReason:(unsigned long long)arg1;
- (void)performElection;
- (void)stop;
- (void)start;
@end
