//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection;
@protocol PSPointerDefaultServiceClientToServerInterface><PSPointerDefaultLaunchingServiceClientToServerInterface;

@interface _PUIDXPCClientControllerTarget : NSObject
{
    BSServiceConnection *_connection;	// 8 = 0x8
    id <PSPointerDefaultServiceClientToServerInterface><PSPointerDefaultLaunchingServiceClientToServerInterface> _proxyInterface;	// 16 = 0x10
}

+ (id)currentTarget;	// IMP=0x00200000000177c6
- (void).cxx_destruct;	// IMP=0x00200000000178b7
@property(nonatomic) __weak id <PSPointerDefaultServiceClientToServerInterface><PSPointerDefaultLaunchingServiceClientToServerInterface> proxyInterface; // @synthesize proxyInterface=_proxyInterface;
@property(readonly, nonatomic) __weak BSServiceConnection *connection; // @synthesize connection=_connection;
- (void)_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000177f6
- (oneway void)setWantsServiceKeepAlive:(id)arg1;	// IMP=0x00100000000176f7
- (oneway void)setOverridesHoverRegions:(id)arg1 display:(id)arg2;	// IMP=0x00100000000175ff
- (oneway void)setSystemPointerInteractionContextID:(id)arg1 display:(id)arg2;	// IMP=0x0010000000017507
- (oneway void)setPointerPersistentlyVisibleForReasons:(id)arg1;	// IMP=0x0010000000017438
- (oneway void)setPointerPersistentlyHiddenForReasons:(id)arg1;	// IMP=0x0010000000017369
- (oneway void)autohidePointerForReason:(id)arg1;	// IMP=0x001000000001729a
- (void)setActiveHoverRegion:(id)arg1 transitionCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000171a2
- (void)invalidateContentMatchMoveSources:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000170aa
- (void)createContentMatchMoveSourcesForDisplay:(id)arg1 countValue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000016f89
- (void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016e91
- (void)createPointerPortalSourceCollectionForDisplay:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016d99
- (id)initWithConnection:(id)arg1 proxyInterface:(id)arg2;	// IMP=0x0010000000016d07

@end

