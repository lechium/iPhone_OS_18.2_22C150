//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString, NSURL;

@interface _TtC8CloudKit17AssetStreamHandle : NSObject
{
    MISSING_TYPE *assetStreamHandleInternal;	// 8 = 0x8
}

+ (void)makeAssetStreamHandleFrom:(NSURL *)arg1 with:(NSData *)arg2 for:(NSString *)arg3 completionHandler:(void (^)(_TtC8CloudKit17AssetStreamHandle *, NSError *))arg4;	// IMP=0x00400000000640dc
+ (id)networkRequestOptions;	// IMP=0x0040000000063c2a
- (void).cxx_destruct;	// IMP=0x000000000006545c
- (id)init;	// IMP=0x000000000006530c
- (id)makeAVAssetExportSessionWith:(id)arg1 options:(id)arg2 presetName:(id)arg3;	// IMP=0x00000000000651c2
- (id)makeAVPlayerItemWith:(id)arg1 options:(id)arg2;	// IMP=0x0000000000064c45
- (id)serializedDataAndReturnError:(id *)arg1;	// IMP=0x0000000000064741
- (id)initFrom:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000645f0
@property(nonatomic, readonly) long long size;

@end

