//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ADService;

@interface ADServiceRecord : NSObject
{
    id <ADService> _service;	// 8 = 0x8
    long long _precedence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000fd083
- (_Bool)hasEqualOrHigherPrecedenceThanServiceRecord:(id)arg1;	// IMP=0x00100000000fd01f
- (long long)precedence;	// IMP=0x00100000000fd015
- (id)service;	// IMP=0x00100000000fd007
- (id)description;	// IMP=0x00100000000fcf87
- (id)initWithService:(id)arg1 precedence:(long long)arg2;	// IMP=0x00100000000fcf10

@end

