//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLBacklightStateNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000005b2dd6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b2dbd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005b2d60
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000005b2fc2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005b2f95
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005b2f6d
- (void *)adaptee;	// IMP=0x00100000005b2f3a
- (void)endService;	// IMP=0x00100000005b2f1f
- (void)beginService;	// IMP=0x00100000005b2e6f
- (id)init;	// IMP=0x00100000005b2e32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

