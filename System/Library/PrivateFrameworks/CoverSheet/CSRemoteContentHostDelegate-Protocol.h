//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentHostViewController, NSError, SBSRemoteContentPreferences;

@protocol CSRemoteContentHostDelegate <NSObject>
- (double)remoteContentComplicationHeightInset;
- (void)remoteContentHostViewController:(CSRemoteContentHostViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)didChangeRemoteHostContentFrame:(struct CGRect)arg1;
- (void)didChangeRemotePreferences:(SBSRemoteContentPreferences *)arg1;
- (_Bool)prefersInlineForPreferences:(SBSRemoteContentPreferences *)arg1;
@end
