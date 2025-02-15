//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PAApplication, PABridgedTCCIdentity;

@interface PALResolvedAccessorCacheKey : NSObject
{
    PAApplication *_accessor;	// 8 = 0x8
    PABridgedTCCIdentity *_clientProvidedIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002f90
@property(readonly, nonatomic) PABridgedTCCIdentity *clientProvidedIdentity; // @synthesize clientProvidedIdentity=_clientProvidedIdentity;
@property(readonly, nonatomic) PAApplication *accessor; // @synthesize accessor=_accessor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000002f71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002e86
- (unsigned long long)hash;	// IMP=0x0010000000002e40
- (id)initWithAccessor:(id)arg1 clientProvidedIdentity:(id)arg2;	// IMP=0x0010000000002da7

@end

