//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface STTransportServiceMessageLedgerItemDeliveryStatus : NSObject
{
    long long _state;	// 8 = 0x8
    long long _numberOfAttempts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000b9463
+ (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x00100000000b92c3
@property(readonly) long long numberOfAttempts; // @synthesize numberOfAttempts=_numberOfAttempts;
@property(readonly) long long state; // @synthesize state=_state;
- (unsigned long long)hash;	// IMP=0x00100000000b9560
- (_Bool)isEqualToStatus:(id)arg1;	// IMP=0x00100000000b94ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b946b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b93f6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b9379
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b932c
- (id)statusWithIncrementedAttempts;	// IMP=0x00100000000b926f
- (id)statusWithUpdatedState:(long long)arg1;	// IMP=0x00100000000b91ec
- (id)description;	// IMP=0x00100000000b9159
- (id)_initWithState:(long long)arg1 numberOfAttempts:(long long)arg2;	// IMP=0x00100000000b9116
- (id)init;	// IMP=0x00100000000b9100

@end

