//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSStartTextToSpeechStreamingRequest_ContextInfoEntry : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ContextInfoEntry *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011bc74
- (id)flatbuffData;	// IMP=0x000000000011bb49
- (Offset_0dc7c184)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011ba0a
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *key;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011b923
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011b740
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ContextInfoEntry *)arg2;	// IMP=0x000000000011b72b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011b711
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011b6fa

@end

