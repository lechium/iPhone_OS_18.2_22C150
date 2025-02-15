//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSBeginTextToSpeechStreamingResponse, OPTTSFinalTextToSpeechStreamingResponse, OPTTSPartialTextToSpeechStreamingResponse;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRouterStreamingStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000120596
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000012055c
- (void).cxx_destruct;	// IMP=0x00000000001204fe
- (id)flatbuffData;	// IMP=0x00000000001203d3
- (Offset_8714228f)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001201fd
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property(readonly, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property(readonly, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011feb1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011fbc9
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingResponse *)arg2;	// IMP=0x000000000011fbb4
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011fb9a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011fb83

@end

