//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationSupportedLanguagesResponse_LanguagePair : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguagePair *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014541b
- (id)flatbuffData;	// IMP=0x000000000014528a
- (Offset_614cd169)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000145153
@property(readonly, nonatomic) NSString *target_locale;
@property(readonly, nonatomic) NSString *source_locale;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014506c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000144ec1
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair *)arg2;	// IMP=0x0000000000144eac
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000144e92
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000144e7b

@end
