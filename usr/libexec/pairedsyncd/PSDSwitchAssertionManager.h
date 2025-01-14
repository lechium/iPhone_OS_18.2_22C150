//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDRActiveDeviceAssertion;

@interface PSDSwitchAssertionManager : NSObject
{
    PDRActiveDeviceAssertion *_assertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001cb00
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;	// IMP=0x001000000001cafa
- (void)scheduler:(id)arg1 didClearSyncSession:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ca23
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x001000000001c68d
- (void)dealloc;	// IMP=0x001000000001c618
- (id)init;	// IMP=0x001000000001c581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

