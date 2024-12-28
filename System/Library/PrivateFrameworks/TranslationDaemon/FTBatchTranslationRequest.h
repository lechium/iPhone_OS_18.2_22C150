//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationOptions, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BatchTranslationRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000013c989
- (id)flatbuffData;	// IMP=0x000000000013c7f8
- (Offset_670edf35)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000013bf47
@property(readonly, nonatomic) _Bool is_partial;
@property(readonly, nonatomic) FTTranslationOptions *options;
@property(readonly, nonatomic) long long opt_in_status;
@property(readonly, nonatomic) NSString *url;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *app_id;
- (void)paragraphs_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000013bb1a
- (unsigned long long)paragraphs_count;	// IMP=0x000000000013ba7e
- (id)paragraphs_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000013b984
@property(readonly, nonatomic) NSArray *paragraphs;
@property(readonly, nonatomic) NSString *target_language;
@property(readonly, nonatomic) NSString *source_language;
@property(readonly, nonatomic) NSString *task;
@property(readonly, nonatomic) NSString *request_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013b6a3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000013b4f8
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationRequest *)arg2;	// IMP=0x000000000013b4e3
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000013b4c9
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000013b4b2

@end
