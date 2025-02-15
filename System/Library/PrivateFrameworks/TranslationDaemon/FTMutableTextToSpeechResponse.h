//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioDescription, FTTextToSpeechFeature, FTTextToSpeechMeta, FTTextToSpeechResponseDevData, NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableTextToSpeechResponse
{
}

@property(copy, nonatomic) FTTextToSpeechResponseDevData *dev_data;
@property(copy, nonatomic) FTTextToSpeechFeature *feature;
@property(copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property(copy, nonatomic) NSArray *word_timing_info;
@property(copy, nonatomic) FTAudioDescription *playback_description;
@property(copy, nonatomic) FTAudioDescription *decoder_description;
- (void)audio:(CDUnknownBlockType)arg1;	// IMP=0x000000000016990d
@property(copy, nonatomic) NSData *audio;
@property(nonatomic) int sample_rate;
@property(nonatomic) long long audio_type;
@property(copy, nonatomic) NSString *error_str;
@property(nonatomic) int error_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016937a
- (id)init;	// IMP=0x00000000001692ec

@end

