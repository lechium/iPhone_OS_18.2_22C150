//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSManualFetchTrigger : NSObject
{
    CDUnknownBlockType _fetchBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000069ac6
- (void)triggerFetchForReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000069a0e
- (void)scheduleFetchBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000699f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
