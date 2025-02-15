//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_transactionClamps;	// 16 = 0x10
    double _accountIdentifierCheckTimestamp;	// 24 = 0x18
    double _authenticationNeededTimestamp;	// 32 = 0x20
    double _userAcceptedSyncTimestamp;	// 40 = 0x28
    double _networkingBlockedUntil;	// 48 = 0x30
    double _backOffUntil;	// 56 = 0x38
    double _userCancelledSignInBackOffUntil;	// 64 = 0x40
    double _nextUserCancelBackOffInterval;	// 72 = 0x48
    NSData *_pendingUserDefaultArchivedData;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005876
+ (id)sharedClampsController;	// IMP=0x0010000000005846
- (void).cxx_destruct;	// IMP=0x00000000000050b4
@property(retain, nonatomic) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property(nonatomic) double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property(nonatomic) double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property(nonatomic) double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property(nonatomic) double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property(nonatomic) double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property(nonatomic) double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property(nonatomic) double accountIdentifierCheckTimestamp; // @synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004de9
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004c0d
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004aed
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004996
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004730
- (id)_keyForTransaction:(id)arg1;	// IMP=0x000000000000471b
- (double)_rightNow;	// IMP=0x00000000000046c4
- (_Bool)isNetworkingBlocked;	// IMP=0x000000000000464f
- (void)clearNetworkingBlocked;	// IMP=0x000000000000463a
- (void)setNetworkingBlocked;	// IMP=0x00000000000045f7
- (void)clearBackOff;	// IMP=0x00000000000045c6
- (void)backOffForTimeInterval:(double)arg1;	// IMP=0x0000000000004579
- (void)clearUserCancelledSignIn;	// IMP=0x000000000000453a
- (void)setUserCancelledSignIn;	// IMP=0x000000000000434d
- (_Bool)hasUserRecentlyAcceptedSync;	// IMP=0x00000000000042ad
- (void)clearUserAcceptedSyncTimestamp;	// IMP=0x000000000000427c
- (void)setUserAcceptedSyncTimestamp;	// IMP=0x0000000000004241
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000040bd
- (void)clearAuthenticationRequest;	// IMP=0x000000000000408c
- (void)setAuthenticationRequest;	// IMP=0x0000000000004051
- (void)clearAccountIdentifierCheckTimestamp;	// IMP=0x0000000000004020
- (void)setAccountIdentifierCheckTimestamp;	// IMP=0x0000000000003fe5
- (void)clearTimestampForTransaction:(id)arg1;	// IMP=0x0000000000003f3e
- (void)setTimestampForTransaction:(id)arg1;	// IMP=0x0000000000003eac
- (void)reset;	// IMP=0x0000000000003dca
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003d11
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003c83
- (void)saveToUserDefaults;	// IMP=0x0000000000003b9d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000039ed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000388f
- (id)description;	// IMP=0x00000000000036cc
- (id)init;	// IMP=0x000000000000364c

@end

