//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTAudioAnalytics : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct AudioAnalytics *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c91f5
- (id)flatbuffData;	// IMP=0x00000000000c9064
- (Offset_245a6b61)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000c8895
- (void)acoustic_features_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c86e4
- (unsigned long long)acoustic_features_count;	// IMP=0x00000000000c8648
- (id)acoustic_features_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c854e
@property(readonly, nonatomic) NSArray *acoustic_features;
- (void)speech_recognition_features_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c827f
- (unsigned long long)speech_recognition_features_count;	// IMP=0x00000000000c81e3
- (id)speech_recognition_features_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000c80e9
@property(readonly, nonatomic) NSArray *speech_recognition_features;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c7fc0
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000c7e15
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AudioAnalytics *)arg2;	// IMP=0x00000000000c7e00
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c7de6
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000c7dcf

@end
