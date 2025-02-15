//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterRuleDirection : NSObject
{
    long long _direction;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000051b43f
+ (id)directionFromLANDirection:(unsigned char)arg1;	// IMP=0x00100000004ac75f
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051b2e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000051b297
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000051b27d
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000051b12b
- (id)initWithDirection:(long long)arg1;	// IMP=0x000000000051b0ee
- (id)init;	// IMP=0x000000000051b0b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

