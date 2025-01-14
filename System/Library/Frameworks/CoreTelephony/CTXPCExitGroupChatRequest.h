//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliGroupChatUri, CTLazuliOperationID;

__attribute__((visibility("hidden")))
@interface CTXPCExitGroupChatRequest
{
}

+ (id)allowedClassesForArguments;	// IMP=0x0060000000071e22
- (int)requiredEntitlement;	// IMP=0x0000000000071e17
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071c86
@property(readonly, nonatomic) CTLazuliOperationID *operationID;
@property(readonly, nonatomic) CTLazuliGroupChatUri *groupChatURI;
- (id)initWithContext:(id)arg1 groupChatURI:(id)arg2 operationID:(id)arg3;	// IMP=0x0000000000071a05

@end

