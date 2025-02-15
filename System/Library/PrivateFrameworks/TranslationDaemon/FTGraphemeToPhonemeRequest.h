//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTContextWithPronHints, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTGraphemeToPhonemeRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct GraphemeToPhonemeRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e919b
- (id)flatbuffData;	// IMP=0x00000000000e900a
- (Offset_67099afb)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000e8e14
@property(readonly, nonatomic) FTContextWithPronHints *context_with_pron_hints;
@property(readonly, nonatomic) NSString *orthography;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e8bec
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000e8a41
- (id)initWithFlatbuffData:(id)arg1 root:(const struct GraphemeToPhonemeRequest *)arg2;	// IMP=0x00000000000e8a2c
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e8a12
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000e89fb

@end

