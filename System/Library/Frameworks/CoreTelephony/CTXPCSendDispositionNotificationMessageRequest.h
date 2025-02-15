//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliMessageID;

__attribute__((visibility("hidden")))
@interface CTXPCSendDispositionNotificationMessageRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x00000000000691e0
- (int)requiredEntitlement;	// IMP=0x00000000000691d5
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000068f39
@property(readonly, nonatomic) CTLazuliMessageID *notificationMessageID;
@property(readonly, nonatomic) long long notificationType;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
@property(readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property(readonly, nonatomic) CTLazuliDestination *destination;
- (id)initWithContext:(id)arg1 groupChatURI:(id)arg2 destination:(id)arg3 messageID:(id)arg4 notificationType:(long long)arg5 notificationMessageID:(id)arg6;	// IMP=0x000000000006899a
- (id)initWithContext:(id)arg1 destination:(id)arg2 messageID:(id)arg3 notificationType:(long long)arg4 notificationMessageID:(id)arg5;	// IMP=0x00000000000687b3

@end

