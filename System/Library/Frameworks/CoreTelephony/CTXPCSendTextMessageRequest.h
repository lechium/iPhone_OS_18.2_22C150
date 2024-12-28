//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestination, CTLazuliGroupChatUri, CTLazuliMessageID, CTLazuliMessageText;

__attribute__((visibility("hidden")))
@interface CTXPCSendTextMessageRequest
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x0060000000069dde
+ (id)allowedClassesForArguments;	// IMP=0x0060000000069cb1
- (int)requiredEntitlement;	// IMP=0x0000000000069ca6
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000699dc
@property(readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
@property(readonly, nonatomic) CTLazuliDestination *destination;
@property(readonly, nonatomic) CTLazuliMessageText *message;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 groupChatURI:(id)arg2 messageID:(id)arg3 message:(id)arg4;	// IMP=0x0000000000069487
- (id)initWithContext:(id)arg1 destination:(id)arg2 messageID:(id)arg3 message:(id)arg4;	// IMP=0x000000000006930d

@end
