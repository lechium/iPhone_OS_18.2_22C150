//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHomeManager, IDSInvitationManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHH1IDSInvitationManager : NSObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
    IDSInvitationManager *_idsInvitationManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000263b57
@property(retain, nonatomic) IDSInvitationManager *idsInvitationManager; // @synthesize idsInvitationManager=_idsInvitationManager;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;	// IMP=0x0000000000263b20
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;	// IMP=0x0000000000263b1a
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;	// IMP=0x0000000000263b14
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;	// IMP=0x0000000000263442
- (id)initWithHomeManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000263373

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
