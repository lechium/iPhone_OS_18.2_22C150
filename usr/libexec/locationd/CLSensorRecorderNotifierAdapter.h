//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSensorRecorderNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000f8dd16
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000f8dcfd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000f8dca0
+ (_Bool)isSupportedForType:(int)arg1;	// IMP=0x0010000000f8df2a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000f8df02
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000f8ded5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000f8dead
- (void *)adaptee;	// IMP=0x0010000000f8de7a
- (void)endService;	// IMP=0x0010000000f8de5f
- (void)beginService;	// IMP=0x0010000000f8ddaf
- (id)init;	// IMP=0x0010000000f8dd72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

