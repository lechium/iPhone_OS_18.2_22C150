//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechSpeechFeatureInputText, FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechSpeechFeatureModelIdentifier, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechSpeechFeatureRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012918d
- (id)flatbuffData;	// IMP=0x0000000000128ffc
- (Offset_72003114)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000012898c
@property(readonly, nonatomic) _Bool support_homograph;
- (void)lexicon_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001287aa
- (unsigned long long)lexicon_count;	// IMP=0x000000000012870e
- (id)lexicon_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000128614
@property(readonly, nonatomic) NSArray *lexicon;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000128196
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000127feb
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest *)arg2;	// IMP=0x0000000000127fd6
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000127fbc
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000127fa5

@end

