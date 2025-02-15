//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@protocol QLPreviewControllerConformingDataSource, QLPreviewControllerConformingDelegate, QLPreviewItem;

@protocol QLPreviewControllerConforming <NSObject>
+ (_Bool)canPreviewItem:(id <QLPreviewItem>)arg1;
@property(readonly) id <QLPreviewItem> currentPreviewItem;
@property long long currentPreviewItemIndex;
@property(nonatomic) __weak id <QLPreviewControllerConformingDelegate> delegate;
@property(nonatomic) __weak id <QLPreviewControllerConformingDataSource> dataSource;
- (void)refreshCurrentPreviewItem;
- (void)reloadData;
@end

