//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest
{
    _Bool _writeRepairRecord;	// 8 = 0x8
    CDUnknownBlockType _assetBrokenBlock;	// 16 = 0x10
    CKUploadRequestMetadata *_metadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003d9db7
@property(nonatomic) _Bool writeRepairRecord; // @synthesize writeRepairRecord=_writeRepairRecord;
@property(copy, nonatomic) CKUploadRequestMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType assetBrokenBlock; // @synthesize assetBrokenBlock=_assetBrokenBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000003d9caa
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000003d9a83
- (id)generateRequestOperations;	// IMP=0x00000000003d95f1
- (id)requestOperationClasses;	// IMP=0x00000000003d9585
- (void)fillOutRequestProperties:(id)arg1;	// IMP=0x00000000003d9479
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000003d93de
- (id)initWithOperation:(id)arg1 assetOrPackageMetadata:(id)arg2 writeRepairRecord:(_Bool)arg3;	// IMP=0x00000000003d9354

@end
