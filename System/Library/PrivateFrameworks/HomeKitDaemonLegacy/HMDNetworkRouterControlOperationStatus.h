//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterControlOperationStatus : NSObject
{
    long long _status;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000519f20
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000519df4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000519da3
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000519d89
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000519c37
- (id)initWithStatus:(long long)arg1;	// IMP=0x0000000000519bfa
- (id)init;	// IMP=0x0000000000519bbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
