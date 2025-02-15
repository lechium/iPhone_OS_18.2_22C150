//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSString;
@protocol PXDisplayAsset;

@protocol PXMutableMemoryViewModel <NSObject>
@property(nonatomic) struct UIEdgeInsets layoutMargins;
@property(nonatomic) long long variant;
@property(nonatomic) long long specSet;
@property(nonatomic) _Bool isHighlighted;
@property(retain, nonatomic) id <PXDisplayAsset> keyAsset;
@property(retain, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) NSString *localizedDateText;
@end

