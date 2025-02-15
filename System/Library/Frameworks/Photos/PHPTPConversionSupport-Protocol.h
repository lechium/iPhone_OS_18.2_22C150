//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSString, PHPTPAsset, PHPTPConversionResult, PHPTPConversionSourceHints;

@protocol PHPTPConversionSupport <NSObject>
@property(readonly, nonatomic) _Bool peerSupportsAdjustmentBaseResources;
@property(readonly, nonatomic) _Bool peerSupportsTranscodeChoice;
@property(readonly, nonatomic) _Bool penultimateIsPublic;
- (PHPTPConversionResult *)conversionResultForPTPAsset:(PHPTPAsset *)arg1 sourceHints:(PHPTPConversionSourceHints *)arg2 forceLegacyConversion:(_Bool)arg3 assetTypeLabel:(NSString *)arg4;
@end

