//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioPacket, FTFinishAudio, FTLanguageDetectionResponse, FTStartLanguageDetectionRequest, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableSlsLanguageDetectionMessage
{
}

+ (long long)session_message_typeForObject:(id)arg1;	// IMP=0x00600000000b7aba
+ (long long)session_message_typeForMutableObject:(id)arg1;	// IMP=0x00600000000b79e0
+ (Class)session_message_mutableClassForType:(long long)arg1;	// IMP=0x00600000000b79a6
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message; // @dynamic session_message;
@property(copy, nonatomic) FTLanguageDetectionResponse *session_messageAsFTLanguageDetectionResponse;
@property(copy, nonatomic) FTFinishAudio *session_messageAsFTFinishAudio;
@property(copy, nonatomic) FTAudioPacket *session_messageAsFTAudioPacket;
@property(copy, nonatomic) FTStartLanguageDetectionRequest *session_messageAsFTStartLanguageDetectionRequest;
@property(nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b737b
- (id)init;	// IMP=0x00000000000b72ed

@end
