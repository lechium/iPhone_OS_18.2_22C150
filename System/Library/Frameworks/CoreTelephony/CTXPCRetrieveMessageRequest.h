//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliMessageID;

__attribute__((visibility("hidden")))
@interface CTXPCRetrieveMessageRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0060000000064fcb
- (int)requiredEntitlement;	// IMP=0x0000000000065059
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064ddb
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 messageID:(id)arg2;	// IMP=0x0000000000064b2a

@end

