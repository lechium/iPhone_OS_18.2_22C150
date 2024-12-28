//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol BCSAction;

@protocol BCSActionDelegate <NSObject>

@optional
- (void)actionDidUpdateTitle:(id <BCSAction>)arg1;
- (NSArray *)actionPickerItemsForAction:(id <BCSAction>)arg1 proposedItems:(NSArray *)arg2;
- (struct CGRect)sourceRectForPopoverActionPicker:(id <BCSAction>)arg1;
- (UIViewController *)presentingViewControllerForAction:(id <BCSAction>)arg1;
@end
