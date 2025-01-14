//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTServiceDiscoveryRequest, FTServiceDiscoveryResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTBlazarServiceDiscoveryMessage : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct BlazarServiceDiscoveryMessage *_root;	// 24 = 0x18
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;	// IMP=0x001000000008d9e8
+ (Class)session_message_immutableClassForType:(long long)arg1;	// IMP=0x001000000008d9a8
- (void).cxx_destruct;	// IMP=0x000000000008dd72
- (id)flatbuffData;	// IMP=0x000000000008dbe1
- (Offset_e361e3f1)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000008da77
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTServiceDiscoveryResponse *session_messageAsFTServiceDiscoveryResponse;
@property(readonly, nonatomic) FTServiceDiscoveryRequest *session_messageAsFTServiceDiscoveryRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008d741
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarServiceDiscoveryMessage *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000008d55e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarServiceDiscoveryMessage *)arg2;	// IMP=0x000000000008d549
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000008d52f
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000008d518

@end

