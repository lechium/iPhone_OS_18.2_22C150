//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18UsageTrackingAgent17InvitationHandler : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x004000000003bcb0
- (id)init;	// IMP=0x001000000003bc30
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;	// IMP=0x001000000003bb40
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;	// IMP=0x001000000003ba50
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;	// IMP=0x001000000003b960
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;	// IMP=0x001000000003b870

@end
