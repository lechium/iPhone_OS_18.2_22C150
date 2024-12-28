//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliDestinationList, CTLazuliMessageGeoLocationPush, CTLazuliMessageID;

__attribute__((visibility("hidden")))
@interface CTXPCSendOneToManyGeoLocationRequest
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x0060000000073812
+ (id)allowedClassesForArguments;	// IMP=0x00600000000736f5
- (int)requiredEntitlement;	// IMP=0x00000000000736ea
- (void)performRequestWithHandler:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000734da
@property(readonly, nonatomic) CTLazuliDestinationList *destinationList;
@property(readonly, nonatomic) CTLazuliMessageGeoLocationPush *push;
@property(readonly, nonatomic) CTLazuliMessageID *messageID;
- (id)initWithContext:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 withGeoPush:(id)arg4;	// IMP=0x0000000000073154

@end
