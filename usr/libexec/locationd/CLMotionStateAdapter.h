//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionStateAdapter
{
}

+ (id)getSilo;	// IMP=0x002000000032fe10
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000032fdf7
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000032fd9a
- (void)queryMotionStatesWithStartTime:(double)arg1 endTime:(double)arg2 isFromInternalClient:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x0020000000330024
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000032fffc
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000032ffcf
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000032ffa7
- (void *)adaptee;	// IMP=0x001000000032ff74
- (void)endService;	// IMP=0x001000000032ff59
- (void)beginService;	// IMP=0x001000000032fea9
- (id)init;	// IMP=0x001000000032fe6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

