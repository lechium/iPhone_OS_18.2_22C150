//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterICMPTypeList : NSObject
{
    NSMutableArray *_types;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000524043
+ (id)typeListFromICMPTypes:(id)arg1;	// IMP=0x00100000004ad287
- (void).cxx_destruct;	// IMP=0x00000000005234b4
@property(retain, nonatomic) NSMutableArray *types; // @synthesize types=_types;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005232ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000523284
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000522f66
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000522c4c
- (id)initWithTypes:(id)arg1;	// IMP=0x0000000000522be1
- (id)init;	// IMP=0x0000000000522bb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

