//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol _DUIServerSessionDestination;

__attribute__((visibility("hidden")))
@interface _UIDruidDestinationConnection : NSObject
{
    id <_DUIServerSessionDestination> _serverSession;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    _Bool _systemPolicy;	// 24 = 0x18
    unsigned int _sessionIdentifier;	// 28 = 0x1c
    CDUnknownBlockType _connectionBlock;	// 32 = 0x20
    CDUnknownBlockType _dragEndBlock;	// 40 = 0x28
    CDUnknownBlockType _dropPerformBlock;	// 48 = 0x30
    CDUnknownBlockType _handOffDroppedItemsBlock;	// 56 = 0x38
    CDUnknownBlockType _dragPreviewProviderBlock;	// 64 = 0x40
    CDUnknownBlockType _itemsAddedBlock;	// 72 = 0x48
    CDUnknownBlockType _updatedPresentationBlock;	// 80 = 0x50
    long long _state;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000a13cc4
@property(nonatomic, getter=isSystemPolicy) _Bool systemPolicy; // @synthesize systemPolicy=_systemPolicy;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType updatedPresentationBlock; // @synthesize updatedPresentationBlock=_updatedPresentationBlock;
@property(copy, nonatomic) CDUnknownBlockType itemsAddedBlock; // @synthesize itemsAddedBlock=_itemsAddedBlock;
@property(copy, nonatomic) CDUnknownBlockType dragPreviewProviderBlock; // @synthesize dragPreviewProviderBlock=_dragPreviewProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType handOffDroppedItemsBlock; // @synthesize handOffDroppedItemsBlock=_handOffDroppedItemsBlock;
@property(copy, nonatomic) CDUnknownBlockType dropPerformBlock; // @synthesize dropPerformBlock=_dropPerformBlock;
@property(copy, nonatomic) CDUnknownBlockType dragEndBlock; // @synthesize dragEndBlock=_dragEndBlock;
@property(copy, nonatomic) CDUnknownBlockType connectionBlock; // @synthesize connectionBlock=_connectionBlock;
@property(readonly, nonatomic) unsigned int sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (oneway void)dragEnded;	// IMP=0x0000000000a13817
- (oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;	// IMP=0x0000000000a1354f
- (oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a12e8a
- (oneway void)addedItemCollection:(id)arg1;	// IMP=0x0000000000a12cf3
- (oneway void)updatedPresentation:(id)arg1;	// IMP=0x0000000000a12bb5
- (oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a128fd
- (void)requestVisibleItems:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a128e7
- (void)enableKeyboardIfNeeded;	// IMP=0x0000000000a128d1
- (void)requestDropWithOperation:(unsigned long long)arg1 layerContext:(id)arg2;	// IMP=0x0000000000a127ec
- (void)takePotentialDrop:(id)arg1;	// IMP=0x0000000000a12711
- (void)sawDragEndEvent;	// IMP=0x0000000000a1266a
- (void)dirtyItems:(id)arg1;	// IMP=0x0000000000a125d0
- (void)connect;	// IMP=0x0000000000a11e6e
- (id)initWithSessionIdentifier:(unsigned int)arg1 systemPolicy:(_Bool)arg2;	// IMP=0x0000000000a11a7f
- (id)serverDestinationProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a11a69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

