//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLTimeManagerAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000003e0e8e
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e0e75
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000003e0e18
- (void)setGpsTime:(unsigned long long)arg1;	// IMP=0x00200000003e1127
- (_Bool)syncgetReferenceTime:(double *)arg1 andError:(double *)arg2;	// IMP=0x00100000003e10e4
- (_Bool)syncgetReferenceTime:(double *)arg1;	// IMP=0x00100000003e10a2
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e107a
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000003e104d
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000003e1025
- (void *)adaptee;	// IMP=0x00100000003e0ff2
- (void)endService;	// IMP=0x00100000003e0fd7
- (void)beginService;	// IMP=0x00100000003e0f27
- (id)init;	// IMP=0x00100000003e0eea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
