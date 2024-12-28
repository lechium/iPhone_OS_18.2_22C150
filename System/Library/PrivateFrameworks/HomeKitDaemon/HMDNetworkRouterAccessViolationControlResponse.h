//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterAccessViolationControlResponse : NSObject
{
    NSMutableArray *_violations;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000074e725
- (void).cxx_destruct;	// IMP=0x000000000074e715
@property(retain, nonatomic) NSMutableArray *violations; // @synthesize violations=_violations;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000074e54f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000074e4e5
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000074e1c7
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000074dead
- (id)initWithViolations:(id)arg1;	// IMP=0x000000000074de42
- (id)init;	// IMP=0x000000000074de13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
