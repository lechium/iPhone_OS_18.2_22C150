//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLUnifiedCellLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000a8fd99
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a8fd80
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a8fd23
+ (_Bool)isSupported;	// IMP=0x0010000000a8ffae
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000a8ff86
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a8ff59
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a8ff31
- (void *)adaptee;	// IMP=0x0010000000a8fefe
- (void)endService;	// IMP=0x0010000000a8fee3
- (void)beginService;	// IMP=0x0010000000a8fe32
- (id)init;	// IMP=0x0010000000a8fdf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

