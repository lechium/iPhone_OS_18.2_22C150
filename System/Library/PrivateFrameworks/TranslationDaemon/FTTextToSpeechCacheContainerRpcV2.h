//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechRequest, FTTextToSpeechResponse, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechCacheContainerRpcV2 : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechCacheContainerRpcV2 *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012269f
- (id)flatbuffData;	// IMP=0x000000000012250e
- (Offset_b2e411c1)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000001223c1
@property(readonly, nonatomic) FTTextToSpeechResponse *cached_response;
@property(readonly, nonatomic) FTTextToSpeechRequest *cached_request;
@property(readonly, nonatomic) NSString *original_session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001221a2
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerRpcV2 *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000121ff7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheContainerRpcV2 *)arg2;	// IMP=0x0000000000121fe2
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000121fc8
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000121fb1

@end

