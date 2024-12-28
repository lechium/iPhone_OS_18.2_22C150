//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestinationList, CTLazuliMessageID, CTLazuliMessageText;

__attribute__((visibility("hidden")))
@interface CTXPCSendOneToManyTextMessageRequest
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x006000000007314c
+ (id)allowedClassesForArguments;	// IMP=0x006000000007302f
- (int)requiredEntitlement;	// IMP=0x0000000000073024
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072e14
@property(readonly, nonatomic) CTLazuliDestinationList *destinationList;
@property(readonly, nonatomic) CTLazuliMessageText *message;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 withMessage:(id)arg4;	// IMP=0x0000000000072a8e

@end
