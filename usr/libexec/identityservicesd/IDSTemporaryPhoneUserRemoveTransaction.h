//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSTemporaryPhoneUser, NSString;

@interface IDSTemporaryPhoneUserRemoveTransaction : NSObject
{
    IDSTemporaryPhoneUser *_user;	// 8 = 0x8
    long long _alertType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004a53c0
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) IDSTemporaryPhoneUser *user; // @synthesize user=_user;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long type;
- (id)initWithUser:(id)arg1 alertType:(long long)arg2;	// IMP=0x00100000004a5291

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
