//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDSharedUserInviteOwnerSendLogEvent
{
    _Bool _userAlreadyAddedToShare;	// 8 = 0x8
    long long _createShareMS;	// 16 = 0x10
    long long _addUserToShareMS;	// 24 = 0x18
    long long _sendInvitationMS;	// 32 = 0x20
    long long _totalInvitationCreateAndSendMS;	// 40 = 0x28
}

@property(nonatomic) long long totalInvitationCreateAndSendMS; // @synthesize totalInvitationCreateAndSendMS=_totalInvitationCreateAndSendMS;
@property(nonatomic) _Bool userAlreadyAddedToShare; // @synthesize userAlreadyAddedToShare=_userAlreadyAddedToShare;
@property(nonatomic) long long sendInvitationMS; // @synthesize sendInvitationMS=_sendInvitationMS;
@property(nonatomic) long long addUserToShareMS; // @synthesize addUserToShareMS=_addUserToShareMS;
@property(nonatomic) long long createShareMS; // @synthesize createShareMS=_createShareMS;
- (unsigned long long)coreAnalyticsEventOptions;	// IMP=0x000000000099a7a9
- (id)coreAnalyticsEventDictionary;	// IMP=0x000000000099a4fc
- (id)coreAnalyticsEventName;	// IMP=0x000000000099a4ef
- (id)initWithHome:(id)arg1;	// IMP=0x000000000099a48d

@end

