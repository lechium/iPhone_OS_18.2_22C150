//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _REMCKIdentifierAccountIdentifierPair : NSObject
{
    NSString *_ckIdentifier;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000ab2f1
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) NSString *ckIdentifier; // @synthesize ckIdentifier=_ckIdentifier;
- (id)description;	// IMP=0x00100000000ab24a
- (unsigned long long)hash;	// IMP=0x00100000000ab1be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000aaf98
- (id)initWithCkIdentifier:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000000aae5b

@end
