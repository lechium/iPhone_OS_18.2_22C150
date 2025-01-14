//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Widgets/NSObject-Protocol.h>

@class NSURL, WGWidgetHostingViewController;

@protocol WGWidgetHostingViewControllerHost <NSObject>

@optional
- (_Bool)shouldRemoveSnapshotWhenNotVisibleForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeNonASTCSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeNonCAMLSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (_Bool)shouldPurgeArchivedSnapshotsForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didRemoveSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didEncounterProblematicSnapshotAtURL:(NSURL *)arg2;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeLargestAvailableDisplayMode:(long long)arg2;
- (long long)largestAvailableDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
- (void)widget:(WGWidgetHostingViewController *)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (long long)userSpecifiedDisplayModeForWidget:(WGWidgetHostingViewController *)arg1;
@end

