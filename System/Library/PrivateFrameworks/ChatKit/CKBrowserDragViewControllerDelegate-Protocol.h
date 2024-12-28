//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKBrowserDragControllerTarget, CKBrowserDragViewController, UIView;

@protocol CKBrowserDragViewControllerDelegate <NSObject>
- (UIView *)browserDragViewControllerTargetView:(CKBrowserDragViewController *)arg1;
- (void)browserDragViewController:(CKBrowserDragViewController *)arg1 dragEndedWithTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)browserDragViewController:(CKBrowserDragViewController *)arg1 draggedWithTarget:(CKBrowserDragControllerTarget *)arg2;
@end
