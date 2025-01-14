//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NADApplicationStore, NSString;
@protocol OS_dispatch_queue;

@interface NADApplicationStoreTransaction : NSObject
{
    _Bool _finalized;	// 8 = 0x8
    NADApplicationStore *_applicationStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_commandQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000379d
@property(nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) NADApplicationStore *applicationStore; // @synthesize applicationStore=_applicationStore;
- (void)_flushCommandQueue;	// IMP=0x0010000000003735
- (void)rollback;	// IMP=0x00100000000036ce
- (_Bool)commit:(id *)arg1;	// IMP=0x0010000000003651
- (void)setSequenceNumber:(id)arg1 UUID:(id)arg2;	// IMP=0x00100000000034c6
- (void)removeApplicationWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000033bd
- (void)insertApplication:(id)arg1;	// IMP=0x001000000000326a
- (void)removeAllEntities;	// IMP=0x00100000000031b8
- (id)initWithApplicationStore:(id)arg1;	// IMP=0x00100000000030fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

