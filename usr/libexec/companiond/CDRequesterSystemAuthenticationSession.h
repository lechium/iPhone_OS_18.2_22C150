//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CDRequesterSystemAuthenticationSession
{
}

- (unsigned long long)_authFlags;	// IMP=0x004000000000f040
- (id)_idsMessageRecipientUsernames;	// IMP=0x001000000000ebf0
- (_Bool)_requireOwnerDevice;	// IMP=0x001000000000eb8d
- (void)_invalidated;	// IMP=0x001000000000eb5e
- (void)_notifyDeviceStartedAuthentication:(id)arg1;	// IMP=0x001000000000eb2f
- (void)_notifyDeviceAcceptedNotification:(id)arg1;	// IMP=0x001000000000eb00
- (void)_presentViewService;	// IMP=0x001000000000eafa
- (void)_configureRapportClient:(id)arg1;	// IMP=0x001000000000e2cd
- (void)_prepareForActivationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e2bd

@end

