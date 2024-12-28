//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionPhraseTokensAlternatives : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionPhraseTokensAlternatives *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bd417
- (id)flatbuffData;	// IMP=0x00000000000bd286
- (Offset_b504f884)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bce2b
@property(readonly, nonatomic) _Bool has_unsuggested_alternatives;
- (void)tok_phrases_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bcc49
- (unsigned long long)tok_phrases_count;	// IMP=0x00000000000bcbad
- (id)tok_phrases_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bcab3
@property(readonly, nonatomic) NSArray *tok_phrases;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bc98a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bc7df
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokensAlternatives *)arg2;	// IMP=0x00000000000bc7ca
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bc7b0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bc799

@end
