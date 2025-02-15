//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, SHShazamKitUIServiceConnectionProvider;

__attribute__((visibility("hidden")))
@interface SHShazamKitUIServiceConnection : NSObject
{
    struct os_unfair_lock_s _connectionLock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    SHShazamKitUIServiceConnectionProvider *_connectionProvider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001b034
@property(nonatomic) struct os_unfair_lock_s connectionLock; // @synthesize connectionLock=_connectionLock;
@property(readonly, nonatomic) SHShazamKitUIServiceConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
- (void)presentMediaLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aee5
- (void)presentMediaItem:(id)arg1 presentationSettings:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ad25
- (void)presentMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001abd7
- (void)tearDownConnection;	// IMP=0x000000000001aae2
- (void)attachDefaultConnectionHandlers;	// IMP=0x000000000001a830
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x000000000001a702
- (void)dealloc;	// IMP=0x000000000001a6c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

