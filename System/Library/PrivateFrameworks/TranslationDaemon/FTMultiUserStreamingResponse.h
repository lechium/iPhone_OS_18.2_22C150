//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioLimitExceeded, FTClientSetupInfo, FTFinalBlazarResponse, FTFinalSpeechRecognitionResponse, FTPartialSpeechRecognitionResponse, FTRecognitionCandidate, FTRecognitionProgress, FTRequestStatsResponse, FTServerEndpointFeatures, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTMultiUserStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct MultiUserStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017f7e0
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017f7a6
- (void).cxx_destruct;	// IMP=0x000000000017ff95
- (id)flatbuffData;	// IMP=0x000000000017fe04
- (Offset_3fe3bcde)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017f986
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTAudioLimitExceeded *contentAsFTAudioLimitExceeded;
@property(readonly, nonatomic) FTClientSetupInfo *contentAsFTClientSetupInfo;
@property(readonly, nonatomic) FTServerEndpointFeatures *contentAsFTServerEndpointFeatures;
@property(readonly, nonatomic) FTRequestStatsResponse *contentAsFTRequestStatsResponse;
@property(readonly, nonatomic) FTRecognitionCandidate *contentAsFTRecognitionCandidate;
@property(readonly, nonatomic) FTRecognitionProgress *contentAsFTRecognitionProgress;
@property(readonly, nonatomic) FTPartialSpeechRecognitionResponse *contentAsFTPartialSpeechRecognitionResponse;
@property(readonly, nonatomic) FTFinalSpeechRecognitionResponse *contentAsFTFinalSpeechRecognitionResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017eed8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017ecf5
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MultiUserStreamingResponse *)arg2;	// IMP=0x000000000017ece0
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017ecc6
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017ecaf

@end
