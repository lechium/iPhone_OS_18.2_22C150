//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechResponse, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTSpeechTranslationTextToSpeechResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechTranslationTextToSpeechResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000134d95
- (id)flatbuffData;	// IMP=0x0000000000134c04
- (Offset_4a213448)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000134a0e
@property(readonly, nonatomic) FTTextToSpeechResponse *text_to_speech_response;
@property(readonly, nonatomic) NSString *target_locale;
@property(readonly, nonatomic) NSString *request_id;
@property(readonly, nonatomic) NSString *conversation_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001347e6
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationTextToSpeechResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000013463b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechTranslationTextToSpeechResponse *)arg2;	// IMP=0x0000000000134626
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000013460c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000001345f5

@end

