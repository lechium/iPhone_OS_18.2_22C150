//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSUUID, TUConversation, TUConversationMember, TUConversationReport, TUHandle;
@protocol CSDRelayConversationDelegate, OS_dispatch_queue;

@interface CSDRelayConversation : NSObject
{
    _Bool _endpointOnCurrentDevice;	// 8 = 0x8
    id <CSDRelayConversationDelegate> _delegate;	// 16 = 0x10
    NSUUID *_UUID;	// 24 = 0x18
    NSUUID *_groupUUID;	// 32 = 0x20
    NSUUID *_messagesGroupUUID;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    TUConversationMember *_localMember;	// 56 = 0x38
    TUHandle *_initiator;	// 64 = 0x40
    NSSet *_remoteMembers;	// 72 = 0x48
    NSSet *_activeRemoteParticipants;	// 80 = 0x50
    unsigned long long _avMode;	// 88 = 0x58
    TUConversationReport *_report;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000017d3c4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool endpointOnCurrentDevice; // @synthesize endpointOnCurrentDevice=_endpointOnCurrentDevice;
@property(readonly, copy, nonatomic) TUConversationReport *report; // @synthesize report=_report;
@property(nonatomic) unsigned long long avMode; // @synthesize avMode=_avMode;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(copy, nonatomic) NSSet *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(readonly, nonatomic) TUHandle *initiator; // @synthesize initiator=_initiator;
@property(retain, nonatomic) TUConversationMember *localMember; // @synthesize localMember=_localMember;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSDRelayConversationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) TUConversation *tuConversation;
- (id)description;	// IMP=0x001000000017cc96
- (void)updateWithProminenceRelayMessage:(id)arg1;	// IMP=0x001000000017c8d9
- (void)updateWithRelayMessage:(id)arg1;	// IMP=0x001000000017c6f4
- (id)initWithRelayMessage:(id)arg1 queue:(id)arg2;	// IMP=0x001000000017c44c

@end
