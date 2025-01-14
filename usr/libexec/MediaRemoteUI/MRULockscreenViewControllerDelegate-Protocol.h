//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRUArtworkView, MRULockscreenViewController, NSArray;

@protocol MRULockscreenViewControllerDelegate <NSObject>
- (void)lockscreenViewController:(MRULockscreenViewController *)arg1 didUpdateRestrictedRects:(NSArray *)arg2;
- (void)lockscreenViewController:(MRULockscreenViewController *)arg1 didUpdatePreferredContentSize:(struct CGSize)arg2;
- (_Bool)lockscreenViewController:(MRULockscreenViewController *)arg1 didSelectArtworkView:(MRUArtworkView *)arg2;
@end

