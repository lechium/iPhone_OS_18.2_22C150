//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRecognitionToken : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionToken *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bbb36
- (id)flatbuffData;	// IMP=0x00000000000bb9a5
- (Offset_78c36486)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bb74e
@property(readonly, nonatomic) NSString *ipa_phone_seq;
@property(readonly, nonatomic) NSString *phone_seq;
@property(readonly, nonatomic) _Bool add_space_after;
@property(readonly, nonatomic) int confidence;
@property(readonly, nonatomic) int silence_start_milli_seconds;
@property(readonly, nonatomic) int end_milli_seconds;
@property(readonly, nonatomic) int start_milli_seconds;
@property(readonly, nonatomic) NSString *token_text;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bb51c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionToken *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bb371
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionToken *)arg2;	// IMP=0x00000000000bb35c
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bb342
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bb32b

@end
