//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestinationList, CTLazuliFileTransferDescriptor, CTLazuliMessageID;

__attribute__((visibility("hidden")))
@interface CTXPCSendOneToManyFileTransferRequest
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x0060000000073ed8
+ (id)allowedClassesForArguments;	// IMP=0x0060000000073dbb
- (int)requiredEntitlement;	// IMP=0x0000000000073db0
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073ba0
@property(readonly, nonatomic) CTLazuliDestinationList *destinationList;
@property(readonly, nonatomic) CTLazuliFileTransferDescriptor *fileTransferDescriptor;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 withDescriptor:(id)arg4;	// IMP=0x000000000007381a

@end

