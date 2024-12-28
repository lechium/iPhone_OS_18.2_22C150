//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioPacket, FTFinishAudio, FTStartLanguageDetectionRequest, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageDetectionStreamingRequest *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x0010000000188720
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x00100000001886e6
- (void).cxx_destruct;	// IMP=0x0000000000188b44
- (id)flatbuffData;	// IMP=0x00000000001889b3
- (Offset_f9a9e10b)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001887d4
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property(readonly, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property(readonly, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018839a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000001881b7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionStreamingRequest *)arg2;	// IMP=0x00000000001881a2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000188188
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000188171

@end
