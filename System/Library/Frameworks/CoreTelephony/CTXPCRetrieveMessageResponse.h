//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTLazuliMessageEnvelope;

__attribute__((visibility("hidden")))
@interface CTXPCRetrieveMessageResponse
{
}

+ (_Bool)isSensitiveMessage;	// IMP=0x006000000006537a
+ (id)allowedClassesForArguments;	// IMP=0x00600000000652ec
@property(readonly, nonatomic) CTLazuliMessageEnvelope *messageEnvelope;
- (id)initWithMessageEnvelope:(id)arg1;	// IMP=0x0000000000065064

@end

