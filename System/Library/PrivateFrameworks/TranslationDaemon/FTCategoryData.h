//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTCategoryData : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct CategoryData *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d7721
- (id)flatbuffData;	// IMP=0x00000000000d7590
- (Offset_f5319539)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000d70e8
- (void)category_data_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6f37
- (unsigned long long)category_data_count;	// IMP=0x00000000000d6e9b
- (id)category_data_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d6da1
@property(readonly, nonatomic) NSArray *category_data;
@property(readonly, nonatomic) NSString *category_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d6c0a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CategoryData *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000d6a5f
- (id)initWithFlatbuffData:(id)arg1 root:(const struct CategoryData *)arg2;	// IMP=0x00000000000d6a4a
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d6a30
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000d6a19

@end
