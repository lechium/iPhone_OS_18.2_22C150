//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioAnalytics, FTLatnnMitigatorResult, FTRecognitionResult, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRecognitionCandidate : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionCandidate *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fe32f
- (id)flatbuffData;	// IMP=0x00000000000fe19e
- (Offset_adec5a97)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000fdc80
@property(readonly, nonatomic) NSString *result_candidate_id;
@property(readonly, nonatomic) _Bool speech_profile_used;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) double watermark_peak_average;
@property(readonly, nonatomic) long long watermark_detection;
@property(readonly, nonatomic) FTAudioAnalytics *audio_analytics;
@property(readonly, nonatomic) long long fingerprint_detection;
@property(readonly, nonatomic) double snr;
@property(readonly, nonatomic) NSString *result_id;
@property(readonly, nonatomic) FTRecognitionResult *recognition_result;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fd5e6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionCandidate *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000fd43b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionCandidate *)arg2;	// IMP=0x00000000000fd426
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fd40c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000fd3f5

@end
