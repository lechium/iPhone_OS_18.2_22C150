//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTAudioAnalytics_SpeechRecognitionFeaturesEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct SpeechRecognitionFeaturesEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c9731
- (id)flatbuffData;	// IMP=0x00000000000c95a0
- (Offset_83df3730)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c94b5
@property(readonly, nonatomic) float value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c940e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechRecognitionFeaturesEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c9263
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SpeechRecognitionFeaturesEntry *)arg2;	// IMP=0x00000000000c924e
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c9234
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c921d

@end
