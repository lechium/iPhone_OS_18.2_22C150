//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (TPSCallWaitingAdditions)
+ (id)tps_stringWithTPSCallWaitingState:(long long)arg1;	// IMP=0x0020000000012ea6
+ (id)tps_stringWithTPSEncryptedIdentityType:(long long)arg1;	// IMP=0x002000000001359e
+ (id)tps_ctStringWithTPSEncryptedIdentityType:(long long)arg1;	// IMP=0x0020000000013568
+ (id)tps_stringWithCTPhoneBookName:(int)arg1;	// IMP=0x0020000000017eb0
+ (id)tps_stringWithTPSCallingLineIdRestrictionState:(long long)arg1;	// IMP=0x0020000000017f00
+ (id)tps_stringWithTPSCallForwardingServiceType:(long long)arg1;	// IMP=0x002000000001d1f9
@property(readonly, nonatomic) long long tps_encryptedIdentityType;
@end

