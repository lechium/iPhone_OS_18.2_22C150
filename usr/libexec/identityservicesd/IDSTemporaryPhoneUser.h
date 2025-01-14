//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPhoneUser, MISSING_TYPE, NSDate, NSString;

@interface IDSTemporaryPhoneUser : NSObject
{
    _Bool _hasBeenProvisioned;	// 8 = 0x8
    _Bool _finishedRegistration;	// 9 = 0x9
    _Bool _hasNotifiedSuccess;	// 10 = 0xa
    NSDate *_expirationDate;	// 16 = 0x10
    IDSPhoneUser *_phoneUser;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000017295c
- (MISSING_TYPE *).cxx_destruct;	// IMP=0x0020000000172e89
@property(retain, nonatomic) IDSPhoneUser *phoneUser; // @synthesize phoneUser=_phoneUser;
@property(nonatomic) _Bool hasNotifiedSuccess; // @synthesize hasNotifiedSuccess=_hasNotifiedSuccess;
@property(nonatomic) _Bool finishedRegistration; // @synthesize finishedRegistration=_finishedRegistration;
@property(nonatomic) _Bool hasBeenProvisioned; // @synthesize hasBeenProvisioned=_hasBeenProvisioned;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000172c1f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000172add
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000172964
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x0010000000172804
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x00100000001727f2
- (_Bool)isEqualToTemporaryPhoneUser:(id)arg1;	// IMP=0x00100000001726e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000172688
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x001000000017263c
@property(readonly, nonatomic) NSString *labelID;
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSString *phoneNumber;
- (id)storageIdentifier;	// IMP=0x0010000000172412
- (id)unprefixedIdentifier;	// IMP=0x00100000001723c2
- (id)realmPrefixedIdentifier;	// IMP=0x0010000000172372
- (long long)realm;	// IMP=0x0010000000172367
- (id)uniqueIdentifier;	// IMP=0x001000000017227e
- (id)temporaryPhoneUserWithNotifiedSuccess;	// IMP=0x0010000000172245
- (id)temporaryPhoneUserWithFinishedRegistration;	// IMP=0x001000000017220c
- (id)temporaryPhoneUserWithUpdatedExpirationDate:(id)arg1;	// IMP=0x001000000017219d
- (id)initWithPhoneUser:(id)arg1 expirationDate:(id)arg2 finishedRegistration:(_Bool)arg3;	// IMP=0x00100000001720fa
- (id)initWithPhoneUser:(id)arg1;	// IMP=0x001000000017206e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

