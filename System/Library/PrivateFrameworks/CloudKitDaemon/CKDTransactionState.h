//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject
{
    CKDAssetBatch *_assetBatch;	// 8 = 0x8
    NSMutableDictionary *_itemsByAssetId;	// 16 = 0x10
    NSMutableDictionary *_itemsByAssetIdIgnoreRefSignature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000112bda
@property(retain, nonatomic) NSMutableDictionary *itemsByAssetIdIgnoreRefSignature; // @synthesize itemsByAssetIdIgnoreRefSignature=_itemsByAssetIdIgnoreRefSignature;
@property(retain, nonatomic) NSMutableDictionary *itemsByAssetId; // @synthesize itemsByAssetId=_itemsByAssetId;
@property(retain, nonatomic) CKDAssetBatch *assetBatch; // @synthesize assetBatch=_assetBatch;
- (id)init;	// IMP=0x0000000000112b14

@end
