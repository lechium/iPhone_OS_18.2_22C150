//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLmScorerRequest : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LmScorerRequest *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001025a7
- (id)flatbuffData;	// IMP=0x0000000000102416
- (Offset_faaa60fe)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010226d
@property(readonly, nonatomic) NSString *transcript;
@property(readonly, nonatomic) NSString *task_name;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000102118
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerRequest *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000101f6d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerRequest *)arg2;	// IMP=0x0000000000101f58
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000101f3e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000101f27

@end
