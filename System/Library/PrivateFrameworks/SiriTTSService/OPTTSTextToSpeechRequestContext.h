//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRequestContext : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechRequestContext *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010a1d7
- (id)flatbuffData;	// IMP=0x000000000010a0ac
- (Offset_07052b8d)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000109c40
@property(readonly, nonatomic) NSString *dialog_identifier;
- (void)context_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000109a2f
- (unsigned long long)context_info_count;	// IMP=0x0000000000109993
- (id)context_info_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000109873
@property(readonly, nonatomic) NSArray *context_info;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000109763
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000109580
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext *)arg2;	// IMP=0x000000000010956b
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000109551
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000010953a

@end
