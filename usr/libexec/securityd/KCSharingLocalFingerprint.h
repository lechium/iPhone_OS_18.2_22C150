//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface KCSharingLocalFingerprint : NSObject
{
    NSData *_keyprint;	// 8 = 0x8
    NSData *_valueprint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000021e32e
@property(readonly, nonatomic) NSData *valueprint; // @synthesize valueprint=_valueprint;
@property(readonly, nonatomic) NSData *keyprint; // @synthesize keyprint=_keyprint;
- (id)description;	// IMP=0x001000000021e241
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000021e236
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000021e12c
- (unsigned long long)hash;	// IMP=0x001000000021e0e6
- (id)initWithKeyprint:(id)arg1 valueprint:(id)arg2;	// IMP=0x001000000021e04d
- (id)initWithDatabaseItem:(struct SecDbItem *)arg1 error:(id *)arg2;	// IMP=0x001000000021de81

@end
