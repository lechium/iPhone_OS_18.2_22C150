//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTTranslationRequest, FTTranslationResponse, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableMtTranslationMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000b5458
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000b53c9
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000b5389
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTTranslationResponse *session_messageAsFTTranslationResponse;
@property(copy, nonatomic) FTTranslationRequest *session_messageAsFTTranslationRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b4f5c
- (id)init;	// IMP=0x00000000000b4ece

@end

