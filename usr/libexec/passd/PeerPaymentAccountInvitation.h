//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentAccountInvitation
{
}

+ (id)_propertySettersForPeerPaymentAccountInvitation;	// IMP=0x00400000000546fd
+ (id)_peerPaymentAccountInvitationsWithQuery:(id)arg1;	// IMP=0x001000000005454f
+ (id)_predicateForPeerPaymentAccountPID:(long long)arg1;	// IMP=0x001000000005436f
+ (id)invitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000054156
+ (void)deleteInvitationsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000000000540bd
+ (id)insertInvitations:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000053e98
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000053e69
+ (id)databaseTable;	// IMP=0x0010000000053e5c
- (id)peerPaymentAccountInvitation;	// IMP=0x00400000000543e0
- (id)initWithInvitation:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000054209

@end
