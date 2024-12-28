//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADSyncCoordinatorCommunalDevices : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_consistencyTimer;	// 16 = 0x10
    _Bool _macroErrorLogged;	// 24 = 0x18
    _Bool _multiUserDevice;	// 25 = 0x19
    NSString *_defaultUserId;	// 32 = 0x20
    NSUUID *_currentHomeId;	// 40 = 0x28
}

+ (unsigned long long)_computeLeeway:(unsigned long long)arg1;	// IMP=0x00200000002fec5e
+ (unsigned long long)_timerIntervalNanosec;	// IMP=0x00100000002febe5
+ (unsigned long long)_timerStartNanosec;	// IMP=0x00100000002feb6c
- (void).cxx_destruct;	// IMP=0x00200000002fe927
@property(readonly, copy) NSUUID *currentHomeId; // @synthesize currentHomeId=_currentHomeId;
@property(readonly) _Bool multiUserDevice; // @synthesize multiUserDevice=_multiUserDevice;
- (void)_logTVOSMacroError;	// IMP=0x00100000002fe881
- (void)_publishHomeSeed:(id)arg1 forAccounts:(id)arg2;	// IMP=0x00100000002fe2ed
- (_Bool)_sameItem:(id)arg1 other:(id)arg2;	// IMP=0x00100000002fe250
- (void)_publishHomeSeedToAllMembers:(id)arg1;	// IMP=0x00100000002fe140
- (void)_publishHomeSeedToAllMembers;	// IMP=0x00100000002fdf21
- (id)_fetchKnownAccountsWithMultiUserService:(id)arg1 userSeedStream:(id)arg2;	// IMP=0x00100000002fdc00
- (id)_fetchKnownAccounts;	// IMP=0x00100000002fdb1c
- (id)_profileUserId;	// IMP=0x00100000002fdb14
- (id)fetchSynchronizedAnalyticsIdsForUser:(id)arg1;	// IMP=0x00100000002fd9c0
- (id)fetchSynchronizedAnalyticsIdsForHome:(id)arg1;	// IMP=0x00100000002fd8ca
- (_Bool)addSeedForUser:(id)arg1 seed:(id)arg2;	// IMP=0x00100000002fd8c2
- (_Bool)addSeedForHome:(id)arg1 seed:(id)arg2;	// IMP=0x00100000002fd808
- (_Bool)addAggregationIdForUser:(id)arg1 aggregationId:(id)arg2;	// IMP=0x00100000002fd702
- (void)_refreshHomeAndUserDetailsWithHomeInfoManager:(id)arg1 multiUserService:(id)arg2;	// IMP=0x00100000002fd65e
- (void)refreshHomeAndUserDetails;	// IMP=0x00100000002fd578
- (void)_initConsistencyTimer;	// IMP=0x00100000002fd360
- (_Bool)_isDefaultUserAvailable;	// IMP=0x00100000002fd337
@property(readonly, getter=isPartOfHome) _Bool partOfHome;
@property(readonly, copy) NSString *defaultUserId; // @synthesize defaultUserId=_defaultUserId;
- (void)_initHomeDetailsWithProfileUserId:(id)arg1 homeInfoManager:(id)arg2 multiUserService:(id)arg3;	// IMP=0x00100000002fd0fa
- (id)initWithProfileUserId:(id)arg1 homeInfoManager:(id)arg2 multiUserService:(id)arg3 disableTimer:(_Bool)arg4;	// IMP=0x00100000002fcfe9
- (id)initWithProfileUserId:(id)arg1;	// IMP=0x00100000002fcf40
- (id)init;	// IMP=0x00100000002fceb1

@end
