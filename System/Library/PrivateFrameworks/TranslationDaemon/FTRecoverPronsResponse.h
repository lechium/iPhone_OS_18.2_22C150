//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRecoverPronsResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct RecoverPronsResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000de83d
- (id)flatbuffData;	// IMP=0x00000000000de6ac
- (Offset_78eafd8b)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000dddc3
- (void)voc_tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ddc12
- (unsigned long long)voc_tokens_count;	// IMP=0x00000000000ddb76
- (id)voc_tokens_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dda7c
@property(readonly, nonatomic) NSArray *voc_tokens;
- (void)recovery_return_codes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dd7ec
- (unsigned long long)recovery_return_codes_count;	// IMP=0x00000000000dd750
- (id)recovery_return_codes_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dd675
@property(readonly, nonatomic) NSArray *recovery_return_codes;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dd3d7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecoverPronsResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000dd22c
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecoverPronsResponse *)arg2;	// IMP=0x00000000000dd217
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000dd1fd
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000dd1e6

@end
