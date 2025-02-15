//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVItemBuilder, NSString;

__attribute__((visibility("hidden")))
@interface KMLanguageModelBridge : NSObject
{
    NSString *_languageCode;	// 8 = 0x8
    KVItemBuilder *_builder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000a04f
- (id)_getItemWithTokenID:(unsigned int)arg1 dynamicToken:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009f6e
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009a91
- (id)originAppId;	// IMP=0x0000000000009a7d
- (unsigned short)cascadeItemType;	// IMP=0x0000000000009a6d
- (id)initWithLanguageCode:(id)arg1;	// IMP=0x00000000000099c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

