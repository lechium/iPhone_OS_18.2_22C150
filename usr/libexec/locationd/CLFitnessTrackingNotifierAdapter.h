//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFitnessTrackingNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000609b94
+ (id)getSilo;	// IMP=0x0010000000609980
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000609967
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000060990a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000609b6c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000609b3f
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000609b17
- (void *)adaptee;	// IMP=0x0010000000609ae4
- (void)endService;	// IMP=0x0010000000609ac9
- (void)beginService;	// IMP=0x0010000000609a19
- (id)init;	// IMP=0x00100000006099dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

