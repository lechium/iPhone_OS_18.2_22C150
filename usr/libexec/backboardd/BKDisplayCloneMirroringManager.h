//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayCloneMirrorRequestCache, NSMutableDictionary, NSString;
@protocol BKDisplayCloneMirroringManagerInformationProvider;

@interface BKDisplayCloneMirroringManager : NSObject
{
    id <BKDisplayCloneMirroringManagerInformationProvider> _displayProvider;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    BKDisplayCloneMirrorRequestCache *_lock_cloneMirrorRequests;	// 24 = 0x18
    NSMutableDictionary *_lock_destinationDisplayIdentifierToCloneRecord;	// 32 = 0x20
    _Bool _lock_cloneRotationDisabled;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000006e44f
- (void)removeModeRequestForDisplay:(id)arg1 clientPID:(int)arg2;	// IMP=0x001000000006e1dd
- (void)addModeRequest:(unsigned long long)arg1 forDisplay:(id)arg2 clientPID:(int)arg3;	// IMP=0x001000000006dd8f
- (void)removeDisplay:(id)arg1;	// IMP=0x001000000006d9d9
- (void)evaluateDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x001000000006d622
- (void)setCloneRotationDisabled:(_Bool)arg1;	// IMP=0x001000000006d5a2
- (void)cloneMirroringRequestsDidChange;	// IMP=0x001000000006d569
- (void)_lock_evaluateExistingClonesForReason:(id)arg1;	// IMP=0x001000000006d4d1
- (void)_lock_evaluateAllDisplaysForReason:(id)arg1;	// IMP=0x001000000006d27b
- (void)_lock_evaluateDisplay:(id)arg1 reason:(id)arg2;	// IMP=0x000000000006d1ce
- (void)_lock_clearWindowServerDisplayTags:(id)arg1;	// IMP=0x001000000006d0f4
- (void)_lock_removeClone:(id)arg1 fromWindowServerDisplay:(id)arg2;	// IMP=0x001000000006ce55
- (void)_lock_removeDisplayCloneDestination:(id)arg1;	// IMP=0x001000000006cde7
- (void)_lock_recomputeTagsForDisplay:(id)arg1 shouldHide:(_Bool)arg2;	// IMP=0x001000000006cba5
- (id)_lock_virtualDisplayModeFromClientParametersForDisplay:(id)arg1 shouldHide:(_Bool *)arg2 shouldDisable:(_Bool *)arg3;	// IMP=0x001000000006c565
- (id)_lock_cloneMirroringOptionsSteveNote:(_Bool)arg1 contextIDs:(id)arg2;	// IMP=0x001000000006c338
- (void)_lock_evaluateConnectedDisplay:(id)arg1 because:(id)arg2;	// IMP=0x001000000006be7f
- (void)_lock_setupCloningToDestination:(id)arg1 fromVirtualMode:(id)arg2 hideByDefault:(_Bool)arg3;	// IMP=0x001000000006b750
- (id)_lock_cloneMirroringOptionsFromSourceDisplay:(id)arg1 destinationDisplay:(id)arg2 virtualMode:(id)arg3 isStevenote:(_Bool *)arg4;	// IMP=0x001000000006b487
- (void)_lock_evaluateContinuityDisplay:(id)arg1 label:(id)arg2;	// IMP=0x001000000006b3da
- (void)_lock_evaluateCarPlayDisplay:(id)arg1 label:(id)arg2;	// IMP=0x001000000006b3d4
- (id)initWithDisplayProvider:(id)arg1;	// IMP=0x001000000006b320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

