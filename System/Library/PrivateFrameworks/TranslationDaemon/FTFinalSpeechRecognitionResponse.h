//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioAnalytics, FTLatnnMitigatorResult, FTRecognitionResult, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTFinalSpeechRecognitionResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct FinalSpeechRecognitionResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000caadb
- (id)flatbuffData;	// IMP=0x00000000000ca94a
- (Offset_53990046)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000ca509
@property(readonly, nonatomic) _Bool speech_profile_used;
@property(readonly, nonatomic) _Bool has_result;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) FTLatnnMitigatorResult *latnn_mitigator_result;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) double watermark_peak_average;
@property(readonly, nonatomic) long long watermark_detection;
@property(readonly, nonatomic) FTAudioAnalytics *audio_analytics;
@property(readonly, nonatomic) long long lang_profile_recreate_codes;
@property(readonly, nonatomic) FTRecognitionResult *recognition_result;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c9f48
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalSpeechRecognitionResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c9d9d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct FinalSpeechRecognitionResponse *)arg2;	// IMP=0x00000000000c9d88
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c9d6e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c9d57

@end

