//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRequestMeta : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestMeta *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000109426
- (id)flatbuffData;	// IMP=0x00000000001092fb
- (Offset_ad483e0b)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000010921a
@property(readonly, nonatomic) NSString *app_id;
@property(readonly, nonatomic) long long channel_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000109173
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000108f90
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestMeta *)arg2;	// IMP=0x0000000000108f7b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000108f61
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000108f4a

@end
