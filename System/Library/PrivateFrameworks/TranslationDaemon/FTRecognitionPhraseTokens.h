//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTRecognitionPhraseTokens : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecognitionPhraseTokens *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bc771
- (id)flatbuffData;	// IMP=0x00000000000bc5e0
- (Offset_8140066c)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000bc1cf
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bc01e
- (unsigned long long)tokens_count;	// IMP=0x00000000000bbf82
- (id)tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bbe88
@property(readonly, nonatomic) NSArray *tokens;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000bbd4f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokens *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000bbba4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecognitionPhraseTokens *)arg2;	// IMP=0x00000000000bbb8f
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bbb75
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000bbb5e

@end

