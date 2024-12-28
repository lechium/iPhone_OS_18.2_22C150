//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTVocToken : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct VocToken *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000daa0e
- (id)flatbuffData;	// IMP=0x00000000000da87d
- (Offset_2bafd346)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000da6cd
- (void)blob:(CDUnknownBlockType)arg1;	// IMP=0x00000000000da65e
@property(readonly, nonatomic) NSData *blob;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000da59a
- (id)initWithFlatbuffData:(id)arg1 root:(const struct VocToken *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000da3ef
- (id)initWithFlatbuffData:(id)arg1 root:(const struct VocToken *)arg2;	// IMP=0x00000000000da3da
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000da3c0
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000da3a9

@end
