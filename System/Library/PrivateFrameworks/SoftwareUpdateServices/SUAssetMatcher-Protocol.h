//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class MAAsset, MAMsuDownloadOptions, NSArray, NSDictionary, NSString;

@protocol SUAssetMatcher <NSObject>
@property(readonly, nonatomic) NSDictionary *matcherInfo;
@property(readonly, nonatomic) NSString *assetType;
- (void)modifyMADownloadOptions:(MAMsuDownloadOptions *)arg1;
- (MAAsset *)findMatchFromCandidates:(NSArray *)arg1 error:(id *)arg2;
@end
