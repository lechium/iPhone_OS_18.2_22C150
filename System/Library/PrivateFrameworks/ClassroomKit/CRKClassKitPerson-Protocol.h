//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol CRKClassKitPerson <NSObject>
@property(readonly, nonatomic, getter=isAccountATOLocked) _Bool accountATOLocked;
@property(readonly, nonatomic, getter=isAccountFailedPasswordLocked) _Bool accountFailedPasswordLocked;
@property(readonly, nonatomic, getter=isFederatedAccount) _Bool federatedAccount;
@property(readonly, nonatomic) NSDate *dateLastModified;
@property(readonly, nonatomic) NSDate *dateCreated;
@property(readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property(readonly, copy, nonatomic) NSString *familyName;
@property(readonly, copy, nonatomic) NSString *phoneticGivenName;
@property(readonly, copy, nonatomic) NSString *givenName;
@property(readonly, copy, nonatomic) NSString *appleID;
@property(readonly, copy, nonatomic) NSString *orgID;
@property(readonly, copy, nonatomic) NSString *objectID;
@end
