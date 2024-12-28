//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, NSIndexSet, PXActivitySharingContext;
@protocol PXActivitySharingController;

@protocol PXSharePresentation <NSObject>
- (NSArray *)defaultActivityTypeOrder;
- (id <PXActivitySharingController>)createActivitySharingControllerWithContext:(PXActivitySharingContext *)arg1 selectedAssetIndexSet:(NSIndexSet *)arg2;
- (id <PXActivitySharingController>)createActivitySharingControllerWithContext:(PXActivitySharingContext *)arg1;
@end
