//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechRequest, FTTextToSpeechResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTTtsTextToSpeechMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TtsTextToSpeechMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x001000000008fbf0
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x001000000008fbb0
- (void).cxx_destruct;	// IMP=0x000000000008ff7a
- (id)flatbuffData;	// IMP=0x000000000008fde9
- (Offset_62dd8be2)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000008fc7f
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTTextToSpeechResponse *session_messageAsFTTextToSpeechResponse;
@property(readonly, nonatomic) FTTextToSpeechRequest *session_messageAsFTTextToSpeechRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008f949
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TtsTextToSpeechMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000008f766
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TtsTextToSpeechMessage *)arg2;	// IMP=0x000000000008f751
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000008f737
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008f720

@end

