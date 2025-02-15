//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MRDestinationResolverHelper : NSObject
{
    long long _level;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000110503
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long level; // @synthesize level=_level;
- (void)destinationResolver:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000110464
- (void)destinationResolver:(id)arg1 playerPathDidChange:(id)arg2;	// IMP=0x00000000001103f5
- (void)destinationResolverDestinationDidInvalidate:(id)arg1;	// IMP=0x00000000001103ad
- (void)destinationResolver:(id)arg1 endpointDidChange:(id)arg2;	// IMP=0x0000000000110324
- (void)destinationResolver:(id)arg1 originDidChange:(id)arg2;	// IMP=0x000000000011029b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

