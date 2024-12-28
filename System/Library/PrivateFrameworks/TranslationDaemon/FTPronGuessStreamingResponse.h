//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTPronGuessResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTPronGuessStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct PronGuessStreamingResponse *_root;	// 24 = 0x18
}

+ (long long)content_typeForImmutableObject:(id)arg1;	// IMP=0x001000000017a43f
+ (Class)content_immutableClassForType:(long long)arg1;	// IMP=0x001000000017a411
- (void).cxx_destruct;	// IMP=0x000000000017a720
- (id)flatbuffData;	// IMP=0x000000000017a58f
- (Offset_47dc73e1)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000017a49a
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017a2a7
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000017a0c4
- (id)initWithFlatbuffData:(id)arg1 root:(const struct PronGuessStreamingResponse *)arg2;	// IMP=0x000000000017a0af
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000017a095
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000017a07e

@end
