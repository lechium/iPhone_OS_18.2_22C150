//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSMutableArray, UIViewController;

@protocol CNQuickActionsViewDelegate <NSObject>
- (UIViewController *)viewControllerForActionsView:(id)arg1;

@optional
- (void)actionsView:(id)arg1 didPerformAction:(id)arg2;
- (void)actionsView:(id)arg1 willShowActions:(NSMutableArray *)arg2;
@end
