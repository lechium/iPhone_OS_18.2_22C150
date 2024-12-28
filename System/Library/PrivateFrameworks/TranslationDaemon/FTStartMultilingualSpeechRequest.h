//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTStartSpeechRequest, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTStartMultilingualSpeechRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct StartMultilingualSpeechRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000139c4d
- (id)flatbuffData;	// IMP=0x0000000000139abc
- (Offset_0fc89d0c)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000139637
- (void)language_parameters_by_id_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000139486
- (unsigned long long)language_parameters_by_id_count;	// IMP=0x00000000001393ea
- (id)language_parameters_by_id_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001392f0
@property(readonly, nonatomic) NSArray *language_parameters_by_id;
@property(readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001390f4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000138f49
- (id)initWithFlatbuffData:(id)arg1 root:(const struct StartMultilingualSpeechRequest *)arg2;	// IMP=0x0000000000138f34
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000138f1a
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000138f03

@end
