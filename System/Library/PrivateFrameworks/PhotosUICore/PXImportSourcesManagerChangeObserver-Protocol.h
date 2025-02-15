//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSArray, PHImportSource, PXImportSourcesManager;

@protocol PXImportSourcesManagerChangeObserver <PXChangeObserver>

@optional
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didRemoveImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didUpdateImportSource:(PHImportSource *)arg2;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didFailToAddImportSource:(PHImportSource *)arg2 exceptions:(NSArray *)arg3;
- (void)importSourcesManager:(PXImportSourcesManager *)arg1 didAddImportSource:(PHImportSource *)arg2;
@end

