//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface LSInstallProgressObserver : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018d91f
@property(nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, copy) NSString *description;
- (int)pid;	// IMP=0x000000000018d801
@property(readonly) unsigned long long hash;
- (void)installationFailedForApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018d726
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;	// IMP=0x000000000018d6ab
- (void)setProgressProportionsByPhase:(id)arg1 forInstallOfApplicationWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018d44a
- (void)sendNotification:(int)arg1 forApplicationWithBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000018d1a0
- (void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(_Bool)arg3;	// IMP=0x000000000018d041
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000018cfa0
- (void)_lsPing:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018cf1d
- (void)removeObserver;	// IMP=0x000000000018ce4a
- (void)addObserver;	// IMP=0x000000000018cd77
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000018cd0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
