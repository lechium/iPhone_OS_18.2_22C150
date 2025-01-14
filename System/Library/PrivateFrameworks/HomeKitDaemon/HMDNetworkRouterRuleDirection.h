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

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000074b5a1
+ (id)directionFromLANDirection:(unsigned char)arg1;	// IMP=0x00100000006c89d7
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000074b44a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074b3f9
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000074b3df
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000074b28d
- (id)initWithDirection:(long long)arg1;	// IMP=0x000000000074b250
- (id)init;	// IMP=0x000000000074b214

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

