//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNReputationLogger : NSObject
{
}

+ (id)obfuscate:(id)arg1;	// IMP=0x00400000000f79d8
+ (id)obfuscateHandle:(id)arg1;	// IMP=0x00400000000f7976
+ (id)describeScore:(long long)arg1;	// IMP=0x00400000000f78f0
+ (id)performanceLog;	// IMP=0x00400000000f7894
+ (id)queryLog;	// IMP=0x00400000000f7838
- (void)reputationUnestablished;	// IMP=0x00000000000f77e7
- (void)couldNotQueryContactsForPhoneNumberWithError:(id)arg1;	// IMP=0x00000000000f776f
- (void)contactsCouldNotConfirmTrustOfPhoneNumber;	// IMP=0x00000000000f771e
- (void)contactsConfirmedTrustOfPhoneNumber;	// IMP=0x00000000000f76cd
- (void)couldNotQueryContactsForEmailAddressWithError:(id)arg1;	// IMP=0x00000000000f7655
- (void)contactsCouldNotConfirmTrustOfEmailAddress;	// IMP=0x00000000000f7604
- (void)contactsConfirmedTrustOfEmailAddress;	// IMP=0x00000000000f75b3
- (void)couldNotQueryCoreRecentsWithError:(id)arg1;	// IMP=0x00000000000f753b
- (void)coreRecentsCouldNotConfirmTrust;	// IMP=0x00000000000f74ea
- (void)coreRecentsConfirmedTrust;	// IMP=0x00000000000f7499
- (void)timeToResolve:(double)arg1;	// IMP=0x00000000000f743e
- (void)queryForHandle:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000f72fc
- (void)queryForHandle:(id)arg1 didFinishWithReputation:(id)arg2;	// IMP=0x00000000000f71a4
- (void)beginQueryForHandle:(id)arg1;	// IMP=0x00000000000f70ba

@end

