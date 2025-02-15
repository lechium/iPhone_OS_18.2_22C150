//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RPRemoteDisplayDiscovery, TUConversationManager;
@protocol TUConduitLifecycleControllerDelegate;

@interface CSDConduitLifecycleController : NSObject
{
    id <TUConduitLifecycleControllerDelegate> _delegate;	// 8 = 0x8
    TUConversationManager *_conversationManager;	// 16 = 0x10
    RPRemoteDisplayDiscovery *_remoteDisplayDiscovery;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000016f3b6
@property(readonly, nonatomic) RPRemoteDisplayDiscovery *remoteDisplayDiscovery; // @synthesize remoteDisplayDiscovery=_remoteDisplayDiscovery;
@property(readonly, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(retain, nonatomic) id <TUConduitLifecycleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldKeepConduitAlive;	// IMP=0x001000000016f317
- (void)dealloc;	// IMP=0x001000000016f2d5
- (id)initWithConversationManager:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000016f093

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

