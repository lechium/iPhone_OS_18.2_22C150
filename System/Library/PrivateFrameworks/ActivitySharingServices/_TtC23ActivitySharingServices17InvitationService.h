//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC23ActivitySharingServices17InvitationService : NSObject
{
    MISSING_TYPE *invitationListener;	// 8 = 0x8
    MISSING_TYPE *queue;	// 48 = 0x30
    MISSING_TYPE *protectedState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000098950
- (id)init;	// IMP=0x00000000000988f0
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;	// IMP=0x0000000000098eb0
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;	// IMP=0x0000000000098e90
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;	// IMP=0x0000000000098e70
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;	// IMP=0x0000000000098e50

@end
