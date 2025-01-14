//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLStreamingAwareLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000b5e398
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b5e37f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000b5e322
- (void)remoteDeviceMotionUpdate:(int)arg1 atTime:(double)arg2;	// IMP=0x0020000000b5ea2c
- (void)releaseAccuracyEnablementAssertionForClient:(byref id)arg1;	// IMP=0x0010000000b5e754
- (void)takeAccuracyEnablementAssertionForClient:(byref id)arg1 withDesiredAccuracy:(double)arg2;	// IMP=0x0010000000b5e5ac
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b5e584
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000b5e557
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b5e52f
- (void *)adaptee;	// IMP=0x0010000000b5e4fc
- (void)endService;	// IMP=0x0010000000b5e4e1
- (void)beginService;	// IMP=0x0010000000b5e431
- (id)init;	// IMP=0x0010000000b5e3f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

