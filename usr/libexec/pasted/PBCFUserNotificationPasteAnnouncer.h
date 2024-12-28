//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBAuditTokenInfo;

@interface PBCFUserNotificationPasteAnnouncer : NSObject
{
    struct __CFUserNotification *_userNotification;	// 8 = 0x8
    CDUnknownBlockType _replyBlock;	// 16 = 0x10
    PBAuditTokenInfo *_auditTokenInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001abc5
- (void)dealloc;	// IMP=0x001000000001ab64
- (void)authorizationDidCompleteWithPasteAllowed:(_Bool)arg1;	// IMP=0x001000000001ab22
- (void)invalidate;	// IMP=0x001000000001aae4
- (void)requestAuthorizationForPaste:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a6cd
- (id)initWithAuditTokenInfo:(id)arg1;	// IMP=0x001000000001a662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
