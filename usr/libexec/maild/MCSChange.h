//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation, NSSet, NSString;

@interface MCSChange : NSObject
{
    NSInvocation *_invocation;	// 8 = 0x8
    unsigned int _isFinalized:1;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000043f2b
- (void)setInvocation:(id)arg1;	// IMP=0x0010000000043f1a
- (id)invocation;	// IMP=0x0010000000043f0c
- (_Bool)isFinalized;	// IMP=0x0010000000043f01
- (id)mailboxParentForMove;	// IMP=0x0010000000043ef9
- (id)mailboxToMoveOrRename;	// IMP=0x0010000000043ef1
- (id)modifiedMailboxName;	// IMP=0x0010000000043ee9
- (id)mailboxToRemove;	// IMP=0x0010000000043ee1
@property(readonly, nonatomic) NSSet *messagesSet;
- (id)localizedErrorTitle;	// IMP=0x0010000000043ea6
- (id)localizedErrorDescription;	// IMP=0x0010000000043e73
- (id)accounts;	// IMP=0x0010000000043e40
- (id)stores;	// IMP=0x0010000000043e0d
- (_Bool)allowOtherChange:(id)arg1;	// IMP=0x0010000000043e05
- (_Bool)commit;	// IMP=0x0010000000043dd2
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000043d6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
