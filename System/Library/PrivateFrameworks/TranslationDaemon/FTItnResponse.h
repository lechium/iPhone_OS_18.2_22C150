//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTItnResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ItnResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e0686
- (id)flatbuffData;	// IMP=0x00000000000e04f5
- (Offset_3e5afc79)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000dff2e
- (void)formatted_words_list_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dfd7d
- (unsigned long long)formatted_words_list_count;	// IMP=0x00000000000dfce1
- (id)formatted_words_list_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000dfbe7
@property(readonly, nonatomic) NSArray *formatted_words_list;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000df8db
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000df730
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnResponse *)arg2;	// IMP=0x00000000000df71b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000df701
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000df6ea

@end

