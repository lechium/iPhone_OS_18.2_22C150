//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioLimitExceeded, FTClientSetupInfo, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTServerEndpointFeatures, NSObject;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMutableMultiUserStreamingResponse
{
}

+ (long long)content_typeForObject:(id)arg1;	// IMP=0x0060000000193701
+ (long long)content_typeForMutableObject:(id)arg1;	// IMP=0x006000000019355b
+ (Class)content_mutableClassForType:(long long)arg1;	// IMP=0x0060000000193521
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(copy, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(copy, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property(copy, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property(copy, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(copy, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(copy, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property(copy, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(copy, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001929fb
- (id)init;	// IMP=0x000000000019296d

@end

