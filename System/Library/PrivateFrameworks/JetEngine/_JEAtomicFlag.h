//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _JEAtomicFlag : NSObject
{
    _Atomic _Bool _value;	// 8 = 0x8
}

- (id)description;	// IMP=0x0000000000022e2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022dc5
- (unsigned long long)hash;	// IMP=0x0000000000022dae
- (_Bool)compareWithValue:(_Bool)arg1 andExchangeWithValue:(_Bool)arg2;	// IMP=0x0000000000022d9e
- (id)init;	// IMP=0x0000000000022d51
- (id)initWithInitialValue:(_Bool)arg1;	// IMP=0x0000000000022d16

@end

