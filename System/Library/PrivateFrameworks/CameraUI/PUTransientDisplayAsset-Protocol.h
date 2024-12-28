//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/PUDisplayAsset-Protocol.h>

@class NSString, NSURL, UIImage;

@protocol PUTransientDisplayAsset <PUDisplayAsset>
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property(readonly, copy, nonatomic) NSString *burstIdentifier;
@property(readonly, nonatomic, getter=isHDR) _Bool HDR;
@property(readonly, copy, nonatomic) NSURL *persistenceURL;
@end
