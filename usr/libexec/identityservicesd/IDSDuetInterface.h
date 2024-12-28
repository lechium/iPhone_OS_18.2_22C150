//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol IDSDuetInterfaceDelegate;

@interface IDSDuetInterface : NSObject
{
    id <IDSDuetInterfaceDelegate> _delegate;	// 8 = 0x8
    NSMutableSet *_initialSyncClientIDs;	// 16 = 0x10
    NSMutableSet *_reunionSyncClientIDs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000028fe0
- (void).cxx_destruct;	// IMP=0x002000000002958b
@property(retain, nonatomic) NSMutableSet *reunionSyncClientIDs; // @synthesize reunionSyncClientIDs=_reunionSyncClientIDs;
@property(retain, nonatomic) NSMutableSet *initialSyncClientIDs; // @synthesize initialSyncClientIDs=_initialSyncClientIDs;
@property(nonatomic) __weak id <IDSDuetInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAdmissionCheckCache;	// IMP=0x0010000000029528
- (void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000029398
- (void)forceCheckAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000029208
- (void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000029202
- (id)_newKeyForValues:(id)arg1 priority:(long long)arg2;	// IMP=0x00100000000290eb
- (_Bool)reunionSyncInProgress;	// IMP=0x00100000000290e3
- (void)setReunionSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x00100000000290dd
- (_Bool)initialSyncInProgress;	// IMP=0x00100000000290d5
- (void)setInitialSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x00100000000290cf
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1;	// IMP=0x00100000000290c9
- (void)dealloc;	// IMP=0x001000000002909a
- (id)init;	// IMP=0x001000000002906b
- (void)_setupPairedSystemContext;	// IMP=0x0010000000029065

@end
